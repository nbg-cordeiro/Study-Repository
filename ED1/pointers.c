#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    char letter;
    int x;
    int y;
}point;

point createPoint(char, int, int);
point* createPoints(int, int*, int*);
void deletePoints(point**);
void check(point, point);
double distance(point,point);

int main (void)
{
    point a = createPoint('A', 0, 0);
    point b = createPoint('b', 1, 1);
    check(a,b);


    int x[2] = {0,2};
    int y[2]={0,2};
    point* points=createPoints(2,x,y);

    check(points[0],points[1]);

    deletePoints(&points);

    return 0;
}

point createPoint(char c, int x, int y)
{
    point newPoint;

    if(c>='A' && c<='Z')
        newPoint.letter=c;
    else if( c>='a' && c<='z')
        newPoint.letter=c-('a'-'A');
    else
        newPoint.letter=0;
    
    newPoint.x=x;
    newPoint.y=y;
    return newPoint;
}

point* createPoints(int n,int* xs, int* ys){
    point* points = calloc(n,sizeof(point));

    for(int i=0; i<n; i++){
        if(('A' - i) <= 'Z'){
            points[i].letter='Z' - i;
        }
        else{
            points[i].letter=0;
        }
        points[i].x = xs[i];
        (points+i)->y = *(ys+i);
    }

    return points;
}

void deletePoints(point** a)
{
    free(*a);
    *a=NULL;
}

double distance(point pointA,point pointB){
    double hor = (pointA.x - pointB.x);
    hor*=hor;
    double ver = (pointA.y - pointB.y);
    ver*=ver;

    double dist= ver+hor;
    dist=sqrt(dist);

    return dist;
}

void check(point a, point b)
{
    printf("point %c = (%d, %d)\n",a.letter, a.x,a.y);
    printf("point %c = (%d, %d)\n",b.letter, b.x, b.y);
    double dis = distance(a,b);
    printf("distance between %c and %c: %.2lf \n\n", a.letter, b.letter, dis);
}

int* range(int min, int max)
{
    if(min>max)
        return NULL;
    int *vet = malloc(sizeof(int)*((1 + max) - min));
    for(int i=0; (min+i) <= max; i++)
        vet[i]=min+i;

    return vet;
}