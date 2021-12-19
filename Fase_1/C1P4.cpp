#include<bits/stdc++.h>
#define MAX 155
using namespace std;

short mat[MAX][MAX];
queue<pair<int, int>> casillas;
int N, M;

auto revisa(int x, int y, int ans) -> int {
  int i, j, a, b;
  mat[x][y] = 0;

  for(i = x - 1 ; i <= x + 1 ; i++) {
    for(j = y - 1 ; j <= y + 1 ; j++) {
      if(i >= 0 && i < N && j >= 0 && j < M && (i != x || j != y)) {
        if(mat[i][j] == 1) {
          mat[i][j] = 0;
          ans++;
          casillas.push({i, j});
        }
      }
    } 
  }
  
  for(i = 0 ; i < casillas.size() ; i++) {
    auto value = casillas.front();
    a = value.first;
    b = value.second;
    casillas.pop();
    ans = revisa(a, b, ans);
  }

  return ans;
}

auto solve() -> int {
  int ans, aux, cont, i, j;
  cont = 0;
  ans = 0;

  cin >> N >> M;

  for(i = 0 ; i < N ; i++) {
    for(j = 0 ; j < M ; j++) {
      cin >> mat[i][j];
    }
  }

  for(i = 0 ; i < N ; i++) {
    for(j = 0 ; j < M ; j++) {
      if(mat[i][j] == 1) {
        aux = revisa(i, j, 1);
        if(aux > ans) {
          ans = aux;
        }
      }
    }
  }  

  return ans;
}


auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  for(int i = 1 ; i <= N ; i++) {
    cout << "Case #" << i << ": " << solve() << '\n';
  }  

  return 0;
}