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
    printf("Insira o 1o valor: ");
    scanf("%f",&v1);
    fflush(stdin);

    printf("Selecione a operacao(+,-,*,/): ");
    op=getchar();

    printf("Insira o 2o valor: ");
    scanf("%f",&v2);

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
    return(v1+v2);
}

float sub(float v1, float v2)
{
    return(v1-v2);
}

float multi(float v1, float v2)
{
    return(v1*v2);
}

float divi(float v1, float v2)
{
    return(v1/v2);
}
