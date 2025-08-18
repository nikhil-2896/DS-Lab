#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of matrix"<<endl;
    cin>>n;
    int arr1[3*n-2];
    int matrix[n][n];
    cout<<"enter the elements in matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i==j+1 || i==j-1){
                arr1[k]=matrix[i][j];;
                k++;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}
