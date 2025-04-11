#include <stdio.h>
int main()
{
    int nombre = 0 ;
    printf("Emtrez un nombre :");
    scanf("%d", &nombre);
    printf("Les nombres pairs entre 1 et %d sont : ", nombre);
    for (int i = 1; i <= nombre; i++)
    {
        /* code */
        if (i%2 == 0)
        {
            printf("%d; ", i);
        }
        
    }
    printf("\n");
    return 0;
}