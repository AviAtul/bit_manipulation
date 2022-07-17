//left shift and right shift
#include <iostream>
using namespace std;

int main(){
    //left shift

    //left shift 8 by 1                             8 << 1
    //left shift 0 0 0 0 1 0 0 0(8) - 0 0 0 1 0 0 0 0(16)        8*2*1

    //left shift 11 by 2                           11 << 2
    //left shif 0 0 0 0 1 0 1 1(11) - 0 0 1 0 1 1 0 0(44)       11*2*2

    //n<<i -n*(2ki power i)

    //right shift

    //right shift 8 by 1                           8 >> 1
    //right shift 0 0 0 0 1 0 0 0(8) - 0 0 0 0 0 1 0 0(4)        8/(2*1)

    //left shift 11 by 1                         11 >> 1
    //left shif 0 0 0 0 1 0 1 1(11) - 0 0 0 0 0 1 0 1(5)       11/(2*1)

    //left shift 9 by 2                           9 >> 2
    //left shif 0 0 0 0 1 0 0 1(9) - 0 0 0 0 0 0 1 0(2)       9/(2*2)

    //n>i n/(2ki power i)
    //if positive number toh 0 append hota hai warna 1

    return 0;
}