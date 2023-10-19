#include <stdio.h>

int main()
{
    int opcao;
    float n1, n2, resultado;
    
    
   
        do{
            printf("Escolha a opção:\n 1 para somar.\n 2 para subtrair.\n 3 para multiplicar.\n 4 para dividir.\n 5 para sair.\n");
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1 :
            printf("Olá, digite o primeiro número:\n ");
            scanf("%f", &n1);
            printf("Olá, digite segundo número:\n ");
            scanf("%f", &n2);
            resultado = n1 + n2;
            printf("O resultado é: %.2f\n", resultado);
            break;
            case 2 :
            printf("Olá, digite o primeiro número:\n ");
            scanf("%f", &n1);
            printf("Olá, digite segundo número:\n ");
            scanf("%f", &n2);
            resultado = n1 - n2;
            printf("O resultado é: %.2f\n", resultado);
            break;
            case 3 :
            printf("Olá, digite o primeiro número:\n ");
            scanf("%f", &n1);
            printf("Olá, digite segundo número:\n ");
            scanf("%f", &n2);
            resultado = n1 * n2;
            printf("O resultado é: %.2f\n", resultado);
            break;
            case 4 :
            printf("Olá, digite o primeiro número:\n ");
            scanf("%f", &n1);
            printf("Olá, digite segundo número:\n ");
            scanf("%f", &n2);
            resultado = n1/n2;
            printf("O resultado é: %.2f\n", resultado);
            break;
            case 5 :
            printf ("Obrigado por usar a calculadora!\n");
            break;
            default :
            printf ("Opção invalida!\n");
            }  
        }while(opcao!=5);
    return 0;
}
