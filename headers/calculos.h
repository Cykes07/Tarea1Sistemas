#ifndef calculos
#define calculos
//---------------------------------------------------------------
//Figuras 2D
//---------------------------------------------------------------
//Triangulo
float area_triangulo(float base, float altura);
float perimetro_triangulo(float lado1,float lado2, float lado3);
//---------------------------------------------------------------
//Cuadrilateros (Rectangulos, Paralelogramos, Cuadrados, etc)
float perimetro_cuadrilatero(float lado1,float lado2);
float area_cuadrilatero(float base, float altura);
//---------------------------------------------------------------
//Trapecio
float area_trapecio(float basemayor,float basemenor,float altura);
float perimetro_trapecio(float basemayor,float basemenor, float lado1, float lado2);
//---------------------------------------------------------------
//Circulo
float area_circulo(float radio);
float perimetro_circulo(float radio);
//---------------------------------------------------------------
//Poligono regular
float perimetro_poligonor(float lado, float  n);
float area_poligonor(float lado, float n);
//---------------------------------------------------------------
//Figuras 3D
//---------------------------------------------------------------
//Cubo
float volumen_cubo(float lado);
float superficie_cubo(float lado);
//---------------------------------------------------------------
//Cuboide
float volumen_cuboide(float a, float b, float c);
float superficie_cuboide( float a, float b, float);
//---------------------------------------------------------------
//Cilindro
float volumen_cilindro(float radio, float altura);
float superficie_cilindro(float radio,float altura);
//---------------------------------------------------------------
//Esfera
float volumen_esfera(float radio);
float superficie_esfera(float radio);
//---------------------------------------------------------------
//Cono
float volumen_cono(float radio,float altura);
float superficie_cono(float radio,float generatris);
//---------------------------------------------------------------
#endif
