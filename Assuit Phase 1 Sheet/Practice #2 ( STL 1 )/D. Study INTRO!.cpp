#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n;cin >> n;
    string s;
    stack<string> tags;
    bool x = true;
    int y = 0;
    int z = 0;
    while(n--){
        cin >> s;
        if(s!="Header" && x){cout << "WA" << endl; return 0;}
        x = false;
        if(s=="Header"){y++;}
        if(y!=1){cout << "WA" << endl; return 0;}
        if(z != 0){cout << "WA" << endl; return 0;}
        else{
            if(tags.empty()){tags.push(s);}
            else {
                if(s=="EndHeader"){z++;}
                if (s == "End" + tags.top()) { tags.pop(); }
                else { tags.push(s); }
            }
        }
    }
    if(tags.empty()){cout << "ACC" << endl;}
    else{cout << "WA" << endl;}
return 0;}