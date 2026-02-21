#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Voce tem %d anos.\n", idade);

    return 0;
}

/*
sempre para executar o codigo tem que compilar: no terminal
gcc idade.c -o idade (compilou)
.\idade ou só idade (executou o codigo)
*/ 


/*
esqueleto do c

#include <stdio.h>

int main() {

    return 0;
}

*/