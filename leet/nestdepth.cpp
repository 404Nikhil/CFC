class Solution {
public:
    int maxDepth(string s) {
    int maxCount =0;
    int openCount=0;
    for(char c : s){
        if(c =='('){
            openCount++;
            maxCount = max(maxCount, openCount);
        }
        else if(c== ')'){
            openCount--;
        }
    }
    return maxCount;    
    }
};