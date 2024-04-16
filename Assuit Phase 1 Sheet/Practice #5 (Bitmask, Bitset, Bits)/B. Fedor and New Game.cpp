#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    unsigned int n,m,k;cin >> n >> m >> k;
    int players[m+1];
    int fedro,counter=0;
    for(int i=0; i<m+1 ; i++){
        cin >> players[i];
        if(i==m)fedro = players[i];
    }
    for(int i=0 ; i<m ; i++){
        bitset<32> x(players[i]);
        bitset<32> y(fedro);
        int z = (x^y).count();
        if(k>=z)counter++;
    }
    cout << counter<< endl;
return 0;}