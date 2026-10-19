#include <stdio.h>
void BMI(int, float); // Funcion "BMI" sin retorno que habilita los parámetros entero y punto flotante.

int main(void) {
int peso; // Variable peso.
float altura; // Variable altura.
// Solicita peso y altura al usuario corriendo el programa.
printf("Escribí tu peso en kg (como un número entero XX): ");
scanf("%d", &peso);
printf("Escribí tu altura en metros (como número decimal X.XX): ");
scanf("%f", &altura);

BMI(peso, altura); // Llama a la función BMI con los valores peso y altura ya introducidos.
}
// Función sin retorno que especifica peso como entero y altura como punto flotante.
void BMI(int peso, float altura) {
float temp = peso / (altura * altura); // Calcula el IMC como punto flotante usando la formula "peso / altura(cuadrado)"

// Muestra el IMC ya calculado.
printf("\nTu BMI/Indice de Masa Corporal es = %.2f\n", temp);

printf("\nÍndice - Condición\n");
printf("<18.5 - Bajo peso\n");
printf("18.5 a 24.9 - Normal\n");
printf("25 a 29.9 - Sobrepeso\n");
printf(">=30 - Obesidad\n");
printf("\nNota: ");
// Le asigna al valor de IMC una categoría.
temp < 18.5 ? printf("Bajo peso\n") : temp < 25 ? printf("Peso normal\n") : temp < 30 ? printf("Sobrepeso\n") : temp >= 30 ? printf("Obesidad\n") : printf("Error\n");
}