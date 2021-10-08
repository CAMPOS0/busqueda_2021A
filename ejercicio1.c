#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

void LeerArr(int arr[N]);
int pedirNum();
int buscar (int arr[N], int numero);

int main()
{
    int arr[N];
    int encontrar, busqueda;

    LeerArr(arr);

    busqueda = pedirNum();
    encontrar = buscar(arr, busqueda);

    if (encontrar != -1)
    
           printf ("Enconteo el numero en %d\n", encontrar);
    else
        printf("El no existe");
    
   return 0;
}

int buscar (int arr[N], int numero)
{
    int i;
    int ant = -1;

    for ( i = 0; i < N && ant == -1; i++)
    {
        if (arr[i]== numero)
           ant = 1;
    }

    return ant;
}

int pedirNum()
{
    int numUsuario;

    printf("DAme el numero buscado: ");
    scanf("%d", &numUsuario);

    return numUsuario;
}

void LeerArr(int arr[N])
{
    int c;

    for(c = 0;c < N;c++)
    {
        printf("Arreglo [%d]: ", c);
        scanf("%d", &arr[c]);
    }
    return 0;
}
