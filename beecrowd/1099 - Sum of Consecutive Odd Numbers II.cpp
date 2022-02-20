#include<iostream>
using namespace std;
int main()
{
    int n, x, y;
    // Input Test Case.
    cin >> n;

    for (int i=0; i<n; i++){
        
        int sum = 0, c=0;
        // Input x, y.
        cin >> x >> y;

        if (x < y){
          
          x++;   // Upper value than x.
          for (int i = x; i < y; i++){

              if (i % 2 != 0){
                  sum = sum + i;
             }
          }
        }
        else {
          y++;   // Upper value than y.
          for (int i = y; i < x; i++){

              if (i % 2 != 0){
                  sum = sum + i;
            }
          }
        }
        // Output:
        cout << sum << endl;
    }
    
    return 0;
}
