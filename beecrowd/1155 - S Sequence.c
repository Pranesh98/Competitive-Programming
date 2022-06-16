#include<stdio.h>
int main()
{
    double sum=0;
    sum = solve(sum);    // solve() function call.

    return 0;
}
void solve (double sum){
    for (double i=1; i<=100; i++){
        sum = sum + (1/i);
    }
    printf("%.2lf\n", sum);
}
