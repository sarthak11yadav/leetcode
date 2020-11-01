class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
         
unordered_map<int,int>mp,yy;int n=a.size();vector<int>res;priority_queue<pair<int,int>>pq;
        for(int i=0;i<a.size();i++)
            mp[a[i]]++;
        
        for(int i=0;i<n;i++)
        {
            if(yy[a[i]]<=0){
                pq.push({mp[a[i]],a[i]});
        
            }
            yy[a[i]]++;
        
        }
        while(res.size()<k){
        int temp=pq.top().second;
        pq.pop();
        res.push_back(temp);
    }
    
        return res;
        
    }
};