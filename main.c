#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
    printf("please enter a number of the month");
    scanf("%d", &x);
switch(x)
{
case 1:
    printf("jan");
    break;
case 2:
    printf("feb");
    break;
case 3:
    printf("march");
    break;
case 4:
    printf("april");
    break;
case 5:
    printf("may");
    break;
case 6:
    printf("june");
    break;
case 7:
    printf("july");
    break;
case 8:
    printf("august");
    break;
case 9:
    printf("september");
    break;
case 10:
    printf("october");
    break;
case 11:
    printf("nov");
    break;
case 12:
    printf("dec");
    break;
default:
    printf("N/A");
    break;
}
}
