#include <stdio.h>

main(void){

int const tab[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int inp,inpvalue;


printf("Insira um numero:\n->");
scanf("%d", &inp);
for(int x=0; x < 10; x++){
    inpvalue=inp*tab[x];
    printf("%d * %d = %d\n",inp,tab[x],inpvalue);
}

}
