#include <iostream>
using namespace std;
//else if loop
int main(){
    int age;
    cin>>age;
    if (age<18){
        cout<<"not elegible for the job";
    }
    else if (age<=54){
        cout<<"elegible for job";
    }
    else if (age<=57){
        cout<<"elegible for job,but retirement is soon";

    }
    else if (age >=55){
        cout<<"retirement time";
    }
    return 0;
}