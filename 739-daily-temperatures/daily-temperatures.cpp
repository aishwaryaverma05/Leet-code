class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // brute
        // int n = temperatures.size();
        // vector<int> result(n, 0);

        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (temperatures[j] > temperatures[i]) {
        //             result[i] = j - i;
        //             break;
        //         }
        //     }
        // }

        // return result;

        int n = temperatures.size();
        vector<int> answer(n,0);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int top=st.top();
                st.pop();
                answer[top]=i-top;
            }
            st.push(i);
        }
        return answer;
    }
};