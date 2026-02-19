#include <stdio.h>
#include <stdlib.h>

/*
Sintaxe: printf(<texto>, <v1>, <v2>, ..., <vN>);
Uso: 0,1 ou N variáveis

Espicificadores de formado: printf():
d ou i = n inteiros em base decimal
x = n inteiros em base hexadecimal
f = n em ponto flutuante(com casas decimais)
e = n em notação cientifica(com casas decimais)
c = caracteres alfanumericos(texto)
s = sequencia de caracteres alfanumericos(texto)
.<num> = especifica quantos digitos serao impressos após a virgula
*/

int main(){
	
	printf("Oi, tudo bem? Teno 16 anos e programo.\n");
	
	printf("Valor inteiro: %d.\n", 10);
	printf("Valor real: %f.\n", 3.14159265);
	printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
	printf("Dado de texto: %c.\n", 'a');
	printf("Dado de texto: %s.\n", "testando");
};
