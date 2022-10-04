#include <iostream>
#include <string.h>
using namespace std;

int check(char ok[],int size){
   int flag;
   int start=0;
   int end=size-1;

   while(start<=end){
    if(ok[start]!=ok[end]){
        return 0;
    }
    else{
        start++;
        end--;
    }
   }
   return 1;
   }
   
int main(){
    char name[]="Sriyansh";
    int l1=strlen(name);
    char other[]="level";
    int l2=strlen(other);
    cout<<check(name,l1)<<endl;
    cout<<check(other,l2)<<endl;

    return 0;
}