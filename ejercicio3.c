#include <stdio.h>
#include <stdlib.h>

#define N 10

void LeerArr(int arr[N]);

int main()
{
    int arr[N];
    int mayor, pos;

    LeerArr(arr);
    mayor = busacaM(arr,&pos);

    printf("El mayor es: %d\n",mayor);
    printf ("posicion : &d\n", pos);

    return 0;
}

int buscaM(int arr, int *pos)
{
    int m = arr [0];
    int i;

    for ( i = 0; i < N; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
            *pos = i;
        }
        
    }
    return m;
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
