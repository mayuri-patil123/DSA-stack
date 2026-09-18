#include <iostream>
using namespace std;

// fuctions are set of code which performs something for you
//functions are used to modularize code
// functions are used to increase readibility
// functions are used to use same code multiple times
// void-> which does not return anything
//return
//parameteriszed
// non parameterised

// void printName(string name){
//     cout << "hey" << name <<endl ;    
        
// }

// int main(){
//     string name; (EXAMPLE CODE)
//     cin>>name;
//     printName(name);

//      string  name2;  
//      cin>> name2;
//      printName(name2);
     

//take two numbers and print the sum
  
int sum(int num1,int num2){
 int num3 = num1+num2;
 return num3;
}



int main(){
    int num1 ,num2;
    cin>> num1 >>num2;
    int result =sum(num1,num2);  //from here code will go on line no-30 to execute sum value
// these step if we want multiple time we need to
 // do it again and again instead we will modularize it upward 
    cout<<result;
    return 0;
}





