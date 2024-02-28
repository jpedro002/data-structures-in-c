#include <stdio.h>

typedef struct
{
    int peso, altura;
} PesoAltura;

int main(int argc, char const *argv[])
{
    PesoAltura pessoa1;
    pessoa1.peso = 80;
    pessoa1.altura = 185;

    printf("Peso: %i\n", pessoa1.peso);

    return 0;
}
