#include <stdio.h>

int double_of_number(int a)
{
    return a * 2;
}

int fake_main(void)
{

    int a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    printf("Digite um numero: ");
    scanf("%d", &c);

    printf("O dobro do primeiro numero é %d\n", double_of_number(a));
    printf("O dobro do segundo numero é %d\n", double_of_number(b));
    printf("O dobro do terceiro numero é %d\n", double_of_number(c));
}