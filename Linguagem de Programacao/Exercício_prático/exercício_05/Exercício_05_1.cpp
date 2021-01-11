//1 passo crie as diretivas do programa

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {

//2 passo crie as variáveis :

int opcao = 0;

float d_pontos = 0;

//3 passo crie as structs :

struct ponto2d

{

 float x = 0, y = 0;

};

struct ponto_inicial

{

}; struct ponto2d distancia_ini;

struct ponto_final

{

}; struct ponto2d distancia_fim;

//4 passo crie o menu preso no looping :

while (opcao > 0 || opcao < 5)

{

 printf("[1] - Digitar os valores do primeiro ponto.\n");

 printf("[2] - Digitar os valores do segundo ponto.\n");

 printf("[3] - Mostrar a distancia entre os dois pontos.\n");

 printf("[4] - Sair.\n");

 scanf("%i", &opcao);

 switch (opcao)

 {

 case 1:

 printf("\ninsira o primeiro numero do ponto 1:\n");

 scanf("%f", &distancia_ini.x);

 printf("\ninsira o segundo numero do ponto 1:\n");

 scanf("%f", &distancia_ini.y);

 break;

 case 2:

 printf("\ninsira o primeiro numero do ponto 2:\n");

 scanf("%f", &distancia_fim.x);

 printf("\ninsira o segundo numero do ponto 2:\n");

 scanf("%f", &distancia_fim.y);

 break;

 case 3:

 d_pontos = pow((distancia_ini.x - distancia_fim.x), 2) + pow((distancia_ini.y - distancia_fim.y), 2);

 d_pontos = sqrt(d_pontos);

 printf("\nA distancia eh: %f\n", d_pontos);

 system("pause");

 break;

 case 4:

 system("pause");

 return 0;

 break;

 default: printf("\nEntrada invalida!\n");

 system("pause");

 }

}

}



