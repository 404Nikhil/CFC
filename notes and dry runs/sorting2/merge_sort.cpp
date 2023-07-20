/*
Merge Sort
much more optimized sorting algo
DIVIDE AND MERGE
play around with index instead of breaking array
similar to recursion backtracking
*/

/*
mergeSort (arr, low, high)
{
 if(low >= high) return;
  int mid = (low+ high)/2;
  mergeSort(arr,low,mid);   
  mergeSort(arr,mid+1,high); 
  merge(arr,low,mid,high);
  // when do we stop
}
*/

/*
merge(arr,low,mid,high){
 temp = arr[];
 left = low;
 right = mid+1;
 while(left<mid && right <= high){
  if(arr[left]<= arr[right];
  temp.add(arr[lefy\t]);
  left++;
  ])
 }
 else{
  temp.add(arr[right])
  right++;
 }
}

while(left<=right)
{
 temp.add[arr[left];
 left++;
 ]
}

while(right <= high){
 temp.add(arr(right);
 right++;
 )
}

for(i = low to high)
{
 arr[i] = temp[i - low];
}
*/


/*
TIME COMPLEXITY

we are dividing array by /2 so it is log base 2 N
lograthmic number of times the division happens 
so the tc becomes 0(Nlog base 2 N) average case
worst case while temp case 0(N)

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high) {
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void merge_sort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
