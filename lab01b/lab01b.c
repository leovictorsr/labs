/* Nome: Leonardo Victor da Silva Rodrigues
 * RA: 172109
 * Lab01b - Conta de agua */

#include <stdio.h>
#include <math.h>


int main(){
  /* declaração das variaveis */
  int consumo1, consumo2;
  double var, valori, valorf;
  scanf("%d %d",&consumo1,&consumo2);
  
  /* decisao e calculo dos valores sem modificador por variacao de consumo */
  valori = 17.34;
  if ((consumo2 > 10) && (consumo2 <= 20)){
    valori = valori + (consumo2 - 10) * 2.41;
  }
  if ((consumo2 > 20) && (consumo2 <= 50)) {
    valori = valori + 10*2.41;
    valori = valori + (consumo2 - 20) * 3.70;
  }
  if (consumo2 > 50){
    valori = valori + 10*2.41 + 30*3.70;
    valori = valori + (consumo2 - 50) * 4.43;
  }
  
  /* calculo da porcentagem da variacao de consumo */
  var = (double)consumo2/consumo1;
  var = (var - 1) * 100;
  
  /* decisao e aplicacao de multas ou descontos sobre o valor da conta */
  if ((var > -10) && (var <= 0))
    valorf = valori;
  else if ((var <= -10) && (var > -15))
    valorf = valori * 0.9;
  else if ((var <= -15) && (var > -20))
    valorf = valori * 0.8;
  else if (var <= -20)
    valorf = valori * 0.7;
  else if (var < 20)
    valorf = valori * 1.4;
  else if (var >= 20)
    valorf = valori * 2;
  
  /* impressao dos valores */
  printf("Valor original = %.2lf\n",valori);
  printf("Valor final = %.2lf\n",valorf);
  return 0;
}
