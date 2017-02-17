#include <stdio.h>
#include <stdlib.h>

void CadastroCliente(int qt ,struct CLIENTE x[]);
void ConsultarCliente(int qt,struct CLIENTE x[]);
void ImprimirFichas(int qt ,struct CLIENTE x[]);
void QuantidadeExames(int qt,struct CLIENTE x[]);
void QuantidadeSexo(int qt,struct CLIENTE x[]);
void ExameMamografia(int qt,struct CLIENTE x[]);
void ExamesMais(int qt,struct CLIENTE x[]);
 

struct CLIENTE{
        int cpf , idade,exame,sexo;
        char nome[20],sobre[20],nomeMedi[20];
};
 
main(){
        int  acao,escolha,cont =0, senha, qtd;
        struct CLIENTE cadCliente[99];
         
                printf("         ************************************************************\n                B E M   V I N D O   A O    C A D   F A C I L      \n         ************************************************************\n\n\n");
               
                printf("                    1.A C E S S O   A O   S I S T E M A .\n"); printf("\n\n                                    "); scanf("%d",&acao);
       
                system("cls");
               
                printf("\n\n\n\n\n\n\n\n\n                          Digite a senha de acesso:"); scanf("%d",&senha);
                system("cls");
                                while(senha!=102030){
                                        printf("\n\n\n\n\n\n\n\n\n                          Senha incorreta!");
                                        printf("\n\n\n\n\n                          Digite a senha de acesso:"); scanf("%d",&senha);
                                        system("cls");
                                        cont++;
                                }
                                                       
                printf("\n\n\n\n\n\n\n\n\n\n\n          Quantos clientes serao importado para o banco de dados?"); scanf("%d",&qtd);   
                system("cls"); 
                                               
                        while(escolha!=8){
                                               
                                printf("         *********************************************************\n                M  E  N  U      P  R  I  N  C  I  P A  L \n         *********************************************************\n\n\n");
                                       
                                        printf("\n\n\n\n1.Cadastro do Cliente.\n\n2.Imprimir Fichas\n\n3.Consulta de cliente.\n\n4.Quantidade de Exames.\n\n5.Quantidade por sexo.\n\n6.Dados Mamografia.\n\n7.Exame mais realizado do dia.\n\n8.Sair do sistema.\n\n\n");
                                                scanf("%d",&escolha);
                                                system("cls");
                                               
                               
               
                                                        switch(escolha){
                                                                case 1:
                                                                        CadastroCliente(qtd,cadCliente);
                                                                        break; 
                                                                case 3:
                                                                        ConsultarCliente(qtd,cadCliente);      
                                                                        break;
                                                                case 2:
                                                                        ImprimirFichas(qtd,cadCliente);
                                                                        break;
                                        case 4:
                                                QuantidadeExames(qtd,cadCliente);
                                                break; 
                                        case 5:
                                                 QuantidadeSexo(qtd,cadCliente);
                                                break;
                                        case 6:
                                                                        ExameMamografia(qtd,cadCliente);        
                                                break;
                                        case 7:
                                                ExamesMais(qtd,cadCliente);
                                                break;
                                                        }                      
                        cont++;        
                        }
system("pause");
}

void CadastroCliente(int qt, struct CLIENTE x[]){
       
        int i;
               
                for(i = 1 ; i <=qt ; i++){
                               
                        printf("\n\n\n\n\nDigite o nome do cliente:");                          scanf(" %s",&x[i].nome);
                        printf("\nDigite o sobrenome do cliente %s:",x[i].nome); scanf(" %s",&x[i].sobre);
                        printf("\nDigite o sexo do cliente %s:\n1.Masculino\n2.Feminino",x[i].nome);
                                                                  scanf(" %d",&x[i].sexo);
                        printf("\nDigite a idade do cliente %s:",x[i].nome);     scanf("%d",&x[i].idade);
                        printf("\nDigite o CPF do cliente %s:",x[i].nome);       scanf("%d",&x[i].cpf);
                        printf("\nExcolha o exame a ser feito:\n");              
                        printf("-001: Raio x.\n\n-002: Mamografia.\n\n-003: Ultrassonografia.\n\n-004: Ressonancia.\n\n");
                                                                  scanf("%d",&x[i].exame);
                        printf("\nNome do medico:");                                                                            scanf(" %s",&x[i].nomeMedi);
                        system("cls");
}}

