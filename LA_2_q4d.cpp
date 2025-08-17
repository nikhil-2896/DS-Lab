#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string "<<endl;
    getline(cin,str);

    for(int i=0;i<str.length()-1;i++){
        for(int j=0;j<str.length();j++){
            swap(str[i],str[j]);
        }
    }
    cout<<"sorted string is "<<str<<endl;
    return 0;
}