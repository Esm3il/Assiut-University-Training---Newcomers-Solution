#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int fondo(int arr[], int n,int size , int i=0) {
    int low =0 ,high =size - 1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == n){
            return mid + 1;
        }else if(arr[mid] < n){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0 ; i<size ; i++){
        cin >> arr[i];
    }
    int q,n;
    cin >> q;
    for(int i=0 ; i<q ; i++){
        cin >> n;
        int ans = fondo(arr , n , size );
        cout << ans << endl;
    }
return 0;}