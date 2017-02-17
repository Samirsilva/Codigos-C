#include <stdio.h>
 
main(){
       
        FILE *arq_teste;
 
        int n;
        arq_teste = fopen("teste.txt","r");
 
        if(arq_teste == NULL){
               
                ,
                printf("Erro na abertura do arquivo teste.txt.\n");
                system("pause");                       
                exit(-1);
        }
       
        while(!feof(arq_teste)) {
                fscanf(arq_teste,"%d",&n);
                printf("%d\n",n);
        }
       
        fclose(arq_teste);
        system("pause");
}
