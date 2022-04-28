
#include <stdio.h>

int main () {

    float salarioInicial;

    printf("\nDigite o Salario Inicial\n");
    scanf("%f%*c",&salarioInicial);

    if (salarioInicial <= 500) {

        salarioInicial = salarioInicial + ((salarioInicial * 0,05) + 150);

    } else if (salarioInicial >501 && salarioInicial <=600) {

        salarioInicial = salarioInicial + ((salarioInicial * 0,12) + 150);

    } else if (salarioInicial > 601 &&  salarioInicial <= 1200) {

        salarioInicial = salarioInicial + ((salarioInicial * 0,12) + 100);

    } else (salarioInicial > 1.200) {

    printf_s("\nBonificacao = %f\n" );
    }

    printf_s("\nO valor do salario e: %f\n", salarioInicial );


    getchar();
    return 0;

}
