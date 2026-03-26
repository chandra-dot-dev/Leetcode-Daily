class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        for(int j=0;j<arr.size();j++) {
            if(i>=arr.size()){
                break;
            }
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i + 1, 0);
                arr.pop_back();
                i+=1;
            }
            
            i+=1;
        }
    }
};