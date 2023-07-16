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
