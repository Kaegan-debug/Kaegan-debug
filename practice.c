#include<stdio.h>
#define PI 3.142
int main ()
{
  int i,degree;
  float x,sum=0,term,nume,deno;
  printf("degree? ");
  scanf("%d",&degree);
  x=degree*(PI/180);
  nume=x;
  deno=1;
  i=2;
  do
  {
    term=nume/deno;
    nume=nume*x*x;
    deno=deno*i*(i+1);
    sum=sum+term;
    i=i+2;
  }
  while(fabs(term)>=0.00001);
  printf("the sine of %d is %f using the library funtion",degree,sin(x));
  
  return 0;
}