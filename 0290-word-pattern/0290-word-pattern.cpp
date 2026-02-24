class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;

        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }
        unordered_map<char, string> mpp1;
        unordered_map<string, char> mpp2;
        if (pattern.size() != words.size())
            return false;
        for (int i = 0; i < pattern.size(); i++) {
            if (mpp1.count(pattern[i]) && mpp1[pattern[i]] != words[i])
                return false;
            if (mpp2.count(words[i]) && mpp2[words[i]] != pattern[i])
                return false;
            mpp1[pattern[i]] = words[i];
            mpp2[words[i]] = pattern[i];
        }
        return true;
    }
};