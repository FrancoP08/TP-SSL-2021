int mayor(int, int);

int main(void)
{
    // Funcion
    int n1, n2, max;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &n1, &n2);
    max = mayor(n1, n2);
    printf("El mayor entre %d y %d es %d\n", n1, n2, max);
    return 0;
}
int mayor(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}