#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = (*a);
    (*a)=(*b);
    (*b)=temp;
}
void selectionSort(int* v, int n)
{
    int indexMin, last=0;
    while(last<n)
    {
        indexMin = last;
        for(int i=last+1; i<n; i++)
        {
            if(v[i]<v[indexMin])
                indexMin = i;
        }
        if(indexMin!=last)
            swap(v+indexMin, v+last);
        last++;
    }
}

int main ()
{
    int v[] = {2,3,1};
    for(int i=0; i<3; i++)
        printf("%d  ",v[i]);
    printf("\n");
    selectionSort(v,3);
    for(int i=0; i<3; i++)
        printf("%d  ",v[i]);
    printf("\n");
}