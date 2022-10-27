unordered_map<char, int> sym = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s) {
    stack<char> st;
    for(auto bracket : s){
        if(sym[bracket ] < 0){ //if opening bracket add in stack 
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO"; 
            auto top = st.top();
            st.pop();
            if(sym[top] + sym[bracket] != 0) return "NO"; // check match () {} []
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
