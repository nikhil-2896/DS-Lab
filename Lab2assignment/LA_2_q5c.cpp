#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter size of matrix"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"enter the elements in matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i)
            cout<<"0";
            else cout<<arr[i][j];
        }
    cout<<endl;
    }
    return 0;
}
