#include <stdio.h>
#include <stdlib.h>
 
// Driver code
int main()
{
    char ch;
    double a, b;
    while (1) {
        printf("Digite um operador (+, -, *, /), " "se quiser sair pressione x: ");
        scanf(" %c", &ch);
 
        // Sair
        if (ch == 'x')
            exit(0);
        printf("Insira dois primeiro e segundo operandos: ");
        scanf("%lf %lf", &a, &b);
 
        // Usando switch case vamos diferenciar
        // operações baseadas em diferentes operadores
        switch (ch) {
 
        // Para adição
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;
 
        // Para subtração
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;
 
        // Para multiplicação
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;
 
        // Para divisão
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
 
        // Se o operador não corresponder a nenhuma constante case
        default:
            printf("Erro! por favor escreva um operador válido\n");
        }
 
        printf("\n");
    }
}