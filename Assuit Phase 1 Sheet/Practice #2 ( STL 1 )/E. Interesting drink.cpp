#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n; cin >> n;
    vector<int> x(n);
    for(int i=0 ; i<n ; i++){
        cin >> x[i];
    }
    int q; cin>>q;
    sort(x.begin(),x.end());
    while(q--){
        int y;cin>>y;
        if(y >= x[n-1]){cout << n << endl;}
        else if(y < x[0]){cout << 0 << endl;}
        else{
            auto res = upper_bound(x.begin(),x.end(),y);
            int pr = res - x.begin();
            cout << pr << endl;
        }
    }
return 0;}