/// Square Pattern:
//easy with numbers n=4:-

// #include <iostream>
// using namespace std;

// int main(){
//     int n =4;
//     for( int i=1; i<=n; i++){  // outer
//         for( int j=1; j<=n; j++){
//             cout<< j << " ";
//         }
//         cout <<endl;

//     }
//     return 0;

// }




//// how to print the *:
// #include <iostream>
// using namespace std;

// int main(){
//     int n =4;
//     for( int i=1; i<=n; i++){  // outer
//         for( int j=1; j<=n; j++){
//             cout<<"* ";
//         }
//         cout <<endl;

//     }
//     return 0;

// }



///  How to make pattern in ABCD:
// #include <iostream>
// using namespace std;

// int main(){
//     int n =4;
//     for( int i=1; i<=n; i++){  // outer
//         char ch= 'A';
//         for( int j=1; j<=n; j++){
//             cout << ch;
//             ch =ch +1;
            
//         }
//         cout << endl;
       

//     }
//     return 0;

// }


// how to  make patter of numbers:

// #include <iostream>
// using namespace std;

// int main(){
//     int n=3;
//     int num=1;
//     for( int i=0; i<n; i++){  // outer

//         for( int j=0; j<n; j++){
//             cout << num << " ";
//             num++;
            
//         }
//         cout << endl;
       

//     }
//     return 0;

// }

// how to make patter of  ABCD:
// # include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     char ch ='A';
//     for(int i=1; i<n ; i++){
//         for( int j=1; j<n; j++){
//             cout<< ch << " ";
//             ch++;
//         }
//         cout  << endl;
//     }
//     return 0;


// }




/// Tringle Pattern:-
// # include <iostream>
// using namespace std;

// int main(){
//     int n=5;
    
//     for(int i=1; i<n ; i++){
//         for( int j=1; j<i+1; j++){
//             cout<< " * ";
            
//         }
//         cout  << endl;
//     }
//     return 0;


// }


// Easy with numbers:
// # include <iostream>
// using namespace std;

// int main(){
//     int n=5;
    
//     for(int i=0; i<n ; i++){
//         for( int j=0; j<i+1; j++){
//             cout<< (i+1);
            
//         }
//         cout  << endl;
//     }
//     return 0;


// }

///
// # include <iostream>
// using namespace std;

// int main(){
//     int n=5;
    
//     for(int i=0; i<n ; i++){
//         for( int j=1; j<=i+1; j++){
//             cout<< (i+1) << " ";
            
//         }
//         cout  << endl;
//     }
//     return 0;
// }


///Reverse tringle pattern:-
// # include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
    
//     for(int i=0; i<n ; i++){
//         for( int j=i+1; j>0; j--){
//             cout<< j << " ";
            
//         }
//         cout  << endl;
//     }
//     return 0;
// }


//// Floyd Tringle Pattern:-
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     int num =1;
    
//     for(int i=0; i<n ; i++){
//         for(int j=i+1; j>0; j--){
//             cout << num++ << " ";
//         }
//         cout  << endl;
//     }
//     return 0;
// }





/// Floyd Tringle Pattern:- "words ABCD"
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     char ch ='A';
    
//     for(int i=0; i<n ; i++){
//         for(int j=i+1; j>0; j--){
//             cout << ch++ << " ";
//         }
//         cout  << endl;
//     }
//     return 0;
// }



//Inverted Triangle Pattern:-
// # include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     int num =1;
    
//     for(int i=0; i<n ; i++){

//         for( int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for( int j=0; j<n-i;j++){
//             cout <<(i+1);
//         }
//         cout  << endl;
//     }
//     return 0;
// }


// Pyramid Pattern :-
// #include <iostream>
// using namespace std;

// int main(){
//     int n =8;

//     for(int i=0; i<n; i++){
//         //Spaces: n-i-1
//         for(int j=1; j<n-i-1; j++){
//             cout<< " ";
//         }
//         // num1 : i+1
//         for(int j=1; j<=i+1; j++){
//             cout << j;
//         }
//         // num2
//         for(int j=i; j>0; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
// }


/// Hollow Diamond Pattern:
#include <iostream>
using namespace std;

int main(){
    int n=4;

    //top
    for(int i=0; i<n ;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }

     
        cout << "*";

        if(i != 0) {
           //space
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;

    }

    // bottom:

    for(int i=0;i<n-1;i++){
        //space
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";
        if(i!=n-2){
            //spaces
            for(int j=0; j<2*(n-i)-5;j++){
                cout << " ";

            }
            cout<< "*";
        }
        cout <<endl;
    }

    return 0;




}