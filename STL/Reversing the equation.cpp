//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string> st;
            string num="";
            for(int i=0;i<s.length();i++){
                if(!(s[i]<='9'&&s[i]>='0'))
                {
                    st.push(s[i]+num);
                   
                    num="";
                }
                else
                num+=s[i];
            }
            st.push(num);
            string rev="";
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
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
