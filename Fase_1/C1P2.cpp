#include<bits/stdc++.h>
using namespace std;

auto solve() -> bool {
  bool ans = false;
  string target = "facebook";
  int pos = 0;
  
  string cadena;
  cin >> cadena;

  for(int i = 0 ; i < cadena.length() ; i++) {
    if(pos == target.length()) { ans = true; break; } 
    else if(target[pos] == cadena[i]) { pos++; }
  }

  if(pos == target.length()) { ans = true; }

  return ans;
}

auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  for(int i = 1 ; i <= N ; i++) {
    cout << "Case #" << i << ": " << (solve() ? "YES" : "NO") << '\n';
  }

  return 0;
}