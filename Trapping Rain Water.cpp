
#include<bits/stdc++.h>

using namespace std;



  long long trappingWater(int arr[], int n){
     int l[n];
     int r[n];
     
     
     l[0]=arr[0];
     for(int i=1;i<n;i++)
     {
         l[i]=max(l[i-1],arr[i]);
     }
     
     r[n-1]=arr[n-1];
     for(int i=n-2;i>=0;i--)
     {
         r[i]=max(r[i+1],arr[i]);
     }
     
     long long cnt=0;
     for(int i=0;i<n;i++)
     {
         cnt+=(min(l[i],r[i])-arr[i]);
     }
     
     return cnt;
    }



int main(){
    
        int n;
        cin >> n;
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }

        cout << trappingWater(a, n) << endl;
        return 0;
    }
    
    
