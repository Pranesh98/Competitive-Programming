#include<stdio.h>
int main()
{
    int n, k, ara[1000], count=0;
    scanf("%d %d", &n, &k);
 
    // Set the Array value.
    for (int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
 
    for (int j=0; j<n; j++){
 
        // Array 'k'th term >= ara[i].
        if (ara[j] > 0 && ara[j] >= ara[k-1]){
            count++;
        }
    }
 
    printf("%d", count);
 
    return 0;
}
