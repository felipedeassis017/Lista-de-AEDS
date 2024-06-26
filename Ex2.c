int main()
{
    float salario, salariomin,n;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    salariomin= 1412;
    n = (salario/salariomin);
    printf("%.2f", n);
}