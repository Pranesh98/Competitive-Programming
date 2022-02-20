#include<iostream>
using namespace std;
int main()
{
    int x, y;

    for (int i = 0; i < 100000; i++){
      cin >> x;
      cin >> y;
      if (x > 0 && y > 0){
          cout << "primeiro" << endl;
      }
      else if (x > 0 && y < 0){
          cout << "quarto" << endl;
      }
      else if (x < 0 && y < 0){
          cout << "terceiro" << endl;
      }
      else if (x < 0 && y > 0){
          cout << "segundo" << endl;
      }
      else {
          break;
      }
    }
    return 0;
}
