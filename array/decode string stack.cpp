class Solution {
public:
    string decodeString(string s) {
        
        stack<string>chars;
        
        stack<int>nums;
        
        string res;
        
        int num=0;
        
        for(char c:s)
        {
            
            if( isdigit(c))
            {
                num=num*10+(c-'0');
            }
            else if(isalpha(c))
                res.push_back(c);
            else if(c=='[')
            {
                chars.push(res);
                nums.push(num);
                res="";num=0;   
            }
            else
            {
                string temp=res;
                for(int i=1;i<nums.top();i++)
                    res+=temp;
                
                res=chars.top()+res;
                
                chars.pop();nums.pop();
            
                
            }
            
        }
        
        return res;
        
        
    
    }
};