class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>freq;
        for(auto it : nums)
        {
            freq[it]++;
        }
        if(freq.size()==1)
        {
            return {freq.begin()->first};
        }
        vector<pair<int,int>> v(freq.begin(), freq.end());
      sort(v.begin(), v.end(), [](auto a, auto b)
{
    return a.second > b.second;
});
vector<int>ans;
        for(int i=0;i<k;i++)
        {
           ans.push_back(v[i].first);
        }
return ans;
    }
};
