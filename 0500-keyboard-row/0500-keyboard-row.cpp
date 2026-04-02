class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> st1{'q', 'w', 'e', 'r', 't',
                                'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> st2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> st3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        vector<string> ans;
        for (string word : words) {
            unordered_set<char> tempSet;
            bool flag = true;
            if (st1.find(tolower(word[0])) != st1.end()) {
                tempSet = st1;
            } else if (st2.find(tolower(word[0])) != st2.end()) {
                tempSet = st2;
            } else if (st3.find(tolower(word[0])) != st3.end()) {
                tempSet = st3;
            }
            for (char ch : word) {
                if (tempSet.find(tolower(ch)) == tempSet.end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};