class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        //iterating through all words
        for(auto it:strs){
            string word=it;
            //sorting so that all words with same letters are treated same
            sort(word.begin(),word.end());
            //push original value to the map
            m[word].push_back(it);
        }
        vector<vector<string>>ans;
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};