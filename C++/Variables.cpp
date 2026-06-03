// variables:- "containers to store data  like a=30"



//integer: {int}
/*#include <iostream>
using namespace std;
int main(){
    int age=25;
    cout << sizeof (age) << endl;
    return 0;

}*/


// char :-
// #include <iostream>
// using namespace std;
// int main(){
    
//     char grade = 'A';
//     cout << grade << endl;
//     return 0;

// }



// //float:-
// #include <iostream>
// using namespace std;
// int main(){
    
//     float PI =3.14f;
//     cout << PI << endl;
//     return 0;

// }



// // bool:-"true or false"
// #include <iostream>
// using namespace std;
// int main(){
    
//    bool isSafe =true;
//     cout << isSafe << endl; //true->1 & false->0
//     return 0;

// }



//double:-"100.99"
// #include <iostream>
// using namespace std;
// int main(){
    
//    double price =100.99;
//     cout << price << endl; //true->1 & false->0
//     return 0;

// }


// Types Casting :-   "converting data from one type to another."
//--->>> Conversion:-

// #include <iostream>
// using namespace std;

// int main(){
//     char grade ='A';
//     int value = grade;
//     cout << value << endl;
//     return 0;
// }


//--->>> Casting:-
// #include <iostream>
// using namespace std;

// int main(){
//     double price =100.99;
//     int newPrice = (int)price;
//     cout << newPrice << endl;
//     return 0;
// }


/// Input in c++:
// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout << "Enter the age :";
//     cin >> age;
    
//     cout << "you age is :" << age << endl;
//     return 0;
    
// }


// Input the price value:
// #include <iostream>
// using namespace std;

// int main(){
//     double price;
//     cout << "enter the price ";
//     cin >> price;

//     cout << "you entered price =" << price <<endl;
//     return 0;


// }




//  Operator:--

//Arithmetic:--> + - * /
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
//     int sum =a+b;
//     cout << sum << endl;
//     return 0;
// }
////--->>> Add:-
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
   
//     cout <<"sum =" <<(a+b) << endl;
//     return 0;
// }

////--->>> Sub:-
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
   
//     cout <<"sub =" <<(a-b) << endl;
//     return 0;
// }

////--->>> mult:-
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
   
//     cout <<"mult =" <<(a*b) << endl;
//     return 0;
// }




////--->>> div:-
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
   
//     cout <<"div =" <<(a/b) << endl;
//     return 0;
// }




////---->>>modulo:-
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
   
//     cout <<"modulo =" <<(a&b) << endl;
//     return 0;
// }





/// All together:

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5 , b=2;
//     cout <<"add =" <<(a+b) << endl;
//     cout <<"sub =" <<(a-b) << endl;
//     cout <<"mult =" <<(a*b) << endl;
//     cout <<"div=" <<(a/b) << endl;
//     cout <<"modulo ="<< (a%b) << endl;
//     return 0;
// }



/// Relational:-- "<" ">" "=>" "<=" "==" "!="
// #include <iostream>
// using namespace std;

// int main(){
//     cout << (3<5) << endl; // true -> 1
//     cout << (3>5) << endl; // false -> 0
//     cout << (3<=5) << endl; // false -> 0
//     cout << (3>=5) << endl; // false -> 0
//     cout << (3==5) << endl; // true  ->1
//     cout << (3!=5) << endl; //
//     return 0;
// }



//// Logical operator : "or -||" "and - &&" "not -!"
// #include <iostream>
// using namespace std;

// int main(){
//     cout << ((3 > 1) || (3<5)) << endl; // or 
//     cout << ((3 > 1) && (3>5)) << endl;  // and
//     cout << ((3 > 1) || (3<5)) << endl;  // not
//     return 0;
// }



//  Sum of 2 numbers:
// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter  a=";
//     cin >>a;

//     cout<<"enter b =";
//     cin>>b;

//     int  sum=a+b;
//     cout<<"sum="<< sum << endl;
//     return 0;
// }



/// unary Operators:-

// -->> Increment ++ :-
//--> Post increment-->>: "a++""
// #include <iostream>
// using namespace std;

// int main(){
//     int a =10;
//     int b = ++a; // update-> kaam
//     cout << "b =" << b << endl;
//     cout <<"a=" << a << endl;
//     return 0 ;

// }



//--> Pre increment-->> : "++a"
#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b = a++; // update-> kaam
    cout << "b =" << b << endl;
    cout <<"a=" << a << endl;
    return 0 ;
    
}


//>>>. Decrement:-
//-->Post decrement:- a--
#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b = a--; // update-> kaam
    cout << "b =" << b << endl;
    cout <<"a=" << a << endl;
    return 0 ;
    
}


//--> Pre decrement:- --a
#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b = --a; // update-> kaam
    cout << "b =" << b << endl;
    cout <<"a=" << a << endl;
    return 0 ;
    
}