// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<bool>> vec (n+1);
        for(int i=0;i<=n;i++)
        {
            vec[i] = vector<bool> (sum+1,false);
            vec[i][0] = true;
        }
        for(int i=1;i<=n;i++)
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            vec[i][j] = vec[i-1][j-arr[i-1]] || vec[i-1][j];
            else
            vec[i][j] = vec[i-1][j];
        }
        return vec[n][sum];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends