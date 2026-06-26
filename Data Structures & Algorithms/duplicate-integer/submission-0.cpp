class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int> checkduplicate;
        for(auto i : nums)
        {
            checkduplicate[i]++;
             if (checkduplicate[i] > 1){
                return true;
             }
        }

        return false;
    }
        

    
};