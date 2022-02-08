// Programmer : "Pranesh Chowdhury".
// Link: https://codeforces.com/problemset/problem/266/A

#include<stdio.h>
int main()
{
    int n, count=0;
    char ara[1000];

    scanf("%d", &n);      // Total Test Case.
    scanf("%s", &ara);    // String.

    for (int i=0; i<n; i++){

        // Comparing (previous index = next index).
        if (ara[i] == ara[i+1]){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
