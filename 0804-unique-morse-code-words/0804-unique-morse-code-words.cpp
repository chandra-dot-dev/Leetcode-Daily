class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
            "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
            "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
            "...-", ".--",  "-..-", "-.--", "--.."
        };
        unordered_set<string> uniquecodes;
        for(string it:words){
            string transformation = "";
            for(char ch:it ){
                transformation += morse[ch-'a'];
            }
            uniquecodes.insert(transformation);
        }
        return uniquecodes.size();
        }
};