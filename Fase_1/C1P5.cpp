#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  vector<ll> impares;
  ll N, i, dato, ans, aux;
  ans = aux = 0;
  cin >> N;

  for(i = 0 ; i < N ; i++) {
    cin >> dato;
  
    if(dato % 2 == 0) { ans += dato; } 
    else { impares.push_back(dato); }
  }

  sort(begin(impares), end(impares));

  if(impares.size() % 2 == 0) { aux = 1; }
  for(i = aux ; i < impares.size() ; i++) { ans += impares[i]; }

  cout << (ans % 2 == 0 ? 0 : ans) << '\n';
  return 0;
}