#include <stdio.h>

// Definição da função soma
int soma(int a, int b) {
    return a + b;
}

int main() {
    // Chamando a função soma e armazenando o resultado na variável 'resultado'
    int resultado = soma(5, 3);
    
    // Exibindo o resultado usando printf
    printf("O resultado da soma é: %d\n", resultado);
    
    return 0;
}
