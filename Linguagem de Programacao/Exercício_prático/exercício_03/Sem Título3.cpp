#include <iostream>
#include <fstream>
#include <ctype.h>

int main(void)
{
char palavra[40];
int i;
printf("Digite a frase");
gets(palavra);
for(i=0; palavra[i]!='\0'; i++){
palavra[i] = toupper(palavra[i]);
i++;
palavra[i] ='\0';
printf(“\n\nA palavra convertida em maiusculo: %s\n\n”,palavra);
    system(“PAUSE”);
return EXIT_SUCCESS;
}
