#include <stdio.h>
#include <stdlib.h>

#define N 10

void LeerArr(int arr[N]);

int main()
{
    int arr[N];
    int men, pos;

    LeerArr(arr);
    men = busacaM(arr,&pos);

    return 0;
}

int buscaM(int arreglo, int *pos)
{
    int m = arreglo [0];
    int i;

    for ( i = 0; i < N; i++)
    {
        if (arreglo[i] < m)
        {
            m = arreglo[i];
            *pos = i;
        }
        
    }
    
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
