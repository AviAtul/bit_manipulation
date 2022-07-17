//set = 1 unset = 0
#include <iostream>
using namespace std;

//odd ka last bit 1 

int main(){
    int x;
    cin>>x;
    int z = x&1;
    if(z!=0){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
    
    return 0;
}