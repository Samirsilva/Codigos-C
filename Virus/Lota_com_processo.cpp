/* progacao3.c */
acao ()
{
   while (1)
      fork();
}
 
main () /* o main já foi explicado no exemplo 1 */
{
   int i;
   i=fork();
   if (i==0)
      acao();
 
}
