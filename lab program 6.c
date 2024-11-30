#include<stdio.h> 
#include<string.h> 
int main( ) 
{
    int a[10],key; 
int n,i,low,high,mid,found=0; 
printf("enter the number of numbers to read\n"); 
scanf("%d",&n);                          
printf("enter the numbers in ascending order\n"); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("enter the number to search\n"); 
scanf("%d",&key); 
low=0; 
high=n-1; 
while(low<=high ) 
{ 
mid=(low+high)/2; 
if(a[mid] == key) 
{ 
    found=1;  
break;

} 

else if(a[mid]<key)

low=mid+1; 
else

 {
high=mid-1; 
}

high=mid-1; 
} 
if(found == 1) 

printf("\n number found at position:%d",mid+1); 

else 

printf("\n number not found"); 
}