#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    char salir = ' ';
    do{

        system("cls");
        int par = 0, impar = 0, i = 0, mayor = 0, menor = 0;
        int v[10];

        for(i = 0; i < 10; i++){v[i] = 0;}

        for(i = 0; i < 10; i++){

            printf("Ingrese el número de la posición %d: ", i);
            scanf("%d", &v[i]);
            fflush(stdin);

            if(v[i] % 2 == 0){par++;}
            else{impar++;}
        }

        mayor = v[0];
        menor = v[0];
        for(i = 0; i < 10; i++){
            if(mayor < v[i]){mayor = v[i];}
            if(menor > v[i]){menor = v[i];}
        }

        printf("\n\n%d números son pares\n%d números son impares\nEl valor máximo es %d\nEl valor mínimo es %d", par, impar, mayor, menor);

        printf("\n\nSi desea salir presione 'S' o 's'");
        scanf("%c", &salir);
        fflush(stdin);

    }while(salir != 'S' && salir != 's');

    return 0;
}