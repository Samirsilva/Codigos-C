#include <stdio.h>
#include <stdlib.h>
 
main(){
        int *p,i,qtd,j,troca;
        printf("digite a quantidade: ");
        scanf("%d",&qtd);
 
        p=malloc(sizeof(int)*qtd);
       
        for(i=0;i<qtd;i++){
                printf("digite um numero");
                scanf("%d",(p+i));
        }
       
        for(i=0;i<qtd-1;i++){
                for(j=i+1;j<qtd;j++){
                        if(*(p+i)>*(p+j)){
                                troca= *(p+i);
                                *(p+i)= *(p+j);
                                *(p+j)=troca;
                        }
                }
        }
       
        for(i=0;i<qtd;i++){
                printf("%d\n",*(p+i));
               
        }
       
        system("pause");
}
