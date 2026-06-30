//Link problem : https://marisaoj.com/problem/12
#include <bits/stdc++.h>
using namespace std;
#define fixenter cin.ignore(numeric_limits<streamsize>::max(),'\n')
using ll = long long;
using ull = unsigned long long;
using ldb = long double;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull a; cin>>a;
    cout<<(ll)sqrt(a);
    return 0;
}