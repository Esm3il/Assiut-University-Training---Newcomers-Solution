#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int collatz(int n) {
    if (n == 1) {
        return 1;
    } else if (n % 2 == 0) {
        n = n / 2;
        return 1 + collatz(n);
    } else {
        n = (n * 3) + 1;
        return 1 + collatz(n);
    }
}
int main(){
    int n,steps=0;
    cin >> n;
    steps = collatz(n);
    cout << steps << endl;
return 0;}