int main()
{
    int c,d,u,aux,n;
    printf("Insira um numero de 3 digitos: \n");
     do {
        scanf("%d", &n);
    } while (n <= 99 || n >= 1000);
    c = n/100;
    d = (n%100)/10;
    u = (n%100)%10;
    aux = u*100 + d*10 + c;
    printf("\n");
    printf("O numero inicial e %d, e o numero invertido e %d", n, aux); 
}