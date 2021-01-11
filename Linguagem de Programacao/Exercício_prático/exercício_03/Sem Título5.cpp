#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

FILE* MeuArq;
int main () {
 errno_t err;
 char NomeArq[50], Frase1[49], Frase2[49];
printf("Digite o nome do arquico:");
gets(NomeArq);

printf("\n\nO arquivo será criado eh %s, NomeArq");
err = fopen(MeuArq, NomeArq, "w+");
if (err==0)
{
printf("\nArquivo aberto com sucesso\n");
}
else
{
printf("\nErro na abertura do arquivo\n");
exit(1);
}

printf("\n\nDigite seu primeira frase:");
fgets(Frase1,49,stdin);

fcloseall();

return 0;
}
