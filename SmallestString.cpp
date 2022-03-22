class Solution {
public:
    string getSmallestString(int n, int k) {
        
        char str[n];int i;
        string ans="";
        for( i=0;i<n;i++)
            str[i]='a';
        k=k-n;
        
        int j=n-1;
        while(k>0)
        {
          if(k<25){
              str[j]=(char)('a'+k);
            k=0;
          }  
          else
          {
              k=k-25;
              str[j]='z';
          }
            j--;
        }
        for(int i=0;i<n;i++)
            ans+=str[i];
        return ans;
        
    }
};
