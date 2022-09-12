#include<stdio.h>
#include<string.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>

int number1,number2,number3,number4;
void max_number()
{
    scanf("%d",&number1);
    scanf("%d",&number2);
    scanf("%d",&number3);
    scanf("%d",&number4);
    int max = number1;
    if(number2>max)
    {
        max=number2;
    }
    if(number3>max)
    {
        max=number3;
    }
    if(number4>max)
    {
        max=number4;
    }
    printf("%d",max);
}
int main()
{
    max_number();
}