void ConsultarCliente(int qt,struct CLIENTE x[]){
       
        int i , consul, cp, cont =0;
       
                while(consul !=1){
                               
                        printf("\ninforme o cpf: "); scanf("%d",&cp);
                        system("cls");         
                               
                                for(i = 1 ; i <=qt ; i++){
                               
                                        if(cp == x[i].cpf){
                                               
                                                printf("Nome do cliente: %s.\n\n",x[i].nome);
                                                printf("Sobrenome do cliente: %s.\n\n",x[i].sobre);        
                                                if(x[i].sexo == 1){                  
                                                printf("Sexo do cliente: Masculino.\n\n");
                  }
                  if(x[i].sexo == 2){
                        printf("Sexo do cliente: Feminino.\n\n");    
                  }
                                                printf("CPF do cliente: %d.\n\n",x[i].cpf);
                                                printf("Idade do cliente: %d.\n\n",x[i].idade);
                                                if(x[i].exame == 001){
                  printf("Exame marcado: Raio-x.\n\n");                
                  }
                                                if(x[i].exame == 002){
                  printf("Exame marcado: Mamografia.\n\n");                
                  }
                  if(x[i].exame == 003){
                  printf("Exame marcado: Ultrassonografia.\n\n");                
                  }
                  if(x[i].exame == 004){
                  printf("Exame marcado: Ressonancia.\n\n");                
                  }
                                                printf("Nome do medico : %s\n\n",x[i].nomeMedi);
                                        }
                                               
                                       
                                                               
                                }      
                                        printf("Ir para o menu? 1-Sim - 2-Nao.")        ; scanf("%d",&consul);
                                        system("cls"); 
                cont++;        
                }                      
}

void ImprimirFichas(int qt,struct CLIENTE x[]){
       
        int i,b,cont= 0;
       
                while(b!=1){
                       
                        for(i = 1 ; i <=qt ; i++){
                       
                                printf("\n\nCliente %d :\n\n\n",i);                    
                                printf("Nome do cliente: %s.\n\n",x[i].nome);
                                printf("Sobrenome do cliente: %s.\n\n",x[i].sobre);
                                if(x[i].sexo == 1){                  
                                printf("Sexo do cliente: Masculino.\n\n");
            }
            if(x[i].sexo == 2){
                printf("Sexo do cliente: Feminino.\n\n");    
            }
                                printf("CPF do cliente: %d.\n\n",x[i].cpf);
                                printf("Idade do cliente: %d.\n\n",x[i].idade);
                                if(x[i].exame == 001){
                                printf("Exame marcado: Raio-x.\n\n");  
                                }                                        
                                if(x[i].exame == 002){
            printf("Exame marcado: Mamografia.\n\n");                
            }
            if(x[i].exame == 003){
                      printf("Exame marcado: Ultrassonografia.\n\n");                
            }
            if(x[i].exame == 004){
            printf("Exame marcado: Ressonancia.\n\n");                
            }
                                printf("Nome do medico : %s\n\n",x[i].nomeMedi);                               
                        }
                                                printf("Ir pro menu principal, 1.Sim \ 2.Nao ?");scanf("%d",&b);
                                                system("cls");
                                               
                cont++;
                }
}

void QuantidadeExames(int qt ,struct CLIENTE x[]){
   
         int i,cont=0,cont2=0,cont3=0,cont4=0,contW=0,a;
       
                while(a!=1){
                           
          for(i = 1 ; i <=qt ; i++){
               
             if(x[i].exame == 001){
               cont++;
             }
             if(x[i].exame == 002){
               cont2++;
             }
             if(x[i].exame == 003){
               cont3++;
             }
             if(x[i].exame == 004){
               cont4++;
             }
                           
          }
          printf("\n\nQuantidade de Raio-x Realizados: %d.\n",cont);
          printf("\n\nQuantidade de Mamografia Realizados: %d.\n",cont2);
          printf("\n\nQuantidade de Ultrassonografia Realizados: %d.\n",cont3);
          printf("\n\nQuantidade de Ressonancia Realizados: %d.\n",cont4);
         
          printf("Ir para o menu? 1-Sim. - 2 - Nao."); scanf("%d",&a);
          system("cls");
         
      contW++;
        }
}

