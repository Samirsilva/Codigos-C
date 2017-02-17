#include <stdio.h>
#include <stdlib.h>
 
main(){
       
        FILE *arq;
        int i , x , ini , fim , primo = 0;
       
        arq = fopen ("primo.txt","w");
       
                if(arq == NULL){
                       
                        printf("Erro na Gravacao!!");
                        system("pause");
                        exit(-1);
                       
                }
               
                        printf("Informe o valor de inicio:"); scanf("%d",&ini);
                        printf("Informe o valor final:");     scanf("%d",&fim);
                       
                                for(i =  ini ; i <=fim ; i++){
                                        primo = 0;
                                        for(x = 1; x<= i ; x++){
                                                if(i %x ==0){
                                                        primo++;
                                                       
                                                }
                                        }
                                       
                                                if(primo == 2){
                                                       
                                                        fprintf(arq, "Os primos são: %d.\n",i);
                                                }
                                }
                       
               
       
       
       
       
       
        system("pause");
}
