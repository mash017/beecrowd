#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&x,&b,&y);
    if(a==b&&x==y)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(b==a&&x>y)
    {
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-x+y);
    }
    else if(b>a&&x>y)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b-a-1,60-x+y);
    }
    else if(b>=a&&y>=x)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b-a,y-x);
    }
    else if(a>b&&x==y)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+b,y-x);
    }
    else if (a>b&&x>y)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+b-1,60-x+y);
    }
    return 0;
}
