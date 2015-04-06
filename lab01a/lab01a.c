/* Nome: Leonardo Victor da Silva Rodrigues
 * RA: 172109
 * Lab01a - Coding Bad */

#include <stdio.h>
#include <math.h>

int main(){
  /* declaracao das variaveis necessarias por todo o programa */
  double c, i, n, m1, m2;
  int n1, n2;
  scanf("%lf %lf %d %lf",&c,&i,&n1,&m2);

  /* calculo do montante final do primeiro calculo */
  i = 1+(i/100);
  m1 = c * pow(i,n1);
  
  /* calculo do numero de lotes, usando a variavel n como intermediaria entre 
   * o double e o int para que nao haja truncamento antes do esperado */
  n = log((m2/c)) / log (i);
  n2 = ceil(n);
  
  /* impressao dos valores desejados */
  printf("Montante = %.2lf\n",m1);
  printf("%d lote(s)\n",n2); 
  return 0;
}
