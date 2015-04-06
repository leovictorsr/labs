/* Nome: Leonardo Victor da Silva Rodrigues
 * RA: 172109
 * Lab 02a - Coeficiente de Rendimento */

#include <stdio.h>

int main(){
  /* declaracao das variaveis */
  int credito=0, soma_credito=0, soma_nota=0; 
  double cr;
  char conceito;
  
  /* calculo da nota pelo peso e os creditos totais */
  while (conceito != '*'){
    soma_credito = soma_credito + credito;
    scanf("%c %d\n",&conceito,&credito);
    if (conceito == 'A')
      soma_nota = soma_nota + (4*credito);
    else if (conceito == 'B')
      soma_nota = soma_nota + (3*credito);
    else if (conceito == 'C')
      soma_nota = soma_nota + (2*credito);
    else if (conceito == 'D')
      soma_nota = soma_nota + credito;
  }
  
  /* calculo do cr e sua impressao */
  cr = (double)soma_nota/soma_credito;
  if (soma_credito == 0)
    printf("CR = Indefinido\n");
  else
    printf("CR = %.4f\n",cr);
  
  return 0;
}

            
