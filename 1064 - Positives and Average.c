#include<stdio.h>
int main()
{
    int i,n=0;
    float a,x=0;
    for(i=0; i<6; i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            x=x+a;
            n=n+1;
        }
    }
    printf("%d valores positivos\n%0.1f\n",n,x/n);
    return 0;
}
