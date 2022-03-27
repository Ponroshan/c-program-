#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\nafter swapping the value of a is %d and b is %d",a,b);
return 0;
}
