#include <stdio.h>

int main() {
    int dia, mes, ano;
    long segundos;
    int dias_total;
    printf("Insira o dia: ");
    scanf("%d", &dia);
    printf("Insira o mes: ");
    scanf("%d", &mes);
    printf("Insira o ano: ");
    scanf("%d", &ano);

    dias_total = (ano - 1970) * 365 + (mes - 1) * 30 + (dia - 1);

    segundos = dias_total * 24 * 60 * 60;

    printf("Diferenca em segundos para 01/01/1970: %ld\n", segundos);

    return 0;
}
