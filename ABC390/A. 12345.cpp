#include <iostream>

using namespace std;

int main() {
  int a[5];
  int count = 0;
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        count++;
      }
    }
  }
  if (count == 0)
    cout << "No";
  else if (count == 1)
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
