#include<stdio.h>
int main()
{
    int a, b, c;
    int n, count=0;
 
    // n First Input
    scanf("%d", &n);
 
    for (int i=1; i<=n; i++){
        scanf("%d%d%d",&a,&b,&c);
        
    // If 2 person can do. Then they write.
        if (a==1 && b==1 || b==1 && c==1 || a==1 && c==1){
           count++;
        }
    }
 
    // Output
    printf("%d",count);
 
    return 0;
}
