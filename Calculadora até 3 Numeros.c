#include <stdio.h>
----
main(void){
    while(1){

        printf("Calculadora de 3 Numeros BZF");
        float A, B, C, op;
        printf("\n\nDigite um valor A: ");
        scanf("%f", &A);
        printf("\nDigite o valor B: ");
        scanf("%f", &B);
        printf("\nDigite o valor C: ");
        scanf("%f", &C);
        system("CLS");

float soma, sub, div, mult;
soma = A+B+C;
sub = A-B-C;
div = A/B/C;
mult = A*B*C;

printf("Calculadora de 3 Numeros BZF\n");
printf("\n1- Soma\n\n2- Subtracao\n\n3- Divisao\n\n4-Multiplicacao\n\n");
printf("Escolha uma opcao: ");
scanf("%f", &op);

printf("Calculadora de 3 Numeros BZF");

    if (op==1){
    system("CLS");
    printf("Calculadora de 3 Numeros BZF\n\n");
    printf("%.2f + %.2f + %.2f = %.2f\n\n", A, B, C, soma);
    }
    if (op==2){
    system("CLS");
    printf("Calculadora de 3 Numeros BZF\n\n");
    printf("%.2f - %.2f - %.2f = %.2f\n\n", A, B, C, sub);
    }
    if (op==3){
    system("CLS");
    printf("Calculadora de 3 Numeros BZF\n\n");
    printf("%.2f / %.2f / %.2f = %.2f\n\n", A, B, C, div);
    }
    if (op==4){
    system("CLS");
    printf("Calculadora de 3 Numeros BZF\n\n");
    printf("%.2f * %.2f * %.2f = %.2f\n\n", A, B, C, mult);
    }
    if (op>4){
    printf("Calculadora de 3 Numeros BZF");
    printf("\n\nEscolha uma operação valida!");
    }

    printf("Tecle ENTER para fazer outro calculo.");
    getch();
    system("CLS");
}
}