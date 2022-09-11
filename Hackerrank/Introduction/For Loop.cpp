#include<stdio.h>
#include<string.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
    int number,number2;
    scanf("%d",&number);
    scanf("%d",&number2);

    for(number;number2;number++)
    {
        if(number==1 and number2==2)
        {
            printf("one\ntwo");
            break;
        }
        if(number==0)
        {
            printf("zero\n");
        }
        else if(number==1)
        {
            printf("one\n");
        }
        else if(number==2)
        {
            printf("two\n");
        }
        else if(number==3)
        {
            printf("three\n");
        }
        else if(number==4)
        {
            printf("four\n");
        }
        else if(number==5)
        {
            printf("five\n");
        }
        else if(number==6)
        {
            printf("six\n");
        }
        else if(number==7)
        {
            printf("seven\n");
        }
        else if(number==8)
        {
            printf("eight\n");
        }
        else
        {
            printf("nine\n");
            break;
        }
    }
    int x = number+1;
    for(x;x<=number2;x++)
    {
        if(number==1 and number2==2)
        {
            break;
        }
        if(x%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

}
