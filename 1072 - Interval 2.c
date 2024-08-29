#include<stdio.h>
int main ()
{
 int a,n,i,x=0,y=0;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
  scanf("%d",&a);
  if(10<=a&&a<=20)
  {x=x+1;}
  else
  {y=y+1;}}
  printf("%d in\n",x);
  printf("%d out\n",y);
  return 0;
  }
