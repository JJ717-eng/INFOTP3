#include <stdio.h>

//La URL del repositorio es:   https://github.com/JJ717-eng/INFOTP3

// Cantidad fija de productos para cargar (TAM)
#define TAM 5

int main(void)
{
    int codigos[TAM]; // Codigos de barra
    float precios[TAM]; // Precios de cada producto

    int i; // Contador de arreglos

    int codigoIngresado; // Guarda los codigos que se ingresan
    float precioIngresado; // Guarda los precios que se ingresan

    int precioMayor; // Producto con precio mas alto
    int precioMenor; // Producto con precio mas alto
    
    // ||-Carga de productos-||

    printf("\nIngrese %d productos, se solicitara el codigo y precio:\n\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        //Valida el codigo de barras
        do
        {
            printf("Ingrese el codigo de barras (1-999999999): ");
            scanf("%d", &codigoIngresado);

            if (codigoIngresado < 1 || codigoIngresado > 999999999)
            {
                printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            }

        } while (codigoIngresado < 1 || codigoIngresado > 999999999);
        //Valida precios
        do
        {
            printf("Ingrese el precio: ");
            scanf("%f", &precioIngresado);

            if (precioIngresado < 0)
            {
                printf("Error. El precio no puede ser negativo\n");
            }

        } while (precioIngresado < 0);
        //Se guardan los datos validados en i
        codigos[i] = codigoIngresado;
        precios[i] = precioIngresado;

        printf("\n");
    }
    // ||-Lista-||
    printf("Codigo     Precio\n");

    for (i = 0; i < TAM; i++)
    {
        printf("%9d %10.2f\n", codigos[i], precios[i]);
    }

    printf("\n");
    //Busca el mayor y el menor precio
    precioMayor = 0;
    precioMenor = 0;

    for (i = 1; i < TAM; i++)
    {
        if (precios[i] > precios[precioMayor])
        {
            precioMayor = i;
        }

        if (precios[i] < precios[precioMenor])
        {
            precioMenor = i;
        }
    }
    //Imprime el mas caro y el mas barato (mayor/menor)
    printf("Mas caro: [%d] %.2f\n", codigos[precioMayor], precios[precioMayor]);
    printf("Mas barato: [%d] %.2f\n", codigos[precioMenor], precios[precioMenor]);

    return 0;
}