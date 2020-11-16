class Solution {
public:
    string minWindow(string s, string t) {
        
        vector<int>ve(128,0);int c=t.size(),end=0,startind,length=INT_MAX,st=0;
        
        for(auto x:t)
            ve[x]++;
        
        
        while(end<s.size())
        {
            
            
            if(ve[s[end]]>0) c--;
            
            ve[s[end]]--;
            end++;
            
            while(c==0)
            {
                
                if(end-st<length){
                startind=st;
                length=end-st;}
                
                
                if(++ve[s[st]]>0) c++;
                
                st++;
    
                
            }
            
            
            
     
        }
            
    
        if(length!=INT_MAX)
            return (s.substr(startind,length));
        else
            return "";
   
        
        
        
    }
};