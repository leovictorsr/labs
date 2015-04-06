/* Nome: Leonardo Victor da Silva Rodrigues
   RA: 172109
   Lab 03a - Admiravel Mundo Novo */ 

#include <stdio.h>
#define MAX 80

int main(){
  /* declaracao das variaveis e criacao do vetor */
  int nCastas, nLotes, soma, i, j;
  double percentual;
  char casta;
  int castas[MAX];
  
  scanf("%d %d\n",&nLotes,&nCastas);  

  /* inicializacao das posicoes do vetor com valor 0 */
  for (i=0;i<MAX;i++)
    castas[i] = 0;

  /* iteracao e recepcao das quantidades das castas */
  for (i=1;i<=nLotes;i++){
    for (casta = ' ';casta!='\n';){
      scanf("%c",&casta);
      j = (int)casta - '0';
      castas[j-1]++;
    }
  }
  
  /* impressao da quantidade de individuos */
  soma = 0;
  for (i=0;i<nCastas;i++)
    soma += castas[i];
  printf("Total: %d individuos\n",soma);
  
  /* impressao de individuos por casta */
  for (i=0;i<nCastas;i++)
    printf("Total da casta %d: %d\n",i+1,castas[i]);
  
  /* impressao de percentual */
  for (i=0;i<nCastas;i++){
    percentual = (double)castas[i]/soma * 100;
    printf("Percentual da casta %d: %.2f\n",i+1,percentual);
  }
  return 0;
}
   
 
