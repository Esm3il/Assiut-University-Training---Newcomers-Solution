#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main(){
    queue<int> line;
    int t,a,b;
    cin >> t ;
    for(int i = 0 ; i<t ; i++){
        cin >> a >> b;
        if(a == 1){
            line.push(b);
        }else{
            if(!line.empty() && b == line.front()){
                cout << "Yes" << endl;
                line.pop();
            }else {
                cout << "No" << endl;
                line.pop();
            }
        }
    }
return 0;}