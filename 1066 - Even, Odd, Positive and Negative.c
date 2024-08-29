#include<stdio.h>
int main()
{
    int a,i,n=0,x=0,y=0,z=0;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            n=n+1;
        }
        if(a%2!=0)
        {
            x=x+1;
        }
        if(0<a)
        {
            y=y+1;
        }
        if(0>a)
        {
            z=z+1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",n,x,y,z);
    return 0;
}
