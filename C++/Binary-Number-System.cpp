// Decimal to Binary:-
// #include <iostream>
// using namespace std;

// int dectoBinary(int decnum){
//    int ans =0; int   pow=1;
//     while (decnum >0){
//         int rem = decnum %2;
//         decnum /=2;
//         ans +=(rem*pow);
//         pow*=10;
//     }
//     return ans; // binary

// }
// int main(){
//     int decnum=50;
//     cout << dectoBinary(decnum) << endl ;
//     return 0;
// }


/// binary to decimal:
#include <iostream>
using namespace std;   

int binToDecimal(int binNum){
    int ans =0; int pow=1;
    while (binNum >0){
        int lastDigit = binNum %10;
        binNum /=10;
        ans +=(lastDigit*pow);
        pow*=2;
    }
    return ans; // decimal
}
int main(){
    int binNum=110010;
    cout << binToDecimal(binNum) << endl ;
    return 0;
}