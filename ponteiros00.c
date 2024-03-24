#include <stdio.h>
#include <stdlib.h>

int main() {
    int var = 15;
    int *ptr; // Ponteiro

    ptr = &var;

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", (void *)&var);
    printf("conteudo apontado por ptr = %d\n", *ptr); // Corrigido para %d
    printf("endereco apontado por ptr  = %p\n", (void *)ptr);
    printf("endereco do ptr            = %p\n", (void *)&ptr);

    *ptr = 73;

    printf("\n\n"); // Adicionado ponto e vírgula
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", (void *)&var);
    printf("conteudo apontado por ptr = %d\n", *ptr); // Corrigido para %d
    printf("endereco apontado por ptr  = %p\n", (void *)ptr);
    printf("endereco do ptr            = %p\n", (void *)&ptr);

    printf("\n\nEnd.");
    while (1);
    return 0;
}
