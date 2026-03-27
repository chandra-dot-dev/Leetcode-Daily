class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        unordered_set<char> used;
        string result = "";
        for (char ch : s) {
            freq[ch]--;
            if (used.count(ch))
                continue;
            while (!result.empty() && freq[result.back()] > 0 &&
                   result.back() > ch) {
                used.erase(result.back());
                result.pop_back();
            }
            used.insert(ch);
            result.push_back(ch);
        }
        return result;
    }
};