class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int sz = prices.size();
        stack<int> st; 

        for (int i = 0; i < sz; i++) {
            while (!st.empty() && prices[i] <= prices[st.top()]) {
                int idx = st.top();
                st.pop();
                prices[idx] -= prices[i]; 
            }
            st.push(i); 
        }

        return prices;
    }
};
