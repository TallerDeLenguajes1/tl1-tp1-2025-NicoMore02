#include <stdio.h>

//FUNCIONES//
int cuadradoNum ( int num);
void cuadradoNumVoid (int num);
void contenido(int *num);
void invertir(int *a, int *b);
void orden (int *a, int *b);

int main () {
    int a = 0, b = 0;
    printf("Ingrese el primer numero: \n");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &b);

    printf("El cuadrado de %d es %d\n", a, cuadradoNum(a));
    cuadradoNumVoid(b);

    puts("Variable a\n");
    contenido(&a);
    puts("Variable b\n");
    contenido(&b);

    printf("Numeros antes de invertirse: (%d, %d)\n", a, b);
    invertir(&a, &b);
    printf("Numeros despues de invertirse: (%d, %d)\n", a, b);
    printf("Numeros antes de ordenarse: (%d, %d)\n", a, b);
    orden(&a, &b);
    printf("\nNumeros despues de ordenarse: (%d, %d)\n", a, b);
    return 0;
}

//DEFINICIONES//
int cuadradoNum ( int num) {
    return num * num;
}

void cuadradoNumVoid (int num) {
    int resultado = num * num;
    printf("El cuadrado de %d es %d", num, resultado);
}

void contenido(int *num) {
    printf("direccion de la variable: %p, contenido de la variable: %d\n", (void*)num, *num);
}

void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden (int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}