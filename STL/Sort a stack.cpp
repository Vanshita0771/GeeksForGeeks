//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   vector<int> v;
   while(s.size()!=0){
       v.push_back(s.top());
       s.pop();
   }
   for(int i=0;i<v.size()-1;i++){
       for(int j=0;j<v.size()-i-1;j++){
           if(v[j+1]<v[j]){
               int temp=v[j];
               v[j]=v[j+1];
               v[j+1]=temp;
           }
       }
   }
   int i=0;
   while(i<v.size()){
       s.push(v[i++]);
       
   }
}
