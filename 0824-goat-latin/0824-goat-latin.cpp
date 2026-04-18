class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        else
            return false;
    }
    string toGoatLatin(string sentence) {
        string ans = "";

        int i = 0;
        string temp = "a";
        int n = sentence.size();
        while (i < n) {
            if (sentence[i] == ' ') {
                i++;
                continue;
            }
            if (i < n && isVowel(sentence[i])) {
                while (i < n && sentence[i] != ' ') {
                    ans += sentence[i];
                    i++;
                }
                ans += "ma";
                ans += temp;
            } else {
                char k = sentence[i];
                i++;
                while (i < n && sentence[i] != ' ') {
                    ans += sentence[i];
                    i++;
                }
                ans += k;
                ans += "ma";
                ans += temp;
            }
            temp += 'a';
            if (i != n) {
                ans += ' ';
            }
            
        }
        return ans;
    }
};