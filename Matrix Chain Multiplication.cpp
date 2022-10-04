// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> vec;
    int solve(int arr[],int i,int j)
    {
    if(i>=j)
    return 0;
    if(vec[i][j]!=-1)
    return vec[i][j];
    int mini = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int left,right;
        if(vec[i][k]!=-1)
        left = vec[i][k];
        else
        left = vec[i][k] = solve(arr,i,k);
        if(vec[k+1][j]!=-1)
        right = vec[k+1][j];
        else
        right = vec[k+1][j] = solve(arr,k+1,j);
        
        int temp = left+right+(arr[i-1]*arr[k]*arr[j]);
        mini = min(mini,temp);
    }
    return vec[i][j]=mini;
    }
    int matrixMultiplication(int N, int arr[])
    {
        vec = vector<vector<int>>(N+1,vector<int>(N+1,-1));
        int res = solve(arr,1,N-1);
        // for(auto it : vec){
        //     for(auto it2: it )
        //     cout<<it2<<"    ";
        //     cout<<endl;
        // }
        return res;
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
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends