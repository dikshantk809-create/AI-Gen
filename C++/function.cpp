//function:

//Basic:-

// #include <iostream>
// using namespace std;

// //function definition
// void printHello(){
//     cout << "hello\n";

// }

// int main(){
//     //function call
//     printHello();
//     printHello();
//     printHello();
    
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
// #include <iostream>
// using namespace std;

// //function definition
// int  printHello(){
//     cout << "hello\n";
//     return 3;

// }

// int main(){
//     //function call
//     int val = printHello();
//     cout << "val =" << val << endl;
    
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Sum fo 2 numbers:

// #include <iostream>
// using namespace std;

// //sum fo 2 numbera:
// int sum(int a, int b){
//     int s= a+b;
//     return s;
// }

// int main(){
//     cout << sum(10,12) << endl;
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// min of 2 numbers:

// #include <iostream>
// using namespace std;

// int minoftwo(int a, int b){
//     if(a < b){
//         return b;
//     } else{
//         return a;
//     }
// }


// int main(){
//     cout << "min = " << minoftwo(10,1) << endl;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Claculate the sum of  numbers from 1 to N:
// #include <iostream>
// using namespace std;

// int sumN(int n) {
//     int sum =0;
//     for(int i=1; i<=n;i++){
//         sum +=i;

//     }
//     return  sum;

// }


// int main(){
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }


// Calculate N factorial:
// #include <iostream>
// using namespace std;

// int factN( int n){
//     int fact=1;
//     for( int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     cout << factN(4) << endl;
//     cout << factN(5) << endl;

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function in Memory :
// Pass By Value:
// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;
// }
// int main() {
//     int x = 5, y = 5;
//     cout << sum(x, y);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Calculate the sum of digits  of a number:
// #include <iostream>
// using namespace std;

// int sumofdigit(int num){
//     int digitsum=0;
//     while (num >0){
//         int lastDig = num %10;
//         num /=10;

//         digitsum += lastDig;
//     }

//     return digitsum;
// }

// int main(){
//     cout << "sum = " << sumofdigit(2365) << endl;

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Calculate nCr binomial coefficient for n&r:
#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;

    }
    return fact;
}


int nCr(int n, int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    return fact_n/(fact_r*fact_nmr);

}


int main(){
    int n=8 , r=2;
    cout << nCr(n,r) << endl;
    return 0;

}
