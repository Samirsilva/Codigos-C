/* progacao2.c */
 
#include <stdlib.h>
#include <stdio.h>
acao ()
{
   char *f;
   while (1)
   {
      f = malloc (10000); /* aloca uma memória de 10000 bytes a cada loop e deixa perdida, não irá se importar em recuperar o endereço alocado */
      usleep (10); /* espera um tempo de 10/1000.000.000 s para o sistema não ficar lento de forma que se perceba uma execução fora do normal */
   }
 
}
 
main () /* o main já foi explicado no exemplo 1 */
{
   int i;
   i=fork();
   if (i==0)
      acao();
 
}
