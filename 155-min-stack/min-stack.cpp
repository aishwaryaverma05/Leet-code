class MinStack {
public:
    vector<int>vec;
    int top_count=-1;
    MinStack() {
    }
    
    void push(int val) {
        vec.push_back(val);
        top_count++;
    }
    
    void pop() {
        if(top_count==-1)return;
        if(top_count>=0){
            vec.pop_back();
            top_count--;
        }
    }
    
    int top() {
        return vec[top_count];
    }
    
    int getMin() {
        int min_val=*min_element(vec.begin(),vec.end());
        return min_val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */