#include <stdio.h>

main(void){
int const arrays[10]={0,10,20,30,40,50,60,70,90,100};
int soma=0;
for(int x=0; x < 10;x++){
        soma=soma+(arrays[x]);
        printf("%d\n", soma);
}
    printf("\n\nA soma total e %d\n", soma);
}
