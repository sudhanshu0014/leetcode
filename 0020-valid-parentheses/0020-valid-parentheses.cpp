class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(auto it: s){
            if(it == '(' )  ch.push(')');
            else if(it == '{') ch.push('}');
            else if(it == '[') ch.push(']');
            else{
            if(ch.empty() || it!= ch.top()) return false; 
                 ch.pop();
            }    
            }
            return ch.empty();
        }
        
    };
