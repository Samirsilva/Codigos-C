#include <stdio.h>
#include <stdlib.h>
 
void armazenar (int vet[],int qtd);
void ordenar (int vet[], int qtd , int tipo);
void escrever (int vet[], int qtd);
 
     main(){
     int numero[10];
     int q=10,x;
     armazenar(numero,q);
     ordenar(numero,10,0);
     escrever(numero,10);
 
     system("pause");
     }
 
void armazenar (int vet[],int qtd){
 
     int x;
 
     for(x=0; x<qtd ; x++){
        scanf("%d",&vet[x]);
     }
}
void ordenar(int vet[] , int qtd , int tipo){
 
int  x , y , troca ;
 
    if(tipo==0){
       for(x=0 ; x<qtd ; x++){
           for(y=(x+1) ; y<qtd ; y++){
               if(vet[x] > vet[y]){
       
                   troca = vet[x] ; vet[x] = vet[y] ; vet[y] = troca;
                }
           }
       }
    }
    else{
 
         for(x=0 ; x<qtd ; x++){
            for(y=(x+1) ; y<qtd ; y++){
                if(vet[x]<vet[y])
                   troca=vet[x];
                   vet[x]=vet[y];
                   vet[y]=troca;
            } } }
}
void escrever (int vet[] , int qtd){
 
 int x;
 
       for(x= 0 ; x<qtd ; x++){
              printf("%d",vet[x]);
       }
}
