// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        multimap<int,char> fin;
        string ans = "";

        for(char c:s){
            mp[c]++;
        }

        for(auto x: mp){
            fin.insert({x.second, x.first});
        }

        for(auto it = fin.begin(); it!=fin.end(); it++){
            ans += string(it->first, it->second);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
