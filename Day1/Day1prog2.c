/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
	int a,b;
	int sum,diff,product,quotient;
	printf("User enter two value");
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	sum=a+b;
	diff=a-b;
	product=a*b;
	quotient=a/b;
	printf("sum=%d,diff=%d,product=%d,quotient=%d",sum,diff,product,quotient);
	return 0;
}

atul@atul-G15-1111:~/Desktop/c-language$ ./day1prog2.out
User enter two value48 12
a=48 b=12
sum=60,diff=36,product=576,quotient=4
