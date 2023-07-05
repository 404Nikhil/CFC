#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 string str;
 cin>>str;
 int count = 0;
    unordered_set<char> uniqueChars;

    for (char ch : str) {
        if (uniqueChars.find(ch) == uniqueChars.end()) {
            count++;
            uniqueChars.insert(ch);
        }
    }
    if(count%2==0){
      cout<<"CHAT WITH HER!";
    }
    else{
      cout<<"IGNORE HIM!";
    }
 return 0;
}