#include <stdio.h>
#include <stdlib.h>
#include "headers/datos.h"
#include "headers/calculos.h"
void mostrar_menu_figuras(){
    printf("\nCalculadora Linux\nEscoge que figura quieres calcular:\n");
    printf("1. Triángulo\n2. Paralelogramo\n3. Cuadrado\n4. Rectángulo\n5. Rombo\n6. Trapecio\n7. Círculo\n8. Polígono Regular");
    printf("\n9. Cubo\n10. Cuboide\n11. Cilindro Recto\n12. Esfera\n13. Cono Circular Recto\n14. SALIR");
}
int pedir_opcion(){
    int valorIngresado=0;
    printf("\nIngrese su opción: ");
    scanf("%d", &valorIngresado);
    return valorIngresado;
}
void repito(){
    printf("Pon algo coherente\n");
}
void triangulo() {
    float l1, l2, l3, base, altura;
    printf("\nTRIÁNGULO\nIngrese longitud del lado 1: ");
    scanf("%f", &l1);
    printf("Ingrese longitud del lado 2: ");
    scanf("%f", &l2);
    printf("Ingrese longitud del lado 3: ");
    scanf("%f", &l3);
    printf("Ingrese Base: ");
    scanf("%f", &base);
    printf("Ingrese Altura: ");
    scanf("%f", &altura);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_triangulo(base, altura), perimetro_triangulo(l1, l2, l3));
}
void paralelogramo() {
    float a, b, base, altura;
    printf("\nPARALELOGRAMO\nIngrese longitud del lado 1: ");
    scanf("%f", &a);
    printf("Ingrese longitud del lado 2: ");
    scanf("%f", &b);
    printf("Ingrese Base: ");
    scanf("%f", &base);
    printf("Ingrese Altura: ");
    scanf("%f", &altura);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_cuadrilatero(base, altura), perimetro_cuadrilatero(a, b));
}
void cuadrado() {
    float lado;
    printf("\nCUADRADO\nIngrese longitud de los lados: ");
    scanf("%f", &lado);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_cuadrilatero(lado, lado), perimetro_cuadrilatero(lado, lado));
}
void rectangulo() {
    float base, altura;
    printf("\nRECTÁNGULO\nIngrese Base: ");
    scanf("%f", &base);
    printf("Ingrese Altura: ");
    scanf("%f", &altura);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_cuadrilatero(base, altura), perimetro_cuadrilatero(base, altura));
}
void rombo() {
    float diagonalM, diagonalm, lado;
    printf("\nROMBO\nIngrese longitud de los lados: ");
    scanf("%f", &lado);
    printf("Ingrese Diagonal Mayor: ");
    scanf("%f", &diagonalM);
    printf("Ingrese Diagonal Menor: ");
    scanf("%f", &diagonalm);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_triangulo(diagonalM, diagonalm), perimetro_cuadrilatero(lado, lado));
}
void trapecio() {
    float lado1, lado2, basem, baseM, altura;
    printf("\nTRAPECIO\nIngrese longitud del lado Izquierdo: ");
    scanf("%f", &lado1);
    printf("Ingrese longitud del lado Derecho: ");
    scanf("%f", &lado2);
    printf("Ingrese Base Menor: ");
    scanf("%f", &basem);
    printf("Ingrese Base Mayor: ");
    scanf("%f", &baseM);
    printf("Ingrese Altura: ");
    scanf("%f", &altura);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_trapecio(basem, baseM, altura), perimetro_trapecio(basem, baseM, lado1, lado2));
}
void circulo() {
    float radio;
    printf("\nCÍRCULO\nIngrese longitud del radio: ");
    scanf("%f", &radio);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_circulo(radio), perimetro_circulo(radio));
}
void poligono_regular() {
    float lado, n;
    printf("\nPOLÍGONO REGULAR\nIngrese longitud de los lados: ");
    scanf("%f", &lado);
    printf("Ingrese número de lados: ");
    scanf("%f", &n);
    printf("\nÁrea: %.2f\nPerímetro: %.2f\n", area_poligonor(lado, n), perimetro_poligonor(lado, n));
}
// Figuras 3D
void cubo(){
    float lado;
    printf("\nCUBO\nIngrese la longitud de los lados: ");
    scanf("%f", &lado);
    printf("\nVolumen: %.2f\nÁrea de la Superficie: %.2f \n",volumen_cubo(lado),superficie_cubo(lado));
}
void cuboide(){
    float a,b,c;
    printf("\nCUBOIDE\nIngrese la longitud de altura: ");
    scanf("%f", &a);
    printf("\nIngrese la longitud de anchura: ");
    scanf("%f", &b);
    printf("\nIngrese la longitud de prufundidad: ");
    scanf("%f", &c);
    printf("\nVolumen: %.2f\nÁrea de la Superficie: %.2f \n",volumen_cuboide(a,b,c),superficie_cuboide(a,b,c));
}
void cilindro(){
    float radio,altura;
    printf("\nCILINDRO RECTO\nIngrese la longitud de altura: ");
    scanf("%f", &altura);
    printf("\nIngrese el radio de la base: ");
    scanf("%f", &radio);
    printf("\nVolumen: %.2f\nÁrea de la Superficie: %.2f \n",volumen_cilindro(radio,altura),superficie_cilindro(radio,altura));
}
void esfera(){
    float radio,altura;
    printf("\nESFERA\nIngrese la longitud del radio: ");
    scanf("%f", &altura);
    printf("\nVolumen: %.2f\nÁrea de la Superficie: %.2f \n",volumen_esfera(radio),superficie_esfera(radio));
}
void cono(){
    float radio,altura,generatris;
    printf("\nCONO CÍRCULAR RECTO\nIngrese la longitud de altura: ");
    scanf("%f", &altura);
    printf("\nIngrese el radio de la base: ");
    scanf("%f", &radio);
    printf("\nIngrese la longitud de la generatriz: ");
    scanf("%f", &generatris);
    printf("\nVolumen: %.2f\nÁrea de la Superficie: %.2f \n",volumen_cono(radio,altura),superficie_cono(radio,generatris));
}
