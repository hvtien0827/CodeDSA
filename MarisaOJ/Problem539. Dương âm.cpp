// Link problem: https://marisaoj.com/problem/539
#include <bits/stdc++.h>
using namespace std;
#define fixenter cin.ignore(numeric_limits<streamsize>::max(),'\n')
using ll = long long;
using ull = unsigned long long;
using ldb = long double;

void slove(vector<int> a){
    vector<int> pos,neg;
    for (int x : a){
        if(x>0) pos.push_back(x);
        if(x<0) neg.push_back(x); 
    }
    reverse(pos.begin(),pos.end());
    reverse(neg.begin(),neg.end());
    while(pos.size()!=0 || neg.size()!=0){
        if(neg.size()!=0){
        cout<<neg[neg.size()-1]<<" ";
        neg.pop_back();
        }
        if(pos.size()!=0){
        cout<<pos[pos.size()-1]<<" ";
        pos.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin>>x;
    slove(a);
    return 0;
}