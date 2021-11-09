#include <stdio.h>

int main()
{
  // criando a variável ponteiro para o arquivo
  FILE *pont_arq;
  
  //abrindo o arquivo
  pont_arq = fopen("arquivo.txt", "a");
  int num1, num2, num3;
  num1= 1002;
  num2= 3000;
  num3= 5006;
  fprintf(pont_arq, "%d, %d, %d", num1, num2, num3);
  // fechando arquivo
  fclose(pont_arq);
  
  //mensagem para o usuário
  printf("/nO arquivo foi criado com sucesso!/n");
  
  return(0);
}