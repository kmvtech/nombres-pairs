#include <stdio.h>
int nombrePositif()
{   
    int nombre = 0 ;
    printf("Entrer un nombre positif :");
    scanf("%d", &nombre);
    while (nombre < 0)
    {
        printf("vous devez un nombre positif et non negatif :");
        scanf("%d", &nombre);

    }
    return nombre ;
    
}
int main()
{
    int nombre = 0;
    nombre = nombrePositif();

    printf("Les nombres pairs entre 1 et %d sont : ", nombre);
    for(int i = 1; i <= nombre; i++)
    {
        /* code */
        if(i%2 == 0)
        {
            printf("%d; ", i);
        }
        
    }
    printf("\n");
    return 0;
}