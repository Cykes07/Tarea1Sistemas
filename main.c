#include "headers/datos.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

// Prototipos
int validar_usuario(const char* usuario, const char* clave);
void registrar_bitacora(const char* usuario, const char* accion);

int main() {
    char usuario[100], clave[100];
    int acceso_valido = 0;
    int valorIngresado = 0;
    int seguir = 1;

    printf("Ingrese su usuario: ");
    scanf("%s", usuario);
    printf("Ingrese su clave: ");
    scanf("%s", clave);

    acceso_valido = validar_usuario(usuario, clave);

    if (acceso_valido) {
        printf("Acceso exitoso. Bienvenido %s.\n", usuario);
        registrar_bitacora(usuario, "Ingreso exitoso al sistema");

        // Bucle para las figuras
        while (seguir) {
            mostrar_menu_figuras();
            valorIngresado = pedir_opcion();
            switch (valorIngresado) {
                case 1:
                    triangulo();
                    registrar_bitacora(usuario, "Triángulo");
                    break;
                case 2:
                    paralelogramo();
                    registrar_bitacora(usuario, "Paralelogramo");
                    break;
                case 3:
                    cuadrado();
                    registrar_bitacora(usuario, "Cuadrado");
                    break;
                case 4:
                    rectangulo();
                    registrar_bitacora(usuario, "Rectángulo");
                    break;
                case 5:
                    rombo();
                    registrar_bitacora(usuario, "Rombo");
                    break;
                case 6:
                    trapecio();
                    registrar_bitacora(usuario, "Trapecio");
                    break;
                case 7:
                    circulo();
                    registrar_bitacora(usuario, "Círculo");
                    break;
                case 8:
                    poligono_regular();
                    registrar_bitacora(usuario, "Polígono regular");
                    break;
                case 9:
                    cubo();
                    registrar_bitacora(usuario, "Cubo");
                    break;
                case 10:
                    cuboide();
                    registrar_bitacora(usuario, "Cuboide");
                    break;
                case 11:
                    cilindro();
                    registrar_bitacora(usuario, "Cilindro");
                    break;
                case 12:
                    esfera();
                    registrar_bitacora(usuario, "Esfera");
                    break;
                case 13:
                    cono();
                    registrar_bitacora(usuario, "Cono");
                    break;
                case 14:
                    // Salir
                    seguir = 0;
                    registrar_bitacora(usuario, "Salida del sistema");
                    printf("Saliendo del sistema.\n");
                    break;
                default:
                    // Verificar que sea una opción válida
                    repito();
                    break;
            }
        }
    } else {
        printf("Acceso fallido. Usuario o clave incorrectos.\n");
        registrar_bitacora(usuario, "Ingreso fallido usuario/clave erróneo");
    }

    return 0;
}


int validar_usuario(const char* usuario, const char* clave) {
    FILE *file = fopen("usuarios.txt", "r");
    if (!file) {
        printf("Error al abrir el archivo de usuarios.\n");
        return 0;
    }

    char linea[100], user[100], pass[100];
    while (fgets(linea, sizeof(linea), file)) {
        sscanf(linea, "%[^:]:%s", user, pass);  
        if (strcmp(user, usuario) == 0 && strcmp(pass, clave) == 0) {
            fclose(file);
            return 1;  
        }
    }

    fclose(file);
    return 0;  
}


void registrar_bitacora(const char* usuario, const char* accion) {
    FILE *file = fopen("bitacora.txt", "a");
    if (!file) {
        printf("Error al abrir el archivo de bitácora.\n");
        return;
    }

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(file, "%d/%02d/%02d: %s - %s\n",
            tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, usuario, accion);

    fclose(file);
}