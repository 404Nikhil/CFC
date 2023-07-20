In the given example, the function g(int n) is recursively called with the parameter n. Each function call generates two other calls, except when n equals 1.

Let's see what happens when g is called with a parameter n. The table below shows the function calls produced by a single call to g(n):

scss
Copy code
function call   number of calls
g(n)               1
g(n−1)             2
g(n−2)             4
...               ...
g(1)               2^(n-1)
Save to grepper
As we can see, the number of function calls doubles with each level of recursion until it reaches g(1), which has 2^(n-1) calls.

To determine the time complexity, we sum up the number of function calls at each level. This sum can be expressed as:

1 + 2 + 4 + ... + 2^(n-1)

This sum is a geometric series with a common ratio of 2. We can calculate the sum using the formula for the sum of a geometric series:

Sum = (a * (r^n - 1)) / (r - 1)

In this case, a = 1 (the first term), r = 2 (the common ratio), and n is the number of levels of recursion.

Using the formula, we get:

Sum = (1 * (2^(n) - 1)) / (2 - 1)
= 2^n - 1

Therefore, the time complexity of the function g is O(2^n), indicating an exponential time complexity.

int best = 0, sum = 0;
for (int k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";

vector<int> v = {4,2,5,3,5,8,3};
sort(v.begin(),v.end());
After the sorting, the contents of the vector will be [2,3,3,4,5,5,8]. 

The default
sorting order is increasing, but a reverse order is possible as follows:
sort(v.rbegin(),v.rend());

An ordinary array can be sorted as follows:
int n = 7; // array size
int a[] = {4,2,5,3,5,8,3};
sort(a,a+n);


Print name N times using recursion 

name n times
void f(i,n){
if(i>n) return; // base case
print("nikhil");
f(i+1,N);
}
main()
{
int n;
cin>>n;
f(1,n);
}

1,3 to 2,3 to 3,3 to 4,3 base case returns 
print(1-N)
void() {
if(i>n) return;
print(i);
f(i+1,n);
}
main() {
int n;
cin>>n;
f(1,n);
}



Print 1 to N using backtracking recursion 
by using backtraking 

f(i,n){
if(i<1)
reutnr;
f(i-1,n)
print(i)
}
main(){
int n;
cin n;
f(n,n);
}

here what we do is we backtrack our input by making our stack to mandatorily call the prev function

PRINT N TO 1 using recursion 

f(i,n) {
uf(i<1) return;
print(i)
f(i-1,N); // main change only change
}
main(){
int n;
cin>>n;
f(n,n)
}

Factorial of N number

fact(int n){
if(n==0){
return 1;
}
return n * fact(n-1);
}
main
{
n
print(fact(int n));
}

REVERSE AN ARRAY 

void f(int i, int arr[], int n) {
if(i>= n/2) return;
swap(Arr[i], arr[n-i-1]);
f(i+1, arr,  n);
}

int main() {
n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++) cin>>arr[i];
f(0, arr, n)
for(int i=0; i<n; i++) court<<Arr[i]<<" ";
}

PALINDROME 

a string on reversal reads the same

madam, nitin 

f(I) {
if(I>+n/2) return true;
if(s[i] != s[n-i-1]);
return false;
return f(i+1, s)
}
main(){
string s
court<< f(o,s)
}


FIBONNACI 

multiple recursion calls
fibonacci 

0 1 1 2 3 5 8 13 21 34 ....

nth fibonacci number

f(5) = f(4) + f(3)

simple approach

f(0)=0 f(1)=1
for( i =2; i<n i++){
f[i] = f[i-1] + f[i-2]
}

by recursion calls