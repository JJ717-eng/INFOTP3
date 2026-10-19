#include <stdio.h>

int main()
{
    int cantidadEstudiantes;
    int i;
    float calificacion;
    float notas[100];
    float suma;
    float promedio;
    float notaMasAlta;
    float notaMasBaja;
    
    // Valida que la cantidad de estudiantes sea positiva
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &cantidadEstudiantes);
    
    while (cantidadEstudiantes < 0)
    {
        printf("Error: la cantidad de estudiantes no puede ser negativa.\n");
        printf("Ingrese nuevamente la cantidad de estudiantes: ");
        scanf("%d", &cantidadEstudiantes);
    }

    // Pide las notas de cada estudiante
    suma = 0;
    for (i = 0; i < cantidadEstudiantes; i = i + 1)
    {
        printf("Ingrese la calificacion (del 0 al 100) del estudiante %d: ", i + 1);
        scanf("%f", &calificacion);

        // Valida si esque la nota esta entre 0 y 100
        while (calificacion < 0 || calificacion > 100)
        {
            printf("Error: la calificacion debe estar entre 0 y 100.\n");
            printf("Ingrese nuevamente la calificacion del estudiante %d: ", i + 1);
            scanf("%f", &calificacion);
        }

        // Guarda la calificacion que ya esta validada
        notas[i] = calificacion;

        // Actualiza la nota mas alta y la nota mas baja
        if (i == 0)
        {
            notaMasAlta = notas[i];
            notaMasBaja = notas[i];
        }
        else
        {
            if (notas[i] > notaMasAlta)
            {
                notaMasAlta = notas[i];
            }

            if (notas[i] < notaMasBaja)
            {
                notaMasBaja = notas[i];
            }
        }

        // Suma
        suma = suma + notas[i];
    }

    // Calcula e imprime un promedio con dos decimales
    promedio = suma / cantidadEstudiantes;

    printf("\nEl promedio de las calificaciones es: %.2f\n", promedio);

    // Imprime la nota más alta y la más baja
    printf("La calificacion mas alta es: %.2f\n", notaMasAlta);
    printf("La calificacion mas baja es: %.2f\n", notaMasBaja);
    
    return 0;
}