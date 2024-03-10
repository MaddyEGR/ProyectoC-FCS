#include <stdio.h>

//Tipo de Cambio USD: 1 USD = 7.75 GTQ
#define TC_Dolar_GTQ 7.75
//Tipo de Cambio EUR: 1 EUR = 8.55 GTQ
#define TC_Euro_GTQ 8.55

int main(){
    int opcion1;
    int opcion2;
    float cantidad;
    

    printf ("Bienvenido al conversor de moneda\n");
    printf ("1. Dolares\n");
    printf ("2. Euros\n");
    printf ("Elija el tipo de moneda: ");
    scanf("%d", &opcion1);

    if(opcion1 == 1){
    
    printf ("1. Convertir de Dólares a Quetzales\n");
    printf ("2. Convertir de Quetzales a Dólares\n");
    printf ("Ingrese la opción: ");
    scanf("%d", &opcion2);

        switch (opcion2) {
            case 1:
                printf("Ingrese la cantidad en Dólares: ");
                scanf("%f", &cantidad);
                printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_Dolar_GTQ);
                break;
            case 2:
                printf("Ingrese la cantidad en Quetzales: ");
                scanf("%f", &cantidad);
                printf("%.2f GTQ equivale a %02f USD\n", cantidad, cantidad / TC_Dolar_GTQ);
                break;
            default:
                printf("Opción no válida\n");}
          
    }
    if(opcion1 == 2){
        printf ("1. Convertir de Euros a Quetzales\n");
        printf ("2. Convertir de Quetzales a Euros\n");
        printf ("Ingrese la opción: ");
        scanf("%d", &opcion2);

        switch (opcion2) {
            case 1:
                printf("Ingrese la cantidad en Euros: ");
                scanf("%f", &cantidad);
                printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TC_Euro_GTQ);
                break;
            case 2:
                printf("Ingrese la cantidad en Quetzales: ");
                scanf("%f", &cantidad);
                printf("%.2f GTQ equivale a %02f EUR\n", cantidad, cantidad / TC_Euro_GTQ);
                break;
            default:
                printf("Opción no válida\n");}

    }
    return 0;
}  