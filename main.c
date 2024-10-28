#include <stdio.h>
#include <string.h>

void compararPalavras(char palavra1[], char palavra2[]) {
    if (strcmp(palavra1, palavra2) == 0)
        printf("As palavras são iguais\n");
    else
        printf("As palavras são diferentes\n");
}

int main() {
    char palavra1[100], palavra2[100];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    compararPalavras(palavra1, palavra2);
    return 0;
}
