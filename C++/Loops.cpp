// While loop:-
//-->> Print numbers 1-5:
// #include <iostream>
// using namespace std;

// int main() {
//     int count =1;

//     while(count <=5){
//         cout << count << " ";
//         count++;
//     }
//     cout <<endl;
//     return 0;
// }




//-->> Print numbers 1- n :-
// #include <iostream>
// using namespace std;

// int main() {
//     int n  =20;
//     int count =0;

//     while(count <= n){
//         cout << count << " ";
//         count++;
//     }
//     cout <<endl;
//     return 0;
// }




//  for loop:
// #include <iostream>
// using namespace std;

// int main(){
//     int n =5;
//     for(int i=1; i<=n; i++) {
//         cout << i << " ";

//     }
//     cout << endl;
//     return 0;
// }

// Geps between the numbers:-

// #include <iostream>
// using namespace std;

// int main(){
//     int n =19;
//     for(int i=1; i<=n; i= i+2) {
//         cout << i << " ";

//     }
//     cout << endl;
//     return 0;
// }


/// Sum of numbers from 1 to n :-
// #include <iostream>
// using namespace std;

// int main(){
//     int n=50;
//     int sum =0;

//     for(int i=1; i<=n; i++){
//         sum = sum +i;
        

//     }
//     cout <<"sum: " << sum << endl;
//     return 0;

// }

///break:
// #include <iostream>
// using namespace std;

// int main(){
//     int n=50;
//     int sum =0;

//     for(int i=1; i<=n; i++){
//         sum = sum +i;
//         if(i==5){
//             break;
//         }
        

//     }
//     cout <<"sum: " << sum << endl;
//     return 0;

// }



/// Sum of all odd numbers from 1 to n:
// # include <iostream>
// using namespace std;

// int main(){
//     int n=50;
//     int oddsum=0;

//     for(int i=1;i<=n ; i++){
//         if(i%2!=0){
//             oddsum +=i;

//         }
//     }
//     cout<<"odd sum="<<oddsum<<endl;
// }




//// do while loop:
// #include <iostream>
// using namespace std;

// int main(){
//     do{
//         cout<<"heloo world!\n";

//     }while(3>5);
//     return 0;
// }


/// how to print the number 1to n:
// #include <iostream>
// using namespace std;

// int main(){
//     int n=10;
//     int i=1;
//     do{
//         cout<<i<<" ";
//         i++;
//     }while(i<=n);
//     cout <<endl;
//     return 0;

// }




/// Check if a number is a prime or not :
// #include <iostream>
// using namespace std;

// int main(){
//     int n =14;
//     bool isPrime = true;

//     for(int i=2; i<=n-1; i++) {  /// for different method i*i<=n
//         if(n % i ==0) { // non prime
//             isPrime = false;
//             break;       
//         }
//     }
//     if(isPrime ==true){
//         cout << "prime no\n";

//     }else{
//         cout << "non prime no\n";
//     }
//     return 0;
// }



/// Nested loops:
///--> loop inside loop:
// #include <iostream>
// using namespace std;

// int main(){
// //     for(int i=1; i<=5; i++){
// //         cout <<"*****" <<endl;
// //     }
// //     cout << endl;
//     int x=50;
//     for(int i=1; i<=x; i++){
//         cout << "x";
//     }
//     cout <<endl;

//     return 0;

// }


#include <iostream>
using namespace std;

int main(){
    int n =10;
    for(int i=1; i<=n; i++){
        int x=10;
        for(int i=1; i<=x; i++){
            cout << "*";
        }
        cout << endl;

    }
     
   

    return 0;

}