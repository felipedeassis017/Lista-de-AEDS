#include <stdio.h>

int main() {
    int conta, c, d, u;
    int inverso, soma, digito_verificador;
    int pos1, pos2, pos3;
    int total;

    printf("Insira o numero da conta corrente (3 digitos): ");
    scanf("%d", &conta);
    
    c = conta / 100;
    d = (conta / 10) % 10;
    u = conta % 10;
    inverso = u * 100 + d * 10 + c;
    
    soma = conta + inverso;
    int soma_c = soma / 100;
    int soma_d = (soma / 10) % 10;
    int soma_u = soma % 10;
    pos1 = soma_c * 1;
    pos2 = soma_d * 2;
    pos3 = soma_u * 3;
    total = pos1 + pos2 + pos3;
    digito_verificador = total % 10;

 
    printf("O digito verificador da conta %d e %d\n", conta, digito_verificador);

    return 0;
}
