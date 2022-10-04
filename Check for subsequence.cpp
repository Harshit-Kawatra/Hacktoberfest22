// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int n1 = A.length();
        int n2 = B.length();
		    vector<vector<int>>vec(n1+1,vector<int>(n2+1,0));
		    for(int i=1;i<=n1;i++)
		    for(int j=1;j<=n2;j++)
		    {
		        if(A[i-1]==B[j-1])
		        vec[i][j] = 1+vec[i-1][j-1];
		        else
		        vec[i][j] = max(vec[i-1][j],vec[i][j-1]);
		    }
		    return vec[n1][n2]==n1;

        //     int i=0,j=0;
        // int n1 = A.length(),n2 = B.length();
        // while(i<n1 && j<n2)
        // {
        //     if(A[i]==B[j])
        //     {
        //         i++;j++;
        //     }
        //     else
        //     j++;
        // }
        // if(i==n1)
        // return true;
        // return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends
