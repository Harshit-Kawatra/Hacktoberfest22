#include<stdio.h>
#include<stdlib.h>

void printarr(int arr[])
{
  for(int i=0;i<5,i++)
    printf("%d",arr[i]);
}

void bubblesort(int *arr)
{
  for(int i=0; i<n-1;i++)
  {
    for(int j=0; j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

   
int main
{
  int arr[5] = {1,4,2,3,5};
  printarr(arr);
  bubblesort(arr);
  printarr(arr);
  return 0;
}
