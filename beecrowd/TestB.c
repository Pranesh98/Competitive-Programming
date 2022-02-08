
#include<stdio.h>
int main()
{
    int n, t, a[n], max, min, diff;

    // Test Case.
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        // Array Index;
        scanf("%d", &n);

        // Input of Array elements.
        for (int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }

        // Maximum value in Array.
        max = a[0];
        for (int k = 0; k < n; k++){
            if (max <= a[k]){
                max = a[k];
            }
        }

        // Minimum value in Array.
        min = a[0];
        for (int m = 0; m < n; m++){
            if (min >= a[m]){
                min = a[m];
            }
        }

        diff = max - min;

        printf("%d\n", diff);
    }


    return 0;
}



/*

// Max and min.
        printf("Max : %d \nMin : %d\n", max, min);

// Showing output.
        for (int g = 0; g < n; g++){
            printf("%d", a[g]);
        }
*/
