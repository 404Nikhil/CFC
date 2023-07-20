/*
BUBBLE SORT
*/
// Push the max to the last by adjacent swapping

/*
0 - n-1 , 0 - n-2 , 0 - n-3 , 0 - 1 

value of i from n-1 to 1

for(int i = n-1; i >= 1; i++){
 for(int j=0; j<=i-1; j++){
  if(a[j] > a[j+1]){
   swap;
  } 
 }
}
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bubble_sort(int arr[], int n){
for(int i = n-1; i >= 1; i++){
 int didSwap = 0;
 for(int j=0; j<=i-1; j++){           // n**2 again --> worst complexity
  if(arr[j] > arr[j+1]){              
   int temp = arr[j+1];
   arr[j+1]= arr[j];   // swap code
   arr[j] = temp;
   didSwap = 1;
  } 
 }
 if(didSwap == 0) {
  break; // makes the time complexity 0(n)  best casee
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
 bubble_sort(arr, n);
 for(int i=0; i<n; i++){
  cout << arr[n] << '\n';
 }
 return 0;
}