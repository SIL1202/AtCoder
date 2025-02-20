#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> P(n + 1);
  vector<int> Q(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> P[i];
  }
  vector<int> person(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> Q[i];
    person[Q[i]] = i; // person [wearing Q[i]] is i
  }

  for (int i = 1; i <= n; i++) {
    cout << Q[P[person[i]]] << " ";
  }

  return 0;
}

// person i wearing number Q[i], staring at P[i].
// person 3 wearing number Q[3], staring at P[3]
// cout << Q[P[3]];
//
// for (int i = 1; i < n; i++) {
//   cout << mp.first
// }
//
// i = 1
// for(int i=0; i<n; i++){
//  if i+1 == Q[i] (i=3)
//
// }
//
