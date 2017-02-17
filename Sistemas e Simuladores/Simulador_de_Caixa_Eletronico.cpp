/*Software que simula um sistema de caixa eletrônico.
 *
 *@autor Samir Silva.
 *    
*/

#include <stdio.h>
#include <conio.h>
 
// Area para declaração de todas as variaveis globais.
int nconta, pin;
float  valorBruto = 120.000;
 
int menu(); // Ddeclaração das funçôes usadas.
int checasaldo();
int retiraquantia();                  
int depositar();
 
 
int main(){
       
        // menu inicial.
               
        do{
                printf(" \t Bem vindo!!\n \n \n");
                                                       
                printf("Digite o numero da sua conta bancaria de 5 digitos: ");
                scanf("%d", &nconta);  
               
                system("cls");/* limpa a tela para que a menssagem n seja
                                        mostrada a todo momento, caso o usuario didite um valor errado. */
                                       
        }while(nconta >= 100000 || nconta <= 9999 );
       
        do{
                                               
                printf("digite o seu seu PIN de acesso de 3 digitos: ");
                scanf("%d", &pin);
               
                system("cls"); // já informado mas a cima.
        }while(pin >= 1000 || pin <= 99);
       
       
        menu();
       
        return 0;
        gatch();
}
 
int menu(){
       
        printf("1 - Para acessar o seu saldo. \n\n");
        printf("2 - Para retira uma quantia. \n\n");
        printf("3 - Para depositar um valor. \n\n");
        printf("4 - Para sair. \n\n");
       
        int opc;
        scanf("%d", &opc);
       
       
        system("cls"); /* limpa a tela para que a menssagem de opçoes n seja mostrada a todo momento caso o usuario didite um valor errado. */
                                       
        // switch que vai verificar o que o usuario quer, levandou então a função correta. ;)
        switch(opc){
               
                case 1:
                        checasaldo();
                break;
               
                case 2:
                        retiraquantia();                      
                break;
               
                case 3:
                        depositar();
                break;
                       
                case 4:
                        main();
                break;
               
                default:
                        menu();
        }
       
        return 0;
       
}
 
