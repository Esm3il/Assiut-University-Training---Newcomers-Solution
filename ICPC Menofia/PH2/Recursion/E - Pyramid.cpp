#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
string pyramide(int n, int s = 0) {
    if(n == 1){
        return string(s , ' ') + '*' + '\n';
    }
    return pyramide(n-1 ,s+1) + string(s , ' ') + string(n*2 - 1 , '*') + '\n';
}
int main(){
    int n;
    cin >> n;
    cout << pyramide(n) << endl;
return 0;}