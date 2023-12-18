#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero = 1;
    unsigned long long fatorial = 1;

    while (numero != 0) {
        printf("Informe um número inteiro positivo ou 0 para encerrar: \n");
        if (scanf("%d", &numero) != 1) {
            printf("Caractere inválido. Por favor, digite um número.\n");
            while (getchar() != '\n'); // Limpar o buffer de entrada
        }
        else {
            if (numero > 0) {
                for (int j = 1; j <= numero; j++) {
                    fatorial = fatorial * j;
                }
                printf("%d! = %llu\n", numero, fatorial);
                fatorial = 1;
            }
            else {
                if (numero < 0)
                    printf("NÃO DIGITE NÚMEROS NEGATIVOS\n");
            }
        }
    }

    return 0;
}
