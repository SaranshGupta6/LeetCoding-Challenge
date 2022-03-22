class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[26];
        for(int i=0;i<s.length();i++){
            last[s[i]-'a'] = i;
        }
        int j = 0,a = 0;
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            j = max(j,last[s[i]-'a']);
            if(i==j){
                ans.push_back(i-a+1);
                a = i+1;
            }
        }
        return ans;
    }
};
