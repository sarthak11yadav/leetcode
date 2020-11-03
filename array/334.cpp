class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int m1=INT_MAX,m2=INT_MAX;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=m1)
                m1=a[i];
            else if(a[i]<=m2)
                m2=a[i];
            else
                return true;
        
        }
        return false;
       
        

    }
};