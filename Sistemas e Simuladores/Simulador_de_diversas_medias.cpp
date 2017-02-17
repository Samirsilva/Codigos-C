#include <stdio.h>
#include <conio.h>
 
struct aluno {
       
        int matricula, media, sexo, idade;
        char nome[15];
  }vet[3];
 
 
main(){
 
        int i, idd=0, mediaIdd, turma=0, mediaTurma;
        int maiorI=0, menorI=0;
        int maiorM=0, menorM=0;
        int porcM=0, resulM;
        int porcF=0, resulF;
        int porcO=0, resulO;
       
        for(i=0; i<3; i++){
               
                printf("Informe sua matricula:\n"); scanf("%d", &vet[i].matricula);
               
                printf("Informe seu nome:\n"); scanf("%s", &vet[i].nome);              
                               
                printf("Informe seu sexo: 1-Masculino   2-Feminino    3-Indefinido\n"); scanf("%d", &vet[i].sexo);
               
                printf("Informe sua idade:\n"); scanf("%d", &vet[i].idade);
               
                printf("Informe sua media:\n"); scanf("%d", &vet[i].media);
               
                       
        }
       
       
        for(i=0; i<3; i++){
               
                idd += vet[i].idade;                                                                            //MEDIA DA IDADE
                mediaIdd = idd /2;
               
               
                turma += vet[i].media;                                                                          //MEDIA DA TURMA
                mediaTurma = turma /2;
               
               
               
               
                maiorI=vet[0].idade;
                menorI=vet[0].idade;
               
                if(maiorI>vet[i].idade){                                                                        // MAIOR E MENOR IDADE
                        maiorI=vet[i].idade;                   
                }
 
                if(menorI<vet[i].idade){
                        menorI=vet[i].idade;
                }
               
               
               
                maiorM=vet[0].media;
                menorM=vet[0].media;
               
                if(maiorM>vet[i].media){                                                                        // MAIOR E MENOR MEDIA
                        maiorM=vet[i].media;
                }
                if(menorM<vet[i].media){
                        menorM=vet[i].media;
                }
               
               
               
                if(vet[i].sexo==1){
               
                        porcM++;
                        //      printf("%d", porcO);
                        resulM = (porcM*100)/3;
                }
       
                if(vet[i].sexo==2){
                        porcF++;
                        resulF = (porcF*100)/3;
                }
       
                if(vet[i].sexo==3){
                        porcO++;
                        resulO = (porcO*100)/3;
                }
 
        }//for
               
                               
               
                printf("Media idade:%d \n", mediaIdd);
                printf("Media turma:%d \n\n\n", mediaTurma);
                printf("Maior idade:%d \n", maiorI);
                printf("Menor idade:%d \n\n\n", menorI);
                printf("Percentual: %d \n", resulM);
                printf("Percentual: %d \n", resulF);
                printf("Percentual: %d \n", resulO);
        getch();
}
