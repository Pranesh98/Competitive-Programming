#include<iostream>
using namespace std;
int main()
{
    int A, N, sum = 0;

    cin >> A >> N;    // Input.

    // 1 time input. But It has to be Positive and Not zero.
    while (N <= 0){
        cin >> N;
    }
    
    // After getting the final N value.
    for (int i = 0; i < N; i++){
        sum = sum + A + i;     // calculation.

    }
    cout << sum << endl;

    return 0;
}
