#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "headers/calculos.h"

float pi = (22/7); //Pi se usa varias veces, asi que para no calcular varias veces, lo guardamos en una variable independiente
//---------------------------------------------------------------
//Triangulo
float area_triangulo(float base, float altura){ //Esta funcion sirve tambien para el rombo
    return base*altura/2;
}
float perimetro_triangulo(float lado1,float lado2, float lado3){
    return lado1+lado2+lado3;
}
//---------------------------------------------------------------
//Cuadrilateros (Rectangulos, Paralelogramos, Cuadrados, etc)
float area_cuadrilatero(float base, float altura){
    return base*altura; 
}
float perimetro_cuadrilatero(float lado1,float lado2){ 
    return 2*(lado1+lado2);
} //---------------------------------------------------------------
//Trapecio
float area_trapecio(float basemayor,float basemenor,float altura){
    return ((basemayor*basemenor)/2)*altura;
}
float perimetro_trapecio(float basemayor,float basemenor, float lado1, float lado2){
    return lado1+lado2+basemayor+basemenor;
}
//---------------------------------------------------------------
//Circulo
float area_circulo(float radio){
    return pi*radio*radio; //Pi es igual a 22/7, se lo usa para mayor exactitud 
}
float perimetro_circulo(float radio){
    return pi*2*radio;
}
//---------------------------------------------------------------
//Poligono regular
float perimetro_poligonor(float lado, float  n){
    return lado*n;    
}
float area_poligonor(float lado, float n){
    float apot = lado/(2*tan(pi/n));
    return (apot*n*lado)/2;
}
//---------------------------------------------------------------
//Figuras 3D
//---------------------------------------------------------------
//Cubo
float volumen_cubo(float lado){
    return pow(lado,3);
}
float superficie_cubo(float lado){
    return 6*pow(lado,2);
}
//---------------------------------------------------------------
//Cuboide
float volumen_cuboide(float a, float b, float c){
    return a*b*c;
}
float superficie_cuboide( float a, float b, float c){
    return 2*(area_cuadrilatero(a,b)+area_cuadrilatero(b,c)+area_cuadrilatero(a,c));
}
//---------------------------------------------------------------
//Cilindro
float volumen_cilindro(float radio, float altura){
    return area_circulo(radio)*altura;
}
float superficie_cilindro(float radio,float altura){
    return perimetro_circulo(radio)*(radio+altura);
}
//---------------------------------------------------------------
//Esfera
float volumen_esfera(float radio){
    return (4/3)*area_circulo(radio);
}
float superficie_esfera(float radio){
    return 4*area_circulo(radio);
}
//---------------------------------------------------------------
//Cono
float volumen_cono(float radio,float altura){
    return (4/3)*pow(radio,2)*altura;
}
float superficie_cono(float radio,float generatris){
    return area_circulo(radio)+pi*radio*generatris;
}
//---------------------------------------------------------------
