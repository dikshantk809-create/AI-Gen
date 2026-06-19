/// Arrays:-
// #include <iostream>
// using namespace std;

// int main(){
//     int marks[5] = {23, 45, 56, 78, 89};
//     cout <<marks[0] << endl;
//     cout <<marks[1] << endl;
//     cout <<marks[2] << endl;
//     cout <<marks[3] << endl;
//     cout <<marks[4] << endl;
//     return 0;

// }



/// Arrays:-
// Fint smallest/largest in Array
// #include <iostream>
// #include <climits>
// using namespace std;
// //  Smallest in Array
// int  main(){
//     int nums[] ={5,15,22,1,-15,-24};
//     int size = 6;

//     int smallest = INT_MAX; 

//     for(int i=0; i<size; i++){
//         // if(nums[i] < smallest) {
//         //     smallest = nums[i];

//         // }
//         // Different method for this :
//         smallest = min(smallest, nums[i]);
//     }

//     cout << "smallest = " << smallest << endl;
//     return 0;

// }


// Largest in Array
// #include <iostream>
// #include <climits>
// using namespace std;
// //  Largest in Array
// int  main(){
//     int nums[] ={5,15,22,1,-15,-24};
//     int size = 6;

//     int largest = INT_MIN; 

//     for(int i=0; i<size; i++){
//         // if(nums[i] > largest) {
//         //     largest = nums[i];

//         // }
//         // Different method for this :
//         largest = max(largest, nums[i]);
//     }

//     cout << "largest = " << largest << endl;
//     cout <<"index of largest = "<< (nums) << endl;
//     return 0;

// }



// Pass by Reference in Array:



// Linear Search in Array:
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++) {
//         if(arr[i] == target){  // found the target
//             return i;
//         }
//     }
//     return -1; // target not found
// }

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz =7;
//     int target =50;

//     cout << linearSearch(arr, sz, target) << endl;
//     return 0;
// }



/// Reverse an array:
#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
    int start =0, end =sz-1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int sz = 5;

    reverseArray(arr, sz);

    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0;
}