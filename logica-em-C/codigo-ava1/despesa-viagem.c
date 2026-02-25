#include <stdio.h>

int main() { //variaveis 
    float distancia;
    float preco;
    float gasto_total;
    
    printf("Digite a distancia da viagem em quilometros: ");
    scanf("%f", &distancia);
    
    printf("Digite o preco do litro do combustivel: R$ ");
    scanf("%f", &preco);
    
    //10 km por litro
    // litro 6,33
    gasto_total = (distancia / 10) * preco;

    /*obs: sempre para executar o codigo tem que compilar
    e tambem se fizer alguma mudanca*/
    
    printf("\nRESULTADO DA VIAGEM\n");
    printf("Distancia: %.2f km\n", distancia);
    printf("Preco do litro: R$ %.2f\n", preco);
    printf("Total a gastar: R$ %.2f\n", gasto_total);
    
    return 0;
}

