#include <iostream>
using namespace std;

//most significant bit is leftmost bit
//n i given. We need to clear all bits from MSB to ith bit i.e. clear all bits except 0th and 1st.


//N = 01101 0110                     
//re= 00000 1111 //required
//A=  00000 1000 //1<<i
//B=  00000 0111 //here B = A-1 // //so we didn't quite reach. to reach we create A for i+1. self-explanatory

//N = 01101 0110                     
//re= 11111 0000 //required
//A=  00001 0000 //1<<(i+1)
//B=  00000 1111 //here B = A-1


//M = (1<<(i+1)-1)
//ans = N & M

int clearBitsMSBThrough(int num, int i) {    
   int mask = (1 << i) - 1;
   return num & mask;
}

int main(){
    int N,i;
    cin>>N>>i;
    cout<<clearBitsMSBThrough(N,i)<<endl;
}