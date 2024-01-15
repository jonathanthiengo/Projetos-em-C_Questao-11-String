/*Faça um programa que lê uma string e diz se essa string possui algum número. (dica: veja
tabela ascii)

*/

#include <stdio.h>
#include <string.h>
#define TAM 50

int main(void) {
  int i,tam,ContN=0;
  char Frase[TAM];

  printf("Digite uma frase: ");
  gets(Frase);
  tam = strlen(Frase);

 for(i=0;i<tam;i++){
   if(Frase[i] >= 48 && Frase[i] <= 57){
     printf("Tem o Numero %c na posição %d\n",Frase[i],i);
     ContN++;
   }
 }printf("A Frase Tem %d Numeros",ContN);
  
  return 0;
}