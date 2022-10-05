//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prec(char a){
        if(a=='^')
         return 4;
       else if(a=='*'||a=='/')
         return 3;
        else if(a=='+'||a=='-')
         return 2;
         else
          return 1;
    }
    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;
        string output="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
             output+=s[i];
            else if(s[i]=='(')
             st.push('(');
            else if(s[i]==')'){
                while(st.size()!=0&&st.top()!='('){
                    output+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
                while(st.size()!=0&&prec(s[i])<=prec(st.top())){
                    output+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
           
        }
         while(st.size()!=0){
         output+=st.top();
        st.pop();
    }
   
        return output;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends
