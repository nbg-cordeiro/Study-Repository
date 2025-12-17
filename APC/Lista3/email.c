#include <stdio.h>

int main ()
{
    char primeiro[101];
    char ultimo[101];
    scanf("%s", primeiro);
    while(scanf("%s", ultimo)!=EOF);

    for(int i=0; primeiro[i] != '\0'; i++){
        if(primeiro[i]<='Z' && primeiro[i]>='A')
            primeiro[i]+=32;
    }

    for(int i=0; ultimo[i] != '\0'; i++){
        if(ultimo[i]<='Z' && ultimo[i]>='A')
            ultimo[i]+=32;
    }
    
    printf("%s.%s@unb.br", primeiro,ultimo);

    return 0;
}