#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z,v,t,k,l,m,n;
    scanf("Dia %d\n",&a);
    scanf("%d : %d : %d\n",&b,&c,&d);
    scanf("Dia %d",&x);
    scanf("%d : %d : %d",&y,&z,&v);
    t=((x*86400)+(y*3600)+(z*60)+v)-((a*86400)+(b*3600)+(c*60)+d);
    k=t/86400;
    l=(t%86400)/3600;
    m=((t%86400)%3600)/60;
    n=((t%86400)%3600)%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",k,l,m,n);
    return 0;
}
