// if :-

// #include <iostream>
// using namespace std;

// int main(){
//     int n=45;
//     if (n>=0){
//         cout <<"nis a positive number!"<< endl;

//     }
//     return 0;
// }


// Else:-

// #include <iostream>
// using namespace std;

// int main(){
//     int n=-45;
//     if (n>=0){
//         cout <<"nis a positive number!"<< endl;
//     }else{
//         cout <<"n is nagitive number!"<< endl;
//     }
//     return 0;
// }


// You can vote or not :-
// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout <<"enter your age:";
//     cin >>age;
//     if(age>=18){
//         cout <<"you can vote!";
//     }else{
//         cout<<"you cannot vote!!";
//     }
//     return 0;
// }




// Find the number is odd or even:
// #include <iostream>
// using namespace std;

// int main(){
//     int number;
//     cout << "Enter a number:";
//     cin >> number;
//     if(number%2==0){
//         cout <<"the number is even: " << number << endl;
//     }else{
//         cout <<"the number is odd!";
//     }
//     return 0;

// }


/// if-elseif-else:-
// #include <iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout << "enter a marks: ";
//     cin  >> marks;
//     if (marks>=90){
//         cout<<"a/n";
//     }  else if(marks>=80 &&  marks<90){
//         cout <<"b/n";
//     }else{
//         cout <<"c/n";
//     }
//     return 0;
// }



/// Find character lower or uppercase:
// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "enter any word: ";
//     cin >> ch;
//     if(ch>='a' && ch<='z'){
//         cout <<"the character is lowercas :" << ch <<endl;
//     } else{
//         cout << "the charater is lowercase :" << ch <<endl;
//     }
//     return 0;
// }

// Ternary Statement:-
#include <iostream>
using namespace std;

int main(){
    int n= 45;
    cout <<(n >=0 ? "positive" : "negative") << endl;
    return 0;
}