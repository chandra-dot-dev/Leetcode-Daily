class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> dq;
        sort(deck.begin(),deck.end());
        int n = deck.size();
        for(int i = n-1;i>=0;i--){
            if(!dq.empty()){
                int back = dq.back();
                dq.pop_back();
                dq.push_front(back);
            }
            dq.push_front(deck[i]);
        }
        return vector<int>(dq.begin(),dq.end());
    }
};