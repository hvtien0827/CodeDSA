//Link problem : https://marisaoj.com/problem/11
#include <bits/stdc++.h>
using namespace std;
#define fixenter cin.ignore(numeric_limits<streamsize>::max(),'\n')
using ll = long long;
using ull = unsigned long long;
using ldb = long double;

bool square(ull a){
    ll y=sqrt(a);
    return y*y==a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull a; cin >> a;
    cout<<(square(a) ? "YES" : "NO");
    return 0;
}