#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, Q;
int overfilled = 0;
vector<int> nest;
vector<int> rev;
void move(int p, int h) {
  nest[rev[p]]--; // 原本在的地方要少一
  if (nest[rev[p]] == 1)
    overfilled--;
  nest[h]++; // 新加入的地方要加一
  if (nest[h] == 2)
    overfilled++;
  rev[p] = h;
}

int main() {
  cin >> N >> Q;
  nest.assign(N + 1, 1);
  vector<int> temp(N + 1);
  for (int i = 0; i < N; i++) {
    temp[i + 1] = (i + 1);
  }
  rev = temp;

  while (Q--) {
    int q;
    cin >> q;
    switch (q) {
    case 1:
      int P, H;
      cin >> P >> H;
      move(P, H);
      break;
    case 2:
      cout << overfilled << endl;
      break;
    default:
      break;
    }
  }
  return 0;
}
