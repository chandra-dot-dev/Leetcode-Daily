class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, INT_MAX);

        for (auto &word : words) {
            vector<int> curr(26, 0);

            for (char ch : word) {
                curr[ch - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                freq[i] = min(freq[i], curr[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                result.push_back(string(1, i + 'a'));
                freq[i]--;
            }
        }

        return result;
    }
};