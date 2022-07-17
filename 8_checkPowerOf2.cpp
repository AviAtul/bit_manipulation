//set = 1 unset = 0
#include <iostream>
using namespace std;

int main(){
    //1- 0000 0001----2kipower0
    //2- 0000 0010
    //4- 0000 0100
    //8- 0000 1000
    //that bit is 1 which was 0 in previous one. because this bit just got generated as 1
    //n & n-1 == 0 toh n is power of 2
    int n;
    cin>>n;
    cout<<n<<" "<<n-1<<" "<<(n & (n-1))<<endl;
    if((n & (n-1)) == 0){
        cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    return 0;
}