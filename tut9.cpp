#include <iostream>
using namespace std;


//function pass by value - means sending a copy of original int main value
// that means if int main have a=5 and void have x=100 then last value will remain unchanged that is 5

// this is PASS BY VALUE
//syntax = int x;
// void doSomething(string s){
//     s[0]='t';
//     cout<<s<<endl;
// }

// int main(){
//     string s = "mayuri";
//     doSomething (s);
//     cout<<s<<endl;
//     return 0;
     
// }

//PASS BY REFERENCE -here function have original value not a copy at last it give original value
//syntax = int &x;
void doSomething(string &s){   //this is syntax of it &s;
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    string s = "mayuri";
    doSomething (s);
    cout<<s<<endl;
    return 0;
     
}