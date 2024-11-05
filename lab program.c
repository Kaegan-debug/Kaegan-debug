// Write a program to make a calculator

#include<stdio.h>
#include<stdlib.h>
int main()

{
    int a,b,res;
    char op;
    
    printf("/n Enter the number to calculate: ");
    scanf("%d %c %d" ,&a,&op,&b);
    switch(op)
    {
        case '+' : res=a+b;
            break;
        case '-' : res=a-b;
            break;
        case '*' : res=a*b;
            break;
        case '/' : if(b!=0)
            res=a/b;
            else
        {
            printf("Division by zero is not posible");
            exit(0);
        }
        break;
        case '%': res=a%b;
            break;
        default: printf("Illegal operator");
        exit(0);
    }
    printf("\n The answer is:  %d %c %d=%d" ,a,op,b,res);
    return 0;
}