#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];

    for(int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<n ; ++j)
        {
            cin>>arr[i][j];
        }
    }

    int dir=0,top=0,bottom=n-1,left=0,right=n-1;

    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
            for(int i=left ; i<=right ; ++i)
            {
                cout<<arr[top][i]<<" ";
            }
            top++;
        }
        else if(dir==1)
        {
            for(int i=top ; i<=bottom ; ++i)
            {
                cout<<arr[i][right]<<" ";
            }
            right--;
        }
        else if(dir==2)
        {
            for(int i=right ; i>=left ; --i)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        else if(dir==3)
        {
            for(int i=bottom ; i>=top ; --i)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
        dir = (dir+1)%4;
    }

    return 0;
}
