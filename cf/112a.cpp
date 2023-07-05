#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

 string str1,str2;
 cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
     int result = str1.compare(str2);
    if (result < 0) {
        cout << "-1" << endl;
    } else if (result > 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
  return 0;
}