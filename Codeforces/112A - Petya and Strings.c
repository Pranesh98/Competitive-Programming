/*  
    Link : https://codeforces.com/problemset/problem/112/A
    Hint:
    The English Alphabet consists of 26 letters:
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.
    
    Used Library Functions:
    tolower(a[i]) = Making every letter into lower charater.
    strlen(a) = Array length
    strcmp(a, b) = Comparing two strings.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000], b[1000];
    int same = 0;

    // Input: 2 String.
    scanf("%s", &a);
    scanf("%s", &b);

    int l = strlen(a);   // String length.
    
    // Turing 2 strings into lower case letter.
    for (int i = 0; i < l; i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    
    // strcmp is use for comparing 2 strings. 
    if (strcmp(a, b) == 0){
        printf("0");
    }

    else {
        // a & b strings which element is greater or less.
        for (int i = 0; i < l; i++){

            // Checking Greater or less.
            if (a[i] > b[i]){
                printf("1");
                break;      // After one confirm. The loop will break.
            }
            if (a[i] < b[i]) {
                printf("-1");
                break;
            }
        }
    }

    return 0;
}
