#include <iostream>
using namespace std;

int main(){
   int x = 2;
   x = x<<1;
   //00000010(2) - 000001000(4)
   cout<<x<<endl;

   int y = 2;
   y = y>>1;
   //2- 0000 0010 
   //2 ka one bit 1111 1101 
   //    now add 1            
   //-2- 1111 1110

   //3- 0000 0011
   //3 ka one bit 1111 1100
   //    now add 1            
   //-3- 1111 1101           
   
   cout<<y<<endl;

    return 0;
}