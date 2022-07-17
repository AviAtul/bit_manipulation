#include <iostream>
using namespace std;

//least significant bit is rightmost bit
//n i given. from ith to 0th bit all shound be unset
//find a mask such that N & M is the answer. imagine how M should be


//N = 01101 0110                     
//re= 11111 0000 //required
//A=  00000 1000 //1<<i
//B=  00000 0111 //here B = A-1
//C=  11111 1000  //negation of B //so we didn't quite reach. to reach we create A for i+1. self-explanatory
//N = 01101 0110                     
//re= 11111 0000 //required
//A=  00001 0000 //1<<(i+1)
//B=  00000 1111 //here B = A-1
//C=  11111 0000


//M = ~(1<<(i+1)-1)
//ans = N & M


int main(){
    int N,i;
    cin>>N>>i;
    int M = ~(1<<(i+1)-1);
    cout<<(N & M)<<endl;
}