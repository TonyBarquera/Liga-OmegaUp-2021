
//
#include<bits/stdc++.h>
using namespace std;

auto solve() -> bool {
  double Nx, Ny;
  double Ax, Ay;
  double Bx, By;
  double Cx, Cy;

  cin >> Nx >> Ny;
  cin >> Ax >> Ay;
  cin >> Bx >> By;
  cin >> Cx >> Cy;

  double area = abs(0.5 * ((Ax * By - Ay * Bx) + (Bx * Cy - By * Cx) + (Cx * Ay - Cy * Ax)));
  double area1 = abs(0.5 * ((Ax * By - Ay * Bx) + (Bx * Ny - By * Nx) + (Nx * Ay - Ny * Ax)));
  double area2 = abs(0.5 * ((Ax * Ny - Ay * Nx) + (Nx * Cy - Ny * Cx) + (Cx * Ay - Cy * Ax)));
  double area3 = abs(0.5 * ((Nx * By - Ny * Bx) + (Bx * Cy - By * Cx) + (Cx * Ny - Cy * Nx)));

  return area == area1 + area2 + area3;
}

auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  for(int i = 1 ; i <= N ; i++) {
    cout << "Case #" << i << ": " << (solve() ? "IN" : "OUT") << '\n';
  }  

  return 0;
}