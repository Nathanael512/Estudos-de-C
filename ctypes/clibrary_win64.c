// clibrary.c
#include <stdio.h>

// A função a ser exportada
__declspec(dllexport) void hello() {
    printf("Hello from the DLL!\n");
    printf("ESTUDE SISTEMAS OPERACIONAIS!!\n");
}

__declspec(dllexport) char* display(char* str, int age) {
    printf("My name is %s and my age is %d", str, age);
    return "Completed";
}

