/*
Selection sorting
select minimum and swap = first step
then do the same with n-1 sparing first coz it's sorted and continue 
so it takes n-1 steps to get minimum and swap
*/


/*
for(int i=0; i<= n-2; i++){
 min = i
 for(int j=i; j<= n-1; j++){
  if(arr[j] < arr[min])
  min = j;
 }
 swap(arr[min],arr[i])
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void selection_sort(int arr[], int n){
for(int i=0; i<= n-2; i++){
 int min = i;                      // time complexity 0(n**2) average time complexity
 for(int j=i; j<= n-1; j++){
  if(arr[j] < arr[min]){
  min = j;
   }
 }
   int temp = arr[min];
   arr[min] = arr[i];                   // swap code
   arr[i] = temp;                  // or swap(arr[min],arr[i]);
    }
}
int main(){
 cin.tie(0);cin.sync_with_stdio(0);
 cout.tie(0);cout.sync_with_stdio(0);
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)cin>> arr[i];
 selection_sort(arr, n);
 for(int i=0; i<n; i++){
  cout << arr[n] << '\n';
 }
 return 0;
}