/* Nome: Leonardo Victor da Silva Rodrigues
   RA: 172109
   Lab 03b - O Enigma dos Guardioes Quanticos */

#include <stdio.h>
#define MAX 100

int main(){
  /* declaracao de variaveis */
  int nGuardioes, i, ctrl=0, quantidadeVotos=1, nGuardioesSinceros=1;
  
  /* declaracao dos vetores que armazenam as informacoes dos guardioes */
  int votoGuardioes[MAX+1];
  int inicio[MAX];
  int fim[MAX];

  /* inicializacao dos elementos do vetor com valor 0 */ 
  for (i=0;i < MAX+1;i++)
    votoGuardioes[i]=0;
   
  /* salvando os intervalos fornecidos pelos guardioes e o numero de guardioes sinceros como votos */
  scanf("%d\n",&nGuardioes);
  for (i=0;i < nGuardioes;i++){
    scanf("%d %d\n",&inicio[i],&fim[i]);
    ctrl = inicio[i];
    while (ctrl <= fim[i]){
      votoGuardioes[ctrl]++;
      ctrl++;
    }
  }
  
  /* iteracao e analise para descobrir o maior numero de guardioes sinceros */
  for (i=1;i <= nGuardioes;i++){
    if (votoGuardioes[i] >= quantidadeVotos && votoGuardioes[i] == i){
      quantidadeVotos = votoGuardioes[i];
      nGuardioesSinceros = i;
    }
  }
  
  /* se todos os numeros possiveis receberem 1 voto, apenas 1 dos guardioes eh sincero */
  if (quantidadeVotos == 1)
    nGuardioesSinceros = 1;
  printf("Numero de guardioes sinceros = %d\n",nGuardioesSinceros);

  /* iteracao e analise para descobrir o primeiro guardiao sincero */
  i=0;
  while(i < nGuardioes){
    if (inicio[i] <= nGuardioesSinceros && fim[i] >= nGuardioesSinceros){
      ctrl = i+1;
      break;
    }
    else
      i++;
  }
  printf("Guardiao %d\n",ctrl);

  return 0;
}
    

