#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(0<=x&&x<=2000)
    {
        printf("Isento\n");
    }
    else if(2000<x&&x<=3000)
    {
        printf("R$ %0.2f\n",(x-2000)*0.08);
    }
    else if( 3000<x&&x<=4500)
    {
        printf("R$ %0.2f\n",(x-3000)*0.18+80);
    }
    else if(4500<x)
    {
        printf("R$ %0.2f\n",(x-4500)*0.28+270+80);
    }
    return 0;
}
