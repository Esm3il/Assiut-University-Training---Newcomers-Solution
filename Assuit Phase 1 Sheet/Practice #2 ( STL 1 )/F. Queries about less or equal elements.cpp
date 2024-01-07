#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int asize,bsize;
    cin >> asize >> bsize;
    vector<ll> a(asize);
    for(int i=0 ; i<asize ; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<ll> b(bsize);
    for(int i=0 ; i<bsize ; i++){
        cin >> b[i];
        }
    for(int i=0 ; i<bsize ; i++) {
        int x = b[i];
        if (x < a[0]) cout << 0 << " ";
        else if (x >= a[asize - 1]) cout << asize << " ";
        else {
            auto pos = upper_bound(a.begin(), a.end(), x);
            cout << &pos << " ";
        }
    }
return 0;}