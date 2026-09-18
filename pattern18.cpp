#include<iostream>
using namespace std;

void print18(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        // stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
 
        }
        // stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        iniS=iniS+2;
        cout<<endl;
    }
         
    iniS = 2*(n-1);
    
for(int i=0;i<n;i++){
        // stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
 
        }
        // stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        iniS = iniS-2;
        cout<<endl;
    }
    
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print18(n);
    }
}