#include <stdio.h>

int main() {
    float peso;
    float altura;
    float resultado_do_imc;

    printf("Calculo de IMC\n");
    printf("Digite o seu peso em quilos: ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura em metros e use ponto ao inves de virgula, por exemplo: 1.55: ");
    scanf("%f", &altura);
    
    resultado_do_imc = peso / (altura * altura);
    
    printf("\nSeu IMC: %.2f\n", resultado_do_imc);
    
    return 0;
}