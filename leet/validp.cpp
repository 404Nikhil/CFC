// brute force

class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       for(char c : s) {
           if(c == '(' || c == '{' || c == '['){
               st.push(c);
           }
           else {
               if(st.empty() || 
               (c == ')' && st.top() != '(') || 
               (c == '}' && st.top() != '{') || 
               (c == ']' && st.top() != '[')) 
               {
                   return false;
               }
               st.pop();
           }
       }
       return st.empty();
    }
};


// or



// ASCII VALUE 


class Solution {
public:
bool isValid(string s) {
        stack<char> st;
        for(auto it:s)
                    {
if(it=='('||it=='['||it=='{')
st.push(it);
else
{
if(st.empty()||abs(it-st.top())>2) /*abs(')' - '(') = 41 - 40 = 1
abs(']' - '[') = 93 - 91 = 2
abs('}' - '{') = 125 - 123 = 2*/
return false;
else
st.pop();
}
                    }
return st.empty();

}
};



// runtime 0ms


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {
            {']', '['},
            {')', '('},
            {'}', '{'}
        }; 
        
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{')
                st.push(ch);
            else {
                if (st.empty() || st.top() != mp[ch])
                    return false;
                st.pop();
            }
        }
        
        return st.empty();
    }
};


