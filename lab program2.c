//Write a program to find the quadratic equation 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()

{
    float a,b,c,d,root1,root2,real,imag;
    printf("Enter the three co-efficents: \n");
    scanf("%f %f %f", &a,&b,&c);
    if(a==0)
    {
        printf("Invalid coeffcients");
        exit(0);
    }
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        root1=(-b+(sqrt(d)))/(2.0*a);
        root2=(-b-(sqrt(d)))/(2.0*a);
        printf("The roots are real and distinct	\n");
        printf("root1=%f\n root2=%f\n",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2.0*a);
        printf("the roots are real and equal...\n");
        printf("root1=%f\n root2=%f\n",root1,root2);
    }
    else
    {
        real=-b/(2.0*a);
        imag=sqrt(fabs(d))/(2.0*a);
        printf("the roots are complex and imagnary\n");
        printf("root1=%f+i%f\n root2=%f-i%f",real,imag,real,imag);
        
    }
    return 0;
}