void QuantidadeSexo(int qt,struct CLIENTE x[]){
       
          int i,cont=0,cont2=0,a,contW=0;
         
         while(a!=1){
         
                                 for(i = 1 ; i <=qt ; i++){
               
                 if(x[i].sexo == 1){
                 cont++;
                 }
                if(x[i].sexo == 2){
                         cont2++;
                }
        }
       
                                        printf("\n\nQuantidade de Homens atendidos: %d.\n",cont);
                   printf("\n\nQuantidade de Mulheres atendidas: %d.\n\n",cont2);
                        printf("Ir para o menu? 1-Sim. - 2 - Nao."); scanf("%d",&a);
                                        system("cls");
                       
                        contW++;
                        }
}

void ExameMamografia(int qt,struct CLIENTE x[]){
       
        int i , contW = 0,a;
       
                while(a!=1){
       
                       
                        for(i = 1 ; i<=qt ; i++){
               
                       
                                if(x[i].exame == 002){
                               
                                        printf("\n\nCliente %d :\n\n\n",i);
                       
                                        printf("Nome do cliente: %s.\n\n",x[i].nome);
                                        printf("Sobrenome do cliente: %s.\n\n",x[i].sobre);
                                        if(x[i].sexo == 1){                  
                                        printf("Sexo do cliente: Masculino.\n\n");
               }
               if(x[i].sexo == 2){
                printf("Sexo do cliente: Feminino.\n\n");    
               }
                                        printf("CPF do cliente: %d.\n\n",x[i].cpf);
                                        printf("Idade do cliente: %d.\n\n",x[i].idade);
                                        if(x[i].exame == 001){
               printf("Exame marcado: Raio-x.\n\n");                
               }
                                        if(x[i].exame == 002){
               printf("Exame marcado: Mamografia.\n\n");                
               }
               if(x[i].exame == 003){
               printf("Exame marcado: Ultrassonografia.\n\n");                
               }
               if(x[i].exame == 004){
               printf("Exame marcado: Ressonancia.\n\n");                
               }
                                        printf("Nome do medico : %s\n\n",x[i].nomeMedi);
                                }
                        }
               
       
                                        printf("Ir para o menu? 1-Sim. - 2 - Nao."); scanf("%d",&a);
                                        system("cls");
               
                        contW++;
                }
}

void ExamesMais(int qt,struct CLIENTE x[]){
               
        int i,cont=0,cont2=0,cont3=0,cont4=0,contW=0,a;
       
                while(a!=1){
                           
          for(i = 1 ; i <=qt ; i++){
               
             if(x[i].exame == 001){
               cont++;
             }
             if(x[i].exame == 002){
               cont2++;
             }
             if(x[i].exame == 003){
               cont3++;
             }
             if(x[i].exame == 004){
               cont4++;
             }
                           
          }
                if(cont>cont2 && cont > cont3 && cont >cont4){
                       
                        printf("\n\nO Raio-x foi o mais realizado com %d exames.\n\n",cont);           
                        }
                        if(cont2>cont && cont2 > cont3 && cont2 >cont4){
                       
                        printf("\n\nA mamografia foi a mais realizada com %d exames.\n\n",cont2);              
                        }      
                if(cont3>cont && cont3 > cont2 && cont3 >cont4){
                       
                        printf("\n\nA Ultrassonografia foi a mais realizada com %d exames.\n\n",cont3);        
                        }
                if(cont4>cont && cont4 > cont2 && cont4 >cont3){
                       
                        printf("\n\nA Ressonancia foi a mais realizada com %d exames.\n\n",cont4);             
                        }
                       
          printf("Ir para o menu? 1-Sim. - 2 - Nao."); scanf("%d",&a);
          system("cls");
         
      contW++;
        }   
}
