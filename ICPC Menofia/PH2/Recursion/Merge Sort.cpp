#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
void merge(int left_arr[] , int right_arr[] , int arr[] , int length){
    int left_size = length/2;
    int right_size = length - left_size;
    int i=0,l=0,r=0; //indices
    while(l<left_size && r<right_size){
        if(left_arr[l] < right_arr[r]){
            arr[i] = left_arr[l];
            i++;
            l++;
        }else{
            arr[i] = right_arr[r];
            i++;
            r++;
        }
    }
    while (l<left_size){
        arr[i]=left_arr[l];
        i++;
        l++;
    }
    while (r<right_size){
        arr[i] = right_arr[r];
        i++;
        r++;
    }
}
void mergesort(int arr[],int length){
    if(length <= 1)return;
    int middle = length/2;
    int left_arr[middle];
    int right_arr[length - middle];
    int i = 0; // left array
    int j = 0; // right array
    for (; i<length ; i++){
        if(i<middle){
            left_arr[i] = arr[i];
        }else{
            right_arr[j] = arr[i];
            j++;
        }
    }
    mergesort(left_arr , middle);
    mergesort(right_arr , length - middle);
    merge(left_arr , right_arr , arr , length);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }
    int length = sizeof(arr)/sizeof(int );
    mergesort(arr,length);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
return 0;}