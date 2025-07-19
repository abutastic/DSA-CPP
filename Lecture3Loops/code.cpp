#include <iostream>
using namespace std;

int main() {
//    int letter;
//    cout << "Enter your letter: ";
//    cin >> letter;

//    if(letter >= 'a' && letter <= 'z'){
//     cout << "lowercase";
//    }else if(letter >= 'A' && letter <= 'Z'){
//     cout << "Uppercase";
//    }else{
//     cout << "Please enter a valid alphabet";
//    }

//    if(letter >= 'a' && letter <= 'z'){
//     cout << "lowercase";
//    }else if(letter >= 65 && letter <= 90){
//     cout << "Uppercase";
//    }else{
//     cout << "Please enter a valid alphabet";
//    }

// Ternary Statement
    //  letter >= 0 ? cout << "positive" : cout << "negative";
    // cout << (letter >= 0 ? "positive" : "negative");


// while loops.
//    int i = 1;
//    while(i <= 15){
//     cout << i << " ";
//     i++;
//    }

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;

    // int i = 1;
    // while( i <= n){
    //     cout << i << " ";
    //     i++;
    // }

    // for loop

    // for(int i = 1; i <= 10; i++){
    //     cout << "count: " << i << endl;
    // }

    // sum of numbers from 1 to n
    // int sum = 0;
    // int n = 100;

    // for(int i = 1; i <= n; i++){
    //     sum = sum + i;
    //     if(i == 5){
    //         break;
    //     }
    // }
    // cout << sum << endl;

    // sum of all odd numbers
    int n = 5;
    int sum = 0;

    // for(int i=0; i<=n; i++){
    //     if(i%2!=0){
    //         sum += i;
    //     }
    // }

    for(int i=1; i<=n; i+2){
        sum = sum + i;
    }

 

    cout << sum << endl;

    return 0;
}