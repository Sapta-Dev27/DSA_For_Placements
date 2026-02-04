class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();  //  arr size() 
        stack<int>st; // stack<int>st 
        for(int i=0 ; i < n ; i++){ // iterate over the array 
            if( operations[i] != "C" &&  operations[i] != "D" &&  operations[i] != "+" ){ // if it is a integer 
              st.push(stoi(operations[i]));  //into the function 
            }
            else if(operations[i] == "C"){
             st.pop(); // st.pop() == -1 
            }
            else if(operations[i] == "D"){
            int data = 2 * st.top();
            st.push(data);
            }
            else{
            int c=1, data =0;
            int a = st.top();
            st.pop();
            int b = st.top();
            st.push(a);
            st.push(a+b);
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        return sum;
    }
};