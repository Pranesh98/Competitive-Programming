/*
    Programmer : "Pranesh Chowdhury"
    Link : https://codeforces.com/problemset/problem/4/A
*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    
    if(a <= 2 || a%2 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    
    return 0;
}
