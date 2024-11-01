// Realiza a leitura dos caracteres até o final da linha quando encontra o caracter \n. 
// A leitura é efetuada de tal forma que a string lida é armazenada em um ponteiro do tipo char. 
// A função pode ser finalizada quando encontrar o final do arquivo, neste caso retorna o endereço da string lida. 
// Se ocorrer algum erro na leitura do arquivo, a função retorna NULL.

//Leitura de arquivo
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *pont_arq;
  char texto_str[20];
  
  //abrindo o arquivo_frase em modo "somente leitura"
  pont_arq = fopen("arquivo_palavra.txt", "r");
  
  //enquanto não for fim de arquivo o looping será executado
  //e será impresso o texto
  while(fgets(texto_str, 20, pont_arq) != NULL)
  printf("%s", texto_str);
  
  //fechando o arquivo
  fclose(pont_arq);
  
  getch();
  return(0);
}