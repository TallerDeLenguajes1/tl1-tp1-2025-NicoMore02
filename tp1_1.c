#include <stdio.h> 


int main() {
    printf("Hola Mundo");

    int numero = 5;
    int *puntero = &numero;

    printf("contenido del puntero: %d\n", *puntero);
    printf("direccion de memoria almacenada por el puntero: %p\n", (void*)puntero);
    printf("direccion de memoria de la variable: %p\n", (void*)&numero);
    printf("direccion de memoria del puntero: %p\n", (void*)&puntero);
    printf("el tamano de la memoria es: %d\n", sizeof(numero));
    

    return 0;
}