int checasaldo(){
       
        //Nessa parte, apenas mostro o saldo ao usuario.
       
        printf("Voce atualmente possue o seguinte valor em sua conta: %.2f \n \n \n ", valorBruto);
                       
        menu();
}
 
 
int retiraquantia(){
       
        printf(" \t Escolha o valor a ser retirado da sua conta: \n \n");
       
        printf(" 1 - Para retiar: 10 U$\n");
        printf(" 2 - Para retiar: 20 U$\n");
        printf(" 3 - Para retiar: 40 U$\n");
        printf(" 4 - Para retiar: 80 U$\n");
        printf(" 5 - Para retiar: 100 U$\n");
        printf(" 6 - Para cancelar a transacao\n");
       
        //Obtenho o valor que o usuario quer que seja retirado.
        int opc;
       
        do{
               
                scanf("%d", &opc);
       
                switch(opc){
                                 // checo qual opção foi escolhida e modifico o valorBruto.
                        case 1:
                               
                                if(valorBruto >=10){
                                       
                                        valorBruto = valorBruto - 10;
                                        printf("Voce optou por retirar 10 U$ \n");    
                                        printf("Por favor a guarde a saida da quantia. Obrigado \n \n \n ");
                                        menu();
                               
                                }else{
                                       
                                        printf("  Nao e possivel realizar a retirada, pois o valor do saldo e menor. \n ");
                                        printf("Obrigado, aguardamos a compreesao. \n \n \n ");
                                        menu();
                                }
                        break;
               
                        case 2:
                               
                                if(valorBruto >=20){
                                       
                                        valorBruto = valorBruto - 20;
                                        printf("Voce optou por retirar 20 U$ \n");    
                                        printf("Por favor a guarde a saida da quantia. Obrigado \n \n \n");
                                        menu();
                                       
                                }else{
                                       
                                        printf("  Nao e possivel realizar a retirada, pois o valor do saldo e menor. \n ");
                                        printf("Obrigado, aguardamos a compreesao. \n \n \n ");
                                        menu();
                                       
                                }
                        break;
               
                        case 3:
                               
                                if(valorBruto >=40){
                                       
                                        valorBruto = valorBruto - 40;
                                        printf(" Voce optou por retirar 40 U$ \n");    
                                        printf("Por favor a guarde a saida da quantia. Obrigado \n\n \n");
                                        menu();
                               
                                }else{
                                       
                                        printf(" Nao e possivel realizar a retirada, pois o valor do saldo e menor. \n ");
                                        printf("Obrigado, aguardamos a compreesao. \n \n \n ");
                                        menu();
                                       
                                }
                               
                        break;
               
                        case 4:
                               
                                if(valorBruto >=80){
                                       
                                        valorBruto = valorBruto - 80;
                                        printf("Voce optou por retirar 80 U$ \n");    
                                        printf("Por favor a guarde a saida da quantia. Obrigado \n \n \n");
                                        menu();
                                       
                                }else{
                                       
                                        printf(" Nao e possivel realizar a retirada, pois o valor do saldo e menor. \n ");
                                        printf("Obrigado, aguardamos a compreesao. \n \n \n ");
                                        menu();
                                       
                                       
                                }
                               
                        break;
               
                        case 5:
                               
                                if(valorBruto >=100){
                               
                                               
                                        valorBruto = valorBruto - 100;
                                        printf("Voce optou por retirar 100 US \n");    
                                        printf("Por favor a guarde a saida da quantia. Obrigado \n \n \n");
                                        menu();
                                       
                                }else{
                                       
                                        printf(" Nao e possivel realizar a retirada, pois o valor do saldo e menor. \n ");
                                        printf("Obrigado, aguardamos a compreesao. \n \n \n ");
                                        menu();
                                       
                                }
                        break;
               
                        case 6:
                                menu();
                       
                        default:
                        printf("  digite um valor valido! \n");        
               
               
               
                }
                     // Caso o numero for fora do esperado, eu repito o switch até obter um valor valido.
        }while(opc > 6);
       
        return 0;
}              
 
 
int depositar(){
       
        printf(" Escolha a quantia a ser depoisitada. \n \n \n");
       
        printf(" 1 - Para depositar 10 U$ \n ");
        printf(" 2 - Para depositar 20 U$ \n ");
        printf(" 3 - Para depositar 40 U$ \n ");
        printf(" 4 - Para depositar 80 U$ \n ");
        printf(" 5 - Para depositar 100 U$ \n ");                      
        printf(" 6 - Para cancelar a transacao\n");
                       
                       
        int opc;
                                // obtenho o valor que o usuario deseja depositar.
        do{
               
                scanf("%d", &opc);
       
                switch(opc){
                                        // verifico e adiciono ao valorBruto.
                        case 1:
                                        valorBruto = valorBruto + 10;
                                        printf("\n Voce optou por depositar 10 U$ \n");
                                        printf("Processando...... \n ");      
                                        printf("Obrigado. Valor adicionado a conta. \n \n \n ");
                                        menu();
                        break;
               
                        case 2:
                                        valorBruto = valorBruto + 20;
                                        printf("\n Voce optou por depositar 20 U$ \n");
                                        printf("Processando...... \n ");      
                                        printf("Obrigado. Valor adicionado a conta. \n \n \n ");
                                        menu();
                                       
                        break;
               
                        case 3:
                                        valorBruto = valorBruto + 40;
                                        printf("\n Voce optou por depositar 40 U$ \n");
                                        printf("Processando...... \n ");      
                                        printf("Obrigado. Valor adicionado a conta. \n \n \n ");
                                        menu();
                        break;
               
                        case 4:
                                        valorBruto = valorBruto + 80;
                                        printf("\n Voce optou por depositar 80 U$ \n");
                                        printf("Processando...... \n ");      
                                        printf("Obrigado. Valor adicionado a conta. \n \n \n ");
                                        menu();
                        break;
                               
                        case 5:
                                        valorBruto = valorBruto + 100;
                                        printf("\n Voce optou por depositar 100 U$ \n");
                                        printf("Processando...... \n ");      
                                        printf("Obrigado. Valor adicionado a conta. \n \n \n ");
                                        menu();
                        break;
                               
                        case 6:
                                printf(" \n Trasancao cancelada. \n \n \n ");
                                menu();
                       
                        default:
                                printf("\n Digite um valor valido! \n");              
                                       
                }
               
                        // Caso o numero for fora do esperado, eu repito o switch até obter um valor valido.
        }while(opc > 6);
       
        return 0;
       
}
