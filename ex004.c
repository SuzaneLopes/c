#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


int main () {

     setlocale(LC_ALL, "Portuguese");

    int   n , n1 ,n2;
    char  s[2] , s1[2],s2[2],nome[10], nome1[10], nome2[10];


   printf("<<< EX003  -  LISTAGEM >>>\n\n");

   printf("Cadastrando a primeira pessoa:\n");
   printf("---------------------------------\n");

   printf("Nome:");
   scanf("%s",&nome);
   printf("Sexo: ");
   scanf("%s",&s);
   printf("Nota:");
   scanf("%d",&n);

    printf("\nCadastrando a segunda pessoa:\n");
   printf("---------------------------------\n");

   printf("Nome:");
   scanf("%s",&nome1);
   printf("Sexo: ");
   scanf("%s",&s1);
   printf("Nota:");
   scanf("%d",&n1);

    printf("\nCadastrando a terceira pessoa:\n");
   printf("---------------------------------\n");


   printf("Nome:");
   scanf("%s",&nome2);
   printf("Sexo:");
   scanf("%s",&s2);
   printf("Nota:");
   scanf("%d",&n2);


    printf("\n LISTAGEM COMPLETA \n");
    printf("\n-----------------------------------------\n");


    printf("NOME            SEXO             NOTA\n");
    printf("%s              %s               %d\n",nome,s,n);
    printf("%s              %s               %d\n",nome1,s1,n1);
    printf("%s              %s               %d\n",nome2,s2,n2);


    return 0;
    printf("\n-----------------------------------------\n");


   }
