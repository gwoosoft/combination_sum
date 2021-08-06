class Solution {
public:
    void bc(vector<vector<int>>& cb, vector<int>& c,vector<int>& t, int target, int start, int &sum){
        // cout<<sum<<endl;
        // for(auto x:t)cout<<x<<endl;
        
        if(sum>target) return;
        if(target==sum){
            cout<<"what are you doing"<<endl;
            cb.push_back(t);
            return;
        }
        for(int i=start; i<c.size(); i++){
           sum+=c[i];
           t.push_back(c[i]);               
           bc(cb, c, t, target, i, sum); 
           sum-=c[i];
           t.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        vector<vector<int>> cb;
        vector<int> temp;
        bc(cb, candidates, temp, target, 0, sum);
        return cb;
    }
};
