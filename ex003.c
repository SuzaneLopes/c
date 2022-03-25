#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main () {
    setlocale(LC_ALL, "Portuguese");

    int  id , peso;
    char nome[50];

   printf("<<< EX003  -  DADOS >>>\n\n");

   printf("Qual é o seu nome?:");
   scanf("%s",&nome);
   printf("Quantos anos voce tem?: ");
   scanf("%d",&id);
   printf("Qual é o seu peso(kg)?:");
   scanf("%d",&peso);

   printf ("\n-------<<<PROCESSANDO>>>-------\n\n");

   printf("Muito prazer %s.Você tem %d anos e pesa %d KG , correto?\n\n\n\FIM",nome , id , peso);





   }
