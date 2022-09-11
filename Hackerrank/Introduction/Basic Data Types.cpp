#include<stdio.h>
#include<string.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
    char string[1000];
    char splited;
    int number = 0;
    scanf("%[^\n]%*c", string);
    char *token = strtok(string, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
