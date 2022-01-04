#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    // Your code here!
    srand(time(NULL));
    int n,intento;
    n=rand()%101;
    

    printf("----ADIVINA EL NUMERO----\n");

    printf("Teclea un numero - 5 oportunidades\n");
    scanf("%i", &intento);
    if(intento==n){
        printf("GANASTE!!! ADIVINASTE EL NÚMERO\n");
        exit(-1);
    }else{
        if(intento>n){
            printf("El numero a adivinar es MENOR\n");
            printf("Te quedan 4 intentos\n");
        }else{
            printf("El nuero a adivinar es MAYOR\n");
            printf("Te quedan 4 intentos\n");
        }
    }
    printf("Teclea un numero - 4 oportunidades\n");
    scanf("%i", &intento);
    if(intento==n){
        printf("GANASTE!!! ADIVINASTE EL NÚMERO\n");
        exit(-1);
    }else{
        if(intento>n){
            printf("El numero a adivinar es MENOR\n");
            printf("Te quedan 3 intentos\n");
        }else{
            printf("El nuero a adivinar es MAYOR\n");
            printf("Te quedan 3 intentos\n");
        }
    }
    printf("Teclea un numero - 3 oportunidades\n");
    scanf("%i", &intento);
    if(intento==n){
        printf("GANASTE!!! ADIVINASTE EL NÚMERO\n");
        exit(-1);
    }else{
        if(intento>n){
            printf("El numero a adivinar es MENOR\n");
            printf("Te quedan 2 intentos\n");
        }else{
            printf("El nuero a adivinar es MAYOR\n");
            printf("Te quedan 2 intentos\n");
        }
    }
    printf("Teclea un numero - 2 oportunidades\n");
    scanf("%i", &intento);
    if(intento==n){
        printf("GANASTE!!! ADIVINASTE EL NÚMERO\n");
        exit(-1);
    }else{
        if(intento>n){
            printf("El numero a adivinar es MENOR\n");
            printf("Te quedan 1 intentos\n");
        }else{
            printf("El nuero a adivinar es MAYOR\n");
            printf("Te quedan 1 intentos\n");
        }
    }
    printf("Teclea un numero - 1 oportunidades\n");
    scanf("%i", &intento);
    if(intento==n){
        printf("GANASTE!!! ADIVINASTE EL NÚMERO\n");
        exit(-1);
    }else{
        if(intento>n){
            printf("El numero a adivinar es MENOR\n");
            printf("Te quedaste sin intentos :(\n");
            printf("El numero random era: %i\n", n);
        }else{
            printf("El nuero a adivinar es MAYOR\n");
            printf("Te quedaste sin intentos :(\n");
            printf("El numero random era: %i\n", n);
        }
    }
}