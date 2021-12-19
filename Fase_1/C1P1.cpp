#include<bits/stdc++.h>
#define LIM_INF -10e6
using namespace std;

int solve() {
  int N, i, j, dato, maxi, temp = 0;
  maxi = LIM_INF;
  cin >> N;

  for(i = 0 ; i < N ; i++) {
    cin >> dato;
    temp += dato;

    if(temp > maxi) { maxi = temp; }
    if(temp < 0) { temp = 0; }
  }

  return maxi;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N, i;
  cin >> N;

  for(i = 1 ; i <= N ; i++) {
    cout << "Case #" << i << ": " << solve() << "\n";
  }

  return 0;
}