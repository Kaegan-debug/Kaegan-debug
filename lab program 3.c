/*Design and Develop a C program for an electricity board to calculate charges based on electricity usage.
The program should prompt the user to input their name and the number of units consumed.*/ 

#include<stdio.h> 
int main( )
{
	char name[20]; 
	int units;
	float rupees=0;
	printf("\n enter the name of the user :");
             gets(name);     
     	printf("\n enter number of units consumed :"); 
	scanf("%d",&units);
if(units<=200)
	rupees=units*0.80+100;  
else if(units<=300 && units>200)
	     rupees=200*0.80+(units-200)*0.90+100;
else
        rupees=200*0.80+100*0.90+(units-300)*1.00+100; 
if(rupees>400)
	rupees=rupees+0.15*rupees;
printf("%s has to pay rupees %f",name,rupees);
}
