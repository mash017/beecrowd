#include<stdio.h>
int main()
{
    float x,a,b,c;
    scanf("%f",&x);
    if(0<=x&&x<=400.00)
    {
        c=0.15;
        b=x*c;
        a=x+b;
        {
            printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 15 %%\n",a,b);
        }
    }
    else if(400.01<=x&&x<=800.00)
    {
        c=0.12;
        b=x*c;
        a=x+b;
        {
            printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 12 %%\n",a,b);
        }
    }
    else if(800.01<=x&&x<=1200.00)
    {
        c=0.1;
        b=x*c;
        a=x+b;
        {
            printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 10 %%\n",a,b);
        }
    }
    else if(1200.01<=x&&x<=2000.00)
    {
        c=0.07;
        b=x*c;
        a=x+b;
        {
            printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 7 %%\n",a,b);
        }
    }
    else if(x>2000.00)
    {
        c=0.04;
        b=x*c;
        a=x+b;
        {
            printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 4 %%\n",a,b);
        }
    }
    return 0;
}
