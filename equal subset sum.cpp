// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int  i=0;i<N;i++)
        sum+=arr[i];
        if(sum%2)
        return 0;
        sum/=2;
        vector<vector<int>> vec(N+1,vector<int>(sum+1,false));
        for(int i=0;i<=N;i++) vec[i][0]=true;
        for(int i=1;i<=N;i++)
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            vec[i][j] = vec[i-1][j] || vec[i-1][j-arr[i-1]];
            else
            vec[i][j] = vec[i-1][j];
        }
        return vec[N][sum];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends