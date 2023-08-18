#include<stdio.h>
#include<stdlib.h>

void ad(float, float);
void sub(float, float);
void multi(float, float);
void divi(float, float);

int main()
{
    float v1,v2;
    char op,resp;

    printf("Calculadora iniciada!\n\n");

    do
    {
        printf("Insira o 1o valor: ");
        scanf("%f",&v1);
        fflush(stdin);

        printf("Selecione a operacao(+,-,*,/): ");
        op=getchar();

        printf("Insira o 2o valor: ");
        scanf("%f",&v2);
        fflush(stdin);

        switch(op)
        {
            case '+': ad(v1,v2); break;
            case '-': sub(v1,v2); break;
            case '*': multi(v1,v2); break;
            case '/': divi(v1,v2); break;
        }

        printf("Digite S para fazer mais uma operacao e N para finalizar o sistema: ");
        resp=getchar();
        
    }while(resp!='N');

    printf("Calculadora encerrada.");
    return 0;
}

void ad(float v1, float v2)
{
    printf("Resultado: %f\n",v1+v2);
}

void sub(float v1, float v2)
{
    printf("Resultado: %f\n",v1-v2);
}

void multi(float v1, float v2)
{
    printf("Resultado: %f\n",v1*v2);
}

void divi(float v1, float v2)
{
    if(v2==0)
        printf("Impossível dividir por 0!\n");
    else
        printf("Resultado: %f\n",v1/v2);
}
