#include<stdio.h>
#include<string.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
    int a,b,c;
    int result = 0;
    scanf("%d %d %d",&a,&b,&c);
    result += a;
    result += b;
    result += c;
    printf("%d",result);
}
