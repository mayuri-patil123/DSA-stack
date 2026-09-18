#include<iostream>
using namespace std;

int gcd(int a ,int b){
    while(a>0&&b>0){
        if (a>b)a=a%b;
        else b = b %a;
    }
    if (a==0) return b;
    return a;

} 
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}


// Step	a	b	a>0 && b>0?	a>b?	Action
// Start	20	30	true	false	b = 30 % 20 = 10
// Loop 2	20	10	true	true	a = 20 % 10 = 0
// Loop 3	0	10	false (a=0)	—	loop exits