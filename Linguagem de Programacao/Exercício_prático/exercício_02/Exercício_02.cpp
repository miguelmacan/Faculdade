//1 passo crie as diretivas do programa

#include <stdio.h>

#include <stdlib.h>

int main()

{

//2 passo criação da struct

struct func

{

 char nome[40] = { 0 };

 float salario = 0;

}; struct func dados;

float ir;

//3 passo dados do funcionario

printf("Nome do funcionario: ");

gets(dados.nome);

printf("\nSalario do funcionario: ");

scanf("%f", &dados.salario);

 

//4 passo calculo IR

if (dados.salario <= 1637.11)

{

 printf("Funcionario: %s", dados.nome);

 printf("\nIsento IR!\n");

 system("pause");

 return 0;

}

else if (dados.salario > 1637.11 && dados.salario <= 2453.50)

{

 ir = dados.salario * 7.5 / 100;

 printf("Aliquota de calculo: 7.5%%");

}

else if (dados.salario > 2453.51 && dados.salario <= 3271.38)

{

 ir = dados.salario * 15 / 100;

 printf("Aliquota de calculo: 15%%");

}

else if (dados.salario > 3271.39 && dados.salario <= 4087.65)

{

 ir = dados.salario * 22.5 / 100;

 printf("Aliquota de calculo: 22,5%%");

}

else if (dados.salario > 4087.66)

{

 ir = dados.salario * 27.5 / 100;

 printf("Aliquota de calculo: 27,5%%");

}

printf("\nO valor do IR eh: %f\n", ir);

system("pause");

return 0;

}
