class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> first;
        for(auto c: s)
        {
            first[c]++;
        }
        unordered_map<char,int> second;
        for(auto c: t)
        {
            second[c]++;
        }
        if(first == second)
        {
            return true;
        }
        return false;
    }
};
