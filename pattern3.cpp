#include<iostream>
using namespace std;


void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main() {
      int t;
      cin>>t;
      for(int i=0;i<t;i++){
        int n;
        cin>> n;
 print3(n);
      }
}


// here in intput.txt as we are gonnna add 4 5 values 
// always consider the first value of input.txt as int t value
// see in input.txt here 1st value is 2 so it means'
// only 2 test cases will be performed that is 4 and 5 and above 5 if we write values they are of no use because the do not get printed because there are only 2 test cases