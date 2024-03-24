#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);
void update(int *p);
int main() {

    int var = 15;
    int *ptr ; // Ponteiro

    ptr = &var;

    display(var,ptr);

/*
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var); // Iniciar o Vscode do modo admin, para acessar.
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr  = %p\n", ptr);
    printf("endereco do ptr            = %p\n", ptr);
*/

    update(&var); // Ou *ptr = 73;

    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var); // Iniciar o Vscode do modo admin, para acessar.
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr  = %p\n", ptr);
    printf("endereco do ptr            = %p\n", ptr);



    printf("\n\nEnd.");
    while (1);
    return 0;
    
}


void display(int var, int *ptr) 
{
    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var); // Iniciar o Vscode do modo admin, para acessar.
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr  = %p\n", ptr);
    printf("endereco do ptr            = %p\n", &ptr);
}

void update(int *p) 
{
    *p = *p+1;

}