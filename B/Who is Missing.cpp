#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> input(m);
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    input.push_back(a);
  }
  cout << n - m << endl;
  for (int i = 1; i <= n; i++) {
    auto found = find(input.begin(), input.end(), i);
    if (found == input.end()) {
      cout << i << " ";
    }
  }
  return 0;
}
