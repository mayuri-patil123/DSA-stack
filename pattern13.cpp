#include<iostream>
using namespace std;


void print13(int n){
    for(int i=0;i<n;i++){//here we understand which row will get printed
        
        char ch = 'A'+i;  //here we understand which letter is gonna print
        for(int j=0;j<=i;j++){  //here we understand how many times letter is gonna print
        
        
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print13(n);
    }
}