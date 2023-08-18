#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float ad(float, float);
float sub(float, float);
float multi(float, float);
float divi(float, float);

int main()
{
    setlocale(LC_ALL,"portuguese");
    float v1,v2,res;
    char op;

    printf("Calculadora iniciada!\n\n");
    printf("Insira o 1º valor: ");

    printf("Selecione a operação(+,-,*,/): ");
    op=getchar();

    printf("Insira o 2º valor: ");

    switch(op)
    {
        case '+': res = ad(v1,v2); break;
        case '-': res = sub(v1,v2); break;
        case '*': res = multi(v1,v2); break;
        case '/': res = divi(v1,v2); break;
    }

    printf("Resultado: %f",res);

    return 0;
}

float ad(float v1, float v2)
{
    printf("Somando\n");
}

float sub(float v1, float v2)
{
    printf("Subtraindo\n");
}

float multi(float v1, float v2)
{
    printf("Multiplicando\n");
}

float divi(float v1, float v2)
{
    printf("Dividindo\n");
}
