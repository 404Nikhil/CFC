class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       stack<int> st;
       queue<int> qu;
       for(int i=0; i< students.size(); ++i){
           st.push(sandwiches[sandwiches.size()-1-i]);
           qu.push(students[i]);
       }
       int n=0;
       while(!st.empty()){
           if(st.top() == qu.front()){
               st.pop();
               qu.pop();
               n=0;
           } 
           else {
               qu.push(qu.front());
               qu.pop();
               n++;
           }
           if(qu.size() == n)
           break;
       }
       return qu.size();
    }
};