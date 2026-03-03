				/* If you find this helpful upvote please */
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size() , sum = 0 ;
		int k = 1; 
        vector<int> ans;
        ans.push_back(stoi(ops[0])); 
        for(int i = 1 ; i < n ;i ++) 
        {
            if(ops[i] == "D")
            {
                ans.push_back(ans[k - 1] * 2);
                k ++;
            }
            else if(ops[i] == "C")
            {
                ans.pop_back();
                k --;
            }
            else if(ops[i] == "+")
            {
                ans.push_back(ans[k - 1] + ans[k - 2]);
                k ++;
            }
            else
            {
                ans.push_back(stoi(ops[i]));
                k ++;
            }
        }
        for(int j = 0 ; j < ans.size() ; j ++)
        {
            sum = sum + ans[j];
        }
        return sum;
    }
};
