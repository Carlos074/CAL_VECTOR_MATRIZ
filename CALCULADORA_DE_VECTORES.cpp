//Camacho Hernández Juan Carlos "Calculadora de Vectores" 1AV6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <iostream>
void imprimir_menu();
void leer_opcion(int &opt);
void leer_vector(int *ptrV1, int size, char a);
void resultado( int *ptrV3, int size);
void suma(int *ptrV1, int *ptrV2, int *ptrVR);
void resta (int *ptrV1, int *ptrV2, int *ptrVR);
void escalar(int *ptrV1, int *ptrV2, int &a, int &b, int &c, int &r);
void vectorial(int *ptrV1, int *ptrV2, int &a, int &b, int &c, int &a2, int &b2, int &c2, int &a3, int &b3, int &c3);
float norma (int *ptrV1, int *ptrV2, int &a, int &b, int &c, int &a2, int &b2, int &c2);
float unitario(int *ptrV1, int &a, int &b, int &c, int &a2, int &b2, int &c2, int &a3, int &b3, int &c3);
int main(){
char regreso;
int opt;
int V1[3],V2[3],VR[3];
int *ptrV1=&V1[0];
int *ptrV2=&V2[0];
int *ptrVR=&VR[0];
int a, b, c, a2, b2, c2, a3, b3, c3,r;
do{
    imprimir_menu();
    leer_opcion(opt);
switch(opt){
case 1:
    leer_vector(ptrV1, 3, 'A');
    leer_vector(ptrV2, 3, 'B');
    suma(ptrV1, ptrV2, ptrVR);
    resultado(ptrVR,3);
    break;
case 2:
    leer_vector(ptrV1, 3, 'A');
    leer_vector(ptrV2, 3, 'B');
    resta(ptrV1, ptrV2, ptrVR);
    resultado(ptrVR,3);
    break;
case 3:
    leer_vector(ptrV1, 3, 'A');
    leer_vector(ptrV2, 3, 'B');
    escalar(ptrV1, ptrV2, a, b, c, r);
    printf("\n El producto escalar es: %d",r);
    break;
case 4:
    leer_vector(ptrV1, 3, 'A');
    leer_vector(ptrV2, 3, 'B');
    vectorial(ptrV1, ptrV2, a, b, c, a2, b2, c2, a3, b3, c3);
    printf("\n El producto vectorial es: %d",c);
    printf("\n El producto vectorial es: %d",c2);
    printf("\n El producto vectorial es: %d",c3);
    break;
case 5:
     leer_vector(ptrV1, 3, 'A');
     leer_vector(ptrV2, 3, 'B');
     norma (ptrV1, ptrV2, a, b, c, a2, b2, c2);
     printf("\n La norma es: %d",a2 );
     printf("\n La norma es: %d",b2 );
     printf("\n La norma es: %d",c2 );
     break;
case 6:
     leer_vector(ptrV1, 3, 'A');
     unitario(ptrV1, a, b, c, a2, b2, c2, a3, b3, c3);
     printf("\n El vector unitario es: %d",a3 );
     printf("\n El vector unitario es: %d",b3 );
     printf("\n El vector unitario es: %d",c3 );
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
printf("3.-Producto escalar\n");
printf("4.-Producto vectorial\n");
printf("5.-Norma\n");
printf("6.-Vector unitario\n");
}
void leer_opcion(int &opt){
    scanf("%d",&opt);
}
void leer_vector(int *ptrV1,int size,char a){
for(int i=0;i<size;i++){
    printf("\n Introduce el valor del vector %c [%d]:", a,i);
    scanf("%d", ptrV1+i);
}
}
void resultado(int *ptrVR, int size){
for(int i=0; i<3; i++){
    printf("\n El vector resultante es: VR[%d]=%d", i, *(ptrVR+i));
}
}
void suma(int *ptrV1, int *ptrV2, int *ptrVR){
for(int i=0; i<3; i++){
    *(ptrVR+i)=*(ptrV1+i)+*(ptrV2+i);
}
}
void resta(int *ptrV1, int *ptrV2, int *ptrVR){
for (int i=0; i<3; i++){
    *(ptrVR+i)=*(ptrV1+i)-*(ptrV2+i);
}
}
void escalar(int *ptrV1, int *ptrV2, int &a, int &b, int &c, int &r){
    a=(ptrV1[0])*(ptrV2[0]);
    b=(ptrV1[1])*(ptrV2[1]);
    c=(ptrV1[2])*(ptrV2[2]);
    r=a+b+c;
}
void vectorial(int *ptrV1, int *ptrV2, int &a, int &b, int &c, int &a2, int &b2, int &c2, int &a3, int &b3, int &c3){
    a=(ptrV1[1])*(ptrV2[2]);
    b=(ptrV1[2])*(ptrV2[1]);
    c=a-b;
    a2=(ptrV1[0])*(ptrV2[2]);
    b2=(ptrV1[2])*(ptrV2[0]);
    c2=a2+b2;
    a3=(ptrV1[0])*(ptrV2[1]);
    b3=(ptrV1[1])*(ptrV2[0]);
    c3=a3-b3;
}
float norma (int *ptrV1, int *ptrV2, int &a, int &b, int &c, int &a2, int &b2, int &c2){
a=pow(ptrV1[0],2)+pow(ptrV2[0],2);
b=pow(ptrV1[1],2)+pow(ptrV2[1],2);
c=pow(ptrV1[2],2)+pow(ptrV2[2],2);
a2=sqrt(a);
b2=sqrt(b);
c2=sqrt(c);
}
float unitario(int *ptrV1,int &a, int &b, int &c, int &a2, int &b2, int &c2, int &a3, int &b3, int &c3){
a=pow(ptrV1[0],2);
b=pow(ptrV1[1],2);
c=pow(ptrV1[2],2);
a2=sqrt(a);
b2=sqrt(b);
c2=sqrt(c);
a3=ptrV1[0]/a2;
b3=ptrV1[1]/b2;
c3=ptrV1[2]/c2;
}
