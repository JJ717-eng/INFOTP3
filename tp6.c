#include <stdio.h>

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main(void)
{
    int opcion;
    int opcionValida;    // Chequea si la opcion es correcta o no
    float longitud;      // Longitud del rectangulo
    float altura;        // Altura del rectangulo
    float radio;         // Radio del circulo
    float area;           //Calculo del area
    float perimetro;      //Calculo del perimetro

    opcionValida = 0;
    // Opcion no valida
    do
    {
        printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
        scanf("%d", &opcion);

        if (opcion == 1 || opcion == 2)
        {
            opcionValida = 1;
        }
        else
        {
            printf("Error. Por favor ingresar 1 o 2.\n");
            opcionValida = 0;
        }
    } while (opcionValida == 0);
    if (opcion == 1)
    {
        //Rectangulo

        printf("\nOpcion de rectangulo seleccionada\n\n");

        printf("Ingrese la longitud del rectangulo: ");
        scanf("%f", &longitud);

        printf("Ingrese la altura del rectangulo: ");
        scanf("%f", &altura);

        area = calcularAreaRectangulo(longitud, altura);
        perimetro = calcularPerimetroRectangulo(longitud, altura);
        printf("\n");
        imprimirResultados(area, perimetro);
    }
    else
    //Circulo
    {

        printf("\nOpcion de circulo seleccionada\n\n");

        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);

        area = calcularAreaCirculo(radio);
        perimetro = calcularPerimetroCirculo(radio);

        printf("\n");
        imprimirResultados(area, perimetro);
    }

    return 0;
}
//Area rect.
float calcularAreaRectangulo(float longitud, float altura)
{
    float area;

    area = longitud * altura;

    return area;
}
//Perimetro rect.
float calcularPerimetroRectangulo(float longitud, float altura)
{
    float perimetro;
    perimetro = 2 * (longitud + altura);
    return perimetro;
}
//Area circulo
float calcularAreaCirculo(float radio)
{
    float area;
    float pi = 3.14159265;

    area = pi * radio * radio;
    return area;
}
//Perimetro circulo
float calcularPerimetroCirculo(float radio)
{
    float perimetro;
    float pi = 3.14159265;

    perimetro = 2 * pi * radio;
    return perimetro;
}

//Imprimir result
void imprimirResultados(float area, float perimetro)
{
    printf("El area de la figura es: %.2f\n", area);
    printf("El perimetro de la figura es: %.2f\n", perimetro);
}