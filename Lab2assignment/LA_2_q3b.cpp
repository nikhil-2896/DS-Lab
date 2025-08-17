#include <iostream>
using namespace std;
int findmissno(int arr[],int n){
    int start=0,end=n-2,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid==1)
        start=mid+1;
        else
        end=mid-1;
    }
    return start+1;
    
}

int main() {
    int arr[]={1,2,4,5,6,7};
    int n=7;
    cout<<findmissno(arr,n)<<endl;
    

    return 0;
}