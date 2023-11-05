#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)


//Used to swap elements
void Swapn(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;}


//Quick Sort O(log n) {You have to send Array, 0 as first element of array, High as last element of array}
    //find partition Point
    int Partition(int arr[] , int low , int high){
        int pivot = arr[high];
        int i = low - 1;

        for(int j=low ; j<high ; j++){
            if(arr[j] < pivot){
                i++;
                Swapn(&arr[i] , &arr[j]);
            }}
            Swapn(&arr[i+1] , &arr[high]);
            return i+1;}


    void QuickSort (int arr[] , int low , int high){
        if(low < high){
            int pi = Partition(arr,low,high);
            QuickSort(arr,low,pi-1);
            QuickSort(arr,pi+1,high);}}


    bool is_even(int num){
        if(num%2 == 0) return true;
        else return false;
    }


    bool is_prime(int num){
        if(is_even(num) == true) return false;
        else if(num <= 1) return false;
        else{
            for(int i=3 ; i<= sqrt(num) ; i++){
                if(num%i == 0) return false;
            }
        return true;
        }
    }

    bool Palindromes_checker(string s){
        int sozo = s.size()/2;
        for(int i=0,j=s.size()-1 ; i<sozo ; i++,j--){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }




/*
Functions I have
================
1.Swapn(First Integer, Second Integer) Swapn For Swap_Number
2.QuickSort(Array , Start:(Standard = 0) , End:(Standard = Length Array))
3.is_even(number)
4.is_prime(number)
5.Palindromes_checker(string)
*/


//Functions UP
//Solution Here
int main(){
    int i,n,m,a,b;
    ll sum1=0,sum2=0;
    cin >> n >> m ;
    for(i=0 ; i<n ; i++){
        cin >> a ;
        sum1 += a;
    }
    for(i=0 ; i<m ; i++){
        cin >> b ;
        sum2 += b;
    }
    if(sum1 == sum2){
        cout << "Yes" << endl;
    }else{cout << "No" << endl;}
return 0;}
