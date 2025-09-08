#include <stdio.h>

int main (){

    int nota;

    printf("DIgite sua nota: ");
    scanf("%d", &nota);

    if(nota >= 90){
        printf("Você tirou um A\n");

    }   else if (nota >= 80 ){
        printf("Você tirou um B\n");

    }   else if (nota >= 70){
        printf("Você tiro um C\n");

    }   else if (nota >= 60){
        printf("Você tirou um D\n");
    }   else if (nota <= 50){
        printf("Você tirou um E\n");
    }   else {
        printf("Você tiro umn");
    }

    return 0;
}
    

    