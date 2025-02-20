#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n, p, q;
  cin >> n >> p >> q;
  int Min = INT_MAX;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    Min = min(x, Min);
  }

  if (q + Min < p)
    cout << q + Min;
  else
    cout << p;
  return 0;
}
