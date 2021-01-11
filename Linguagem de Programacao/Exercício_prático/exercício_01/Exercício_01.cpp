#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
enum pecas { espacovazio, peao, cavalo, torre, bispo, rei, rainha }; // cria um enum para ser o contador de peças;
int main()
{
	setlocale(LC_ALL, "Portuguese"); // prepara para acentuação.
	float c;
	// cria matriz de acordo com o que o exercício.

	int tabuleiro[8][8] = {
	{1, 3, 0, 5, 4, 0, 2, 1},
	{1, 0, 1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 1, 0, 6, 0},
	{1, 0, 0, 1, 1, 0, 0, 1},
	{0, 1, 0, 4, 0, 0, 1, 0},
	{0, 0, 3, 1, 0, 0, 1, 1},
	{1, 0, 6, 6, 0, 0, 1, 0},
	{1, 0, 5, 0, 1, 1, 0, 6}
	}; 	// exibe o tabuleiro atual.
	printf("Tabuleiro de xadrez!\n");
	printf("\nAbaixo o tabuleiro está montado da seguinte forma:\n\n");

	int linha, coluna;
	for (linha = 0; linha < 8; linha++)
	{
		for (coluna = 0; coluna < 8; coluna++)
		{
			printf("%d ", tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
	int contador[7] = { 0 }; // cria o vetor para contador as 7 opções de peças e insere o valor para cada ocorrencia de peças.
	int i, x;
	for (i = 0; i < 8; i++) {
		for (x = 0; x < 8; x++) {
			switch (tabuleiro[i][x])
			{
			case espacovazio:
				contador[0]++;
				break;
			case peao:
				contador[1]++;
				break;
			case cavalo:
				contador[2]++;
				break;
			case torre:
				contador[3]++;
				break;
			case bispo:
				contador[4]++;
				break;
			case rei:
				contador[5]++;
				break;
			case rainha:
				contador[6]++;
				break;
			default:
				break;
			}
		}
	}
	printf("\n");
	printf("LEGENDA\n");
	printf("0 - Ausência de peça | 1 - Peão | 2 - Cavalo | 3 - Torre | 4 - Bispo | 5 - Rei | 6 - Rainha\n\n");
	printf("\nQuantidade de casas vazias e peças:\n\n");
	printf("Casas vazias\t= %d\n", contador[0]);
	printf("Peoes\t\t= %d\n", contador[1]);
	printf("Cavalos\t\t= %d\n", contador[2]);
	printf("Torres\t\t= %d\n", contador[3]);
	printf("Bispos\t\t= %d\n", contador[4]);
	printf("Reis\t\t= %d\n", contador[5]);
	printf("Rainhas\t\t= %d\n", contador[6]);
	printf("\n");
	system("pause");
	// Cria o tabuleiro personalizado do usuário
	// Zera os contadores!
	contador[0] = 0;
	contador[1] = 0;
	contador[2] = 0;
	contador[3] = 0;
	contador[4] = 0;
	contador[5] = 0;
	contador[6] = 0;
	// Cria novo tabuleiro personalizado do usuario, juntamente com as mesmas peças do tabuleiro anterior.
	int tabuleirousuario[8][8] = {
	{1, 3, 0, 5, 4, 0, 2, 1},
	{1, 0, 1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 1, 0, 6, 0},
	{1, 0, 0, 1, 1, 0, 0, 1},
	{0, 1, 0, 4, 0, 0, 1, 0},
	{0, 0, 3, 1, 0, 0, 1, 1},
	{1, 0, 6, 6, 0, 0, 1, 0},
	{1, 0, 5, 0, 1, 1, 0, 6}
	};
	int linhausuario, colunausuario; // define as variaveis.
	int escolhausuario;
	int SimOuNao;
	system("cls");
	printf("Começando a montar o seu tabuleiro!\n\n"); 	// exibe o tabuleiro atual para o usuário.

	for (linha = 0; linha < 8; linha++)
	{
		for (coluna = 0; coluna < 8; coluna++)
		{
			printf("%d ", tabuleirousuario[linha][coluna]);
		}
		printf("\n");
	}
	// Insere as peças do usuário.
	printf("\nDigite a posição da linha (1 a 8) que deseja alterar:\n");
	scanf("%d", &linhausuario);
	while ((linhausuario < 1) || (linhausuario > 8))
	{
		printf("O valor inserido é inválido! Digite um número de 1 a 8 para a posição na linha!\n");
		scanf("%d", &linhausuario);
	}
	printf("Agora, digite a posição da coluna (1 a 8) que deseja alterar:\n");
	scanf("%d", &colunausuario);
	while ((colunausuario < 1) || (colunausuario > 8))
	{
		printf("O valor inserido é inválido! Digite um número de 1 a 8 para a posição na coluna!\n");
		scanf("%d", &colunausuario);
	}
	printf("Digite a peça que deseja inserir na posição %d,%d:\n", linhausuario, colunausuario);
	printf("0 = espaço em branco\n");
	printf("1 = Peão\n");
	printf("2 = Cavalo\n");
	printf("3 = Torre\n");
	printf("4 = Bispo\n");
	printf("5 = Rei\n");
	printf("6 = Rainha\n");
	scanf("%d", &escolhausuario);
	while ((escolhausuario < 0) || (escolhausuario > 6))
	{
		printf("A peça desejada não existe! Insira um valor válido conforme o menu!\n");
		scanf("%d", &escolhausuario);
	}

	tabuleirousuario[linhausuario - 1][colunausuario - 1] = escolhausuario;
	printf("Deseja alterar outra posição?\n");
	printf("(1) para SIM e (2) para NÃO\n");
	scanf("%d", &SimOuNao);
	while (SimOuNao == 1) // enquanto o usuario escolher que quer mudar mais peças, fica no laço.
	{
		printf("\nDigite a posição da linha (1 a 8) que deseja alterar:\n");
		scanf("%d", &linhausuario);
		while ((linhausuario < 1) || (linhausuario > 8)) //se o usuario escolher um valor errado para linha, fica no laço
		{
			printf("O valor inserido é inválido! Digite um número de 1 a 8 para a posição na linha!\n");
			scanf("%d", &linhausuario);
		}
		printf("Agora, digite a posição da coluna (1 a 8) que deseja alterar:\n");
		scanf("%d", &colunausuario);
		while ((colunausuario < 1) || (colunausuario > 8)) // se o usuario escolhe um valor errado para coluna, fica no laço.
		{
			printf("O valor inserido é inválido! Digite um número de 1 a 8 para a posição na coluna!\n");
			scanf("%d", &colunausuario);
		}
		printf("Digite a peça que deseja inserir na posição %d,%d:\n", linhausuario, colunausuario);
		printf("0 = espaço em branco\n");
		printf("1 = Peão\n");
		printf("2 = Cavalo\n");
		printf("3 = Torre\n");
		printf("4 = Bispo\n");
		printf("5 = Rei\n");
		printf("6 = Rainha\n");
		scanf("%d", &escolhausuario);
		while ((escolhausuario < 0) || (escolhausuario > 6)) // se o usuario escolhe uma peça que nao existe, fica no laço.
		{
			printf("A peça desejada não existe! Insira um valor válido conforme o menu!\n");
			scanf("%d", &escolhausuario);
		}
		tabuleirousuario[linhausuario - 1][colunausuario - 1] = escolhausuario;
		printf("Deseja alterar outra posição?\n");
		printf("(1) para SIM e (2) para NÃO\n");
		scanf("%d", &SimOuNao);

	}
	// com tudo preenchido, exibe o tabuleiro que o usuário escolheu.
	system("cls");
	printf("Tabuleiro de Xadrez!\n\n");
	printf("Este é o seu tabuleiro!\n\n");
	int linha1, coluna1;
	int contadorusuario[7];
	for (linha1 = 0; linha1 < 8; linha1++)
	{
		for (coluna1 = 0; coluna1 < 8; coluna1++)
		{
			printf("%d ", tabuleirousuario[linha1][coluna1]);
		}
		printf("\n");
	}
	int j, l;
	for (j = 0; j < 8; j++) {
		for (l = 0; l < 8; l++)
		{
			switch (tabuleirousuario[j][l])
			{
			case espacovazio:
				contador[0]++;
				break;
			case peao:
				contador[1]++;
				break;
			case cavalo:
				contador[2]++;
				break;
			case torre:
				contador[3]++;
				break;
			case bispo:
				contador[4]++;
				break;
			case rei:
				contador[5]++;
				break;
			case rainha:
				contador[6]++;
				break;
			default:
				break;
			}
		}
	}
	// exibe o contador final, com todas as alterações feitas pelo usuario.
	printf("\n");
	printf("LEGENDA\n");
	printf("0 - Ausência de peça | 1 - Peão | 2 - Cavalo | 3 - Torre | 4 - Bispo | 5 - Rei | 6 - Rainha\n\n");
	printf("\nQuantidade de casas vazias e peças:\n");
	printf("Casas vazias\t= %d\n", contador[0]);
	printf("Peoes\t\t= %d\n", contador[1]);
	printf("Cavalos\t\t= %d\n", contador[2]);
	printf("Torres\t\t= %d\n", contador[3]);
	printf("Bispos\t\t= %d\n", contador[4]);
	printf("Reis\t\t= %d\n", contador[5]);
	printf("Rainhas\t\t= %d\n", contador[6]);
	printf("\n");
	int escolhafimprograma;
	printf("Digite (1) para encerrar o programa ou (2) para exibir um tabuleiro inicial do jogo!\n"); //exibe uma opção extra ao usuario.
	scanf("%d", &escolhafimprograma);
	while ((escolhafimprograma < 1) || (escolhafimprograma > 2)) // ebquanto o usuario nao escolhe uma opção do menu, fica no laço abaixo.
	{
		printf("\nOpção inválida! Digite (1) para encerrar ou (2) para exibir um tabuleiro inicial do jogo!\n");
		scanf("%d", &escolhafimprograma);
	}
	if (escolhafimprograma == 1) // se o usuário quer encerrar o programa, encerra.
	{
		system("cls");
		printf("XEQUE-MATE!");
		return 0;
	}
	if (escolhafimprograma == 2) //ou então exibe o tabuleiro inicial de um jogo de xadrez para o usuário.
	{
		contador[0] = 0;
		contador[1] = 0;
		contador[2] = 0;
		contador[3] = 0;
		contador[4] = 0;
		contador[5] = 0;
		contador[6] = 0;
		system("cls");
		printf("POSIÇÃO INICIAL DAS PEÇAS DE UM TABULEIRO DE XADREZ\n\n");
		int tabuleirodefault[8][8] = { // cria um tabuleiro padrao do jogo.
		{3, 2, 4, 6, 5, 4, 2, 3},
		{1, 1, 1, 1, 1, 1, 1, 1},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{1, 1, 1, 1, 1, 1, 1, 1},
		{3, 2, 4, 6, 5, 4, 2, 3}
		};
		int linhadefault, colunadefault;
		for (linhadefault = 0; linhadefault < 8; linhadefault++)
		{
			for (colunadefault = 0; colunadefault < 8; colunadefault++)
			{
				printf("%d ", tabuleirodefault[linhadefault][colunadefault]);
			}
			printf("\n");
		}
		int m, n;
		for (m = 0; m < 8; m++) {
			for (n = 0; n < 8; n++)
			{
				switch (tabuleirodefault[m][n])
				{
				case espacovazio:
					contador[0]++;
					break;
				case peao:
					contador[1]++;
					break;
				case cavalo:
					contador[2]++;
					break;
				case torre:
					contador[3]++;
					break;
				case bispo:
					contador[4]++;
					break;
				case rei:
					contador[5]++;
					break;
				case rainha:
					contador[6]++;
					break;
				default:
					break;
				}
			}
		}
		// exibe o contador com as peças iniciais do jogo.
		printf("\n");
		printf("LEGENDA\n");
		printf("0 - Ausência de peça | 1 - Peão | 2 - Cavalo | 3 - Torre | 4 - Bispo | 5 - Rei | 6 - Rainha\n\n");
		printf("\nQuantidade de casas vazias e peças:\n");
		printf("Casas vazias\t= %d\n", contador[0]);
		printf("Peoes\t\t= %d\n", contador[1]);
		printf("Cavalos\t\t= %d\n", contador[2]);
		printf("Torres\t\t= %d\n", contador[3]);
		printf("Bispos\t\t= %d\n", contador[4]);
		printf("Reis\t\t= %d\n", contador[5]);
		printf("Rainhas\t\t= %d\n", contador[6]);
		printf("\n");
		system("pause");
	}
	system("cls");
	return 0;
}
