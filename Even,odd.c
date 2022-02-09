#include<stdio.h>
int main()
{
    int even, odd, n;
    printf("Write a Number: ");
    scanf("%d",&n);

    if (n%2==0){
        printf("It is an Even Number.\n");
    }
    else {
        printf("It is an Odd Number.\n");
    }
    return 0;
}
