//set = 1 unset = 0
#include <iostream>
using namespace std;

int main(){
    int x,i;
    cin>>x>>i;
    // int z = x&(1<<i);
    x = x^(1<<i);
    cout<<x<<endl;

   
}