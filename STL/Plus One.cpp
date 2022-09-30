//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> v ,int n) {
        // code here
        int count=0;
        v[n-1]+=1;
        for(int i=n-1;i>-1;i--){
           int add=count+v[i];
           if(add>=10){
               v[i]=add%10;
               count=1;
           }
           else{
               v[i]=add;
               count=0;
               break;
           }
        }
        vector<int> v1;
        if(count!=0){
            v1.push_back(count);
        }
        for(int i=0;i<n;i++){
            v1.push_back(v[i]);
        }
       
        return v1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
