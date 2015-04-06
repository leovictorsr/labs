/* Nome: Leonardo Victor da Silva Rodrigues
 * RA: 172109
 * Lab 02b - Dolares Elficos */

#include <stdio.h>

int main(){
  /* declaracao de variaveis */
  int n_casas, gramas, cambio, n, valor, notas, ctrl, menor=0;
  scanf("%d %d %d\n",&n_casas,&gramas,&cambio);
  
  /* uso de for para recebimento do valor das bases das casas de cambio */
  for (int i=1;i<=n_casas;i++){
    scanf("%d",&n);
    valor = gramas*cambio;
    notas = 0;
    
    /* uso da variavel ctrl controle da maior potencia de n <= valor */
    ctrl = n;
    while (valor>=n){
      if (ctrl*n <= valor)
        ctrl = ctrl*n;
      else{
        valor = valor - ctrl;
        ctrl = n;
        notas++;
      }
    }

    /* o que sobrar de valor que seja menor que n e convertido em notas de 1 */
    notas = notas + valor;

    /* comparacao da menor quantidade de notas armazenada com a atual */
    if (menor==0)
      menor = notas;
    else if (notas<menor)
      menor = notas;
  }

  printf("Numero minimo de notas = %d\n",menor);
  return 0;
}
      
    
    
    
      
    
    

