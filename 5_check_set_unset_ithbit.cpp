//set = 1 unset = 0
#include <iostream>
using namespace std;

int main(){
    //check if ith bit is set or not
    //    5,2 - true
    //  0000 0101 & 0000 0100 ---  1 on that bit so that is true   //second number is basically 2 to the power i
    //    5,1 - false
    //  0000 0101 & 0000 0010 ---  0 on that bit so that is false  //second number is basically 2 to the power i
    //    9,2 - false
    //  0000 1001 & 0000 0100 ---  0 on that bit so that is false  //second number is basically 2 to the power i

    //n,i
    //calculate z= n & pow(2,i)   //time complexity of pow function is o(logi) // so we will use 1<<2 instead whose value is also the same
    //if z==0 unset else set
    // calculate z= n & (1<<i)
    int x, i;
    cin>>x>>i;
    int z = x&(1<<i);
    if(z==0){
        cout<<"false"<<endl;
        x = x|(1<<i);
    }
    else{
        cout<<"true"<<endl;
    }
    cout<<x<<endl;

    int y, t;
    cin>>y>>t;
    z = x&(1<<i);
    if(z==0){
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
        y = y & ~(1<<i);
    }
    cout<<y<<endl;
    return 0;
}