#include <stdio.h>
#include<stdlib.h>

int main()
{
	int flush;
	printf("*** CALCULO DO IR ***\n\n\n");

	struct salario_funcionario   //DECLARACAO DA ESTRUTURA
	{
		char COLABORADOR[50];
		float SALARIO;

	}; struct salario_funcionario funcionario;

	printf("ENTRE O NOME DO FUNCIONARIO!!\n");  //INFORMAÇÕES DOS DADOS DO FUNCIONARIO NOME\SALARIO
	fgets(funcionario.COLABORADOR,50,stdin);

	printf("ENTRE O SALARIO DO FUNCIONARIO!!\nR$");
	scanf("%f", &funcionario.SALARIO);

	printf("\n****INFORMAÇÕES DO FUNCIONARIO****\n\n");//CHAMADA DOS DADOS INSERIDOS E CALCULO DOS DESCONTOS

	printf("NOME:\n%s", funcionario.COLABORADOR);
	printf("SALARIO SEM DESCONTO DE IMPOSTO:\nR$%.2f\n", funcionario.SALARIO); 
		if (funcionario.SALARIO <= 1637.11) {//DECLARACAO DAS CONDICOES PARA EXECUCAO DOS CALCULOS

			printf("O VALOR DESCONTADO DO SALARIO FOI:\nR$%.2f\n\n", funcionario.SALARIO*0.0);
			printf("SALARIO!!\nR$ %.2f\n\n", funcionario.SALARIO);

			printf("***FUNCIONARIO ESTA ISENTO DE IMPOSTO***\n\n");

			return 0;



		}
		if (funcionario.SALARIO > 1637.11); (funcionario.SALARIO < 2453.51); {
			printf("O VALOR DESCONTADO DO SALARIO FOI:\nR$%.2f", funcionario.SALARIO*0.075);
			printf("\nO SALARIO TOTAL APOS O REAJUSTE :\nR$%.2f\n", funcionario.SALARIO - funcionario.SALARIO*0.075);
			return 0;
		}
		if (funcionario.SALARIO > 2453.50); (funcionario.SALARIO < 3271.39); {

			printf("O VALOR DESCONTADO DO SALARIO FOI:\nR$%.2f", funcionario.SALARIO*0.15);
			printf("\nO SALARIO TOTAL APOS O   REAJUSTE :\nR$%.2f\nR$", funcionario.SALARIO - funcionario.SALARIO*0.15);

			return 0;

		}
		if (funcionario.SALARIO > 3271.38); (funcionario.SALARIO < 4087.66); {
			printf("O VALOR DESCONTADO DO SALARIO FOI:\nR$%.2f", funcionario.SALARIO*0.225);
			printf("\nO SALARIO TOTAL APOS O  REAJUSTE :\nR$%.2f\n", funcionario.SALARIO - funcionario.SALARIO*0.0225);

			return 0;
		}
		if (funcionario.SALARIO > 4087.65); {
			printf("O VALOR DESCONTADO DO SALARIO FOI:\nR$%.2f", funcionario.SALARIO*0.275);
			printf("O SALARIO COM REAJUSTE :\nR$%.2f\n", funcionario.SALARIO - funcionario.SALARIO*0.275);

			return 0;
		}

	 system("pause");
	return 0;
}


