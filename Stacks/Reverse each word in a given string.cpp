//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<char> st;
        string rev="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                while(st.size()!=0){
                    rev+=st.top();
                    st.pop();
                }
                rev+=s[i];
            }
            else{
                st.push(s[i]);
            }
        }
         while(st.size()!=0){
            rev+=st.top();
            st.pop();
         }
        return rev;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
