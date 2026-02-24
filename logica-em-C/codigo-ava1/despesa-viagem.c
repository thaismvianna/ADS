#include <stdio.h>

int main() { //variáveis 
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
    e também se fizer alguma mudança*/
    
    printf("\nRESULTADO DA VIAGEM\n");
    printf("Distância: %.2f km\n", distancia);
    printf("Preço do litro: R$ %.2f\n", preco);
    printf("Total a gastar: R$ %.2f\n", gasto_total);
    
    return 0;
}

