class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // sorting the array so that we donot have to iterate though them all
        sort(strs.begin(),strs.end());

        // creating temporary strings
        string longest_prefix = "";
        string first = strs.front();
        string last = strs.back();
        

    

        for(int i=0;i<(min(first.size(),last.size()));i++){
            if(first[i]!=last[i]){
                return longest_prefix;
            }
            longest_prefix+=first[i];
        }
        return longest_prefix;
    }
};