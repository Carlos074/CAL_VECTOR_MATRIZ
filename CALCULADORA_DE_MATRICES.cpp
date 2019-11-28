//Camacho Hernández juan Carlos "Calculadora de matrices" 1AV6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <iostream>
void imprimir_menu();
void leer_opcion(int &opt);
void datos();
void resultado(int **ptr1, int filas, int columnas);
void suma(int **ptr1, int **ptr2, int filas, int columnas);
void resta(int **ptr1, int **ptr2, int filas, int columnas);
void multiplicacion(int **ptr1, int **ptr2, int filas, int columnas);
int opt, **ptr1, **ptr2, filas,columnas;
int main(){
char regreso;
int opt;

do{
    imprimir_menu();
    leer_opcion(opt);
switch(opt){
case 1:
    datos;
    suma(ptr1,ptr2,filas,columnas);
    resultado(ptr1,filas, columnas);
    break;
case 2:
    datos;
    multiplicacion(ptr1,ptr2,filas,columnas);
    resultado(ptr1,filas, columnas);
    break;
case 3:
datos;
    resta(ptr1,ptr2,filas,columnas);
    resultado(ptr1,filas, columnas);
    break;
  default:
    printf("\nIntroduce un número del 1 al 6\n");
}
printf("\nRealizar otra operacion: S N\n");
regreso=getch();
}
while(regreso=='s'||regreso=='S');
}
void imprimir_menu(){
printf("Elige la operacion a realizar\n");
printf("1.-Suma\n");
printf("2.-Resta\n");
printf("3.-Multiplicacion");
}
void leer_opcion(int &opt){
    scanf("%d",&opt);
}
void datos(){
    printf("Digite el numero de Filas\n");
    scanf("%d",filas);
    printf("Difite el numero de Columnas\n");
    scanf("%d", columnas);
    ptr1= new int*[filas];
    for(int i=0; i<filas; i++){
        ptr1[i]=new int[columnas];
    }
printf("Digite los numero de la primera matriz\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        printf("Digite un número[%c][%d]", i, j);
        scanf("*(*(ptr1+i)+j)");
        }
    printf("Digite el numero de Filas\n");
    scanf("%d",filas);
    printf("Difite el numero de Columnas\n");
    scanf("%d", columnas);
    ptr2= new int*[filas];
    for(int i=0; i<filas; i++){
        ptr2[i]=new int[columnas];
    }
    }
printf("Digite los numero de la segunda matriz\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        printf("Digite un número[%c][%d]",i,j);
        scanf("*(*(ptr2+i)+j)");
        }
    }
}
void resultado(int **ptr1, int filas, int columnas){
printf("el resultado es:");
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        printf("*(*(ptr1+1)+j)");
    }
    printf("\n");
}
}
void suma(int **ptr1, int **ptr2, int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            *(*(ptr1+i)+j)+=*(*(ptr2+i)+j);
        }
    }
}
void resta(int **ptr1, int **ptr2, int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            *(*(ptr1+i)+j)-=*(*(ptr2+i)+j);
        }
    }
}
void multiplicacion(int **ptr1, int **ptr2, int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            *(*(ptr1+i)+j)*=*(*(ptr2+i)+j);
        }
    }
}
