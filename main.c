#include <stdio.h>

int main()
{
    int nb = 3;
    while(nb != 10){
    //printf(nb,"\n");
    printf("%d\n-nb-", nb);

    int varTest = nb-1;
    printf("%d\n-modulo-", nb%varTest);

    do{
        varTest--;
        if(nb%varTest != 0){
            printf("%d\n-premier avec-", varTest);
            varTest = 1;
        }
        
    }while(nb%varTest != 0);

    nb++;
    }

    return 0;
}
