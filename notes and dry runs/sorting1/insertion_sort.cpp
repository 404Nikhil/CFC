/*
INSERTION SORT
*/

// takes an element and places it in its correct position
/*
for(int i = 0; i >= n-1; i++){
 j=i;
 while(j>- && a[j-1]> a[j]){
  swap(a[j-1],a[j])
 }
}
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void insertion_sort(int arr[], int n){
for(int i = 0; i <= n-1; i++){
 int didSwap = 0;
 int j=i;
 while(j>0 && arr[j-1]> arr[j]){
  swap(arr[j-1],arr[j]);               // n**2 best case, average case
  j--;                                // O(n) best case no swaps
 }
 didSwap = 1;
 if(didSwap==0){
  break;
 }
}
}
int main(){
 cin.tie(0);cin.sync_with_stdio(0);
 cout.tie(0);cout.sync_with_stdio(0);
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)cin>> arr[i];
 insertion_sort(arr, n);
 for(int i=0; i<n; i++){
  cout << arr[n] << '\n';
 }
 return 0;
}