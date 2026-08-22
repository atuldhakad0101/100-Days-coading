/* Q24: Write a program to calculate electricity bill based on units consumed with these rates:*/

#include<stdio.h>
int main() {
    int units;
    float bill;
    printf("enter the units of electricity consumed:");
    scanf("%d",&units);
    if(units<=100)
    { 
        bill=units*5;
        printf("the electricity bill is %f",bill);
        
    }
    else if(units<=200)
    {
        bill=100*5+(units-100)*7;
        printf("the electricity bill is %f",bill);
    }
    else if(units<=300)
    {
        bill=100*5+100*7+(units-200)*10;
        printf("the electricity bill is %f",bill);
    }
    else
    {
        bill=100*5+100*7+100*10+(units-300)*12;
        printf("the electricity bill is %f",bill);
    }
    return 0;
}
