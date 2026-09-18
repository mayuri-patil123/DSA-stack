#include <iostream>
using namespace std;


void print8(int n){
    int start = 1;
    for (int i=0;i<n;i++){
        if(i%2==0) start = 1;
        else start = 0;
          for(int j = 0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for( int i=0;i<t;i++){
int n;
cin>>n;
print8(n);
  
    }
}


// if(i%2==0) start = 1;   // 1%2 is 1, not 0, so this is FALSE
// else start = 0;          // this runs instead, so start = 0

// Row 1 ends up starting with 0, matching the odd-row case.

// Quick reference for small numbers:

// n	n % 2	even or odd?
// 0	0	even
// 1	1	odd
// 2	0	even
// 3	1	odd
// 4	0	even
// 5	1	odd

// Pattern: even numbers give remainder 0, odd numbers give remainder 1 — always, since dividing by 2 can only ever leave 0 or 1 left over.

