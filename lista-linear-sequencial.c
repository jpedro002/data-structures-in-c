#include <stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct
{
    TIPOCHAVE chave;
} REGISTRO;

typedef struct
{
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

void inicializarLista(LISTA *l)
{
    l->nroElem = 0;
}

int numeroElementos(LISTA *l)
{
    return l->nroElem;
}

void popularLista(LISTA *l, int numeroElementos)
{
    int i;

    for (i = 0; i < numeroElementos; i++)
    {
        l->A[i].chave = i + 1;
    }

    l->nroElem = numeroElementos;
}

void exibirLista(LISTA *l)
{
    int i;

    for (i = 0; i < l->nroElem; i++)
    {
        printf("%i ", l->A[i].chave);
    }
    printf("\n");
}

int buscarElemento(LISTA *l, int value)
{

    int i, pos = -1;

    for (i = 0; i < l->nroElem; i++)
    {
        if (l->A[i].chave == value)
        {
            pos = i;
        }
    }

    return pos;
}

void inserirEmIndexEspecifico(LISTA *l, REGISTRO reg, int index)
{
    if (l->nroElem >= MAX || index < 0 || index > l->nroElem)
        return;
    int i;
    for (i = l->nroElem + 1; i >= index; i--)
    {
        l->A[i] = l->A[i - 1];
    }
    l->A[index] = reg;
    l->nroElem++;
}

void removerEmIndexEspecifico(LISTA *l, int numberToRemove)
{
    int indNumberToRemove, i;

    indNumberToRemove = buscarElemento(l, numberToRemove);

    if (indNumberToRemove == -1)
        return;

    for (i = indNumberToRemove; i < l->nroElem; i++)
    {
        l->A[i] = l->A[i + 1];
    }
    l->nroElem--;
}

int main()
{
    LISTA lista;
    int i;

    inicializarLista(&lista);

    popularLista(&lista, 40);

    removerEmIndexEspecifico(&lista, 40);

    for (i = 0; i < lista.nroElem; i++)
        printf("%d\n", lista.A[i].chave);

    return 0;
}
