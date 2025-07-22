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
    // int n = 5;
    // int sum = 0;

    // int i = 1;
    // while(i<=n){
    //     if(i%2!=0){
    //         sum += i;
    //     }
    //     i++;
    // }
    // cout << sum << endl;

    // prints 1 to N even nums

    // int n = 6;
    // for(int i = 1; i<=n; i++){
    //     if(i%2==0){
    //         cout << i << endl;
    //     }
    // }


    // do-while loop
    // int n = 5;
    // int i = 1;
    // do{
    //     cout << i << " ";
    //     i++;
    // }while(i <= n);


    // prime number
    // for the optimisation, take it from 2 to √n (imp)
    // i <= (n-1) less optimised approach
    // i*i<=n is used so maximum value of i is √n
    // int n = 12;
    // bool isPrime = true;

    // for(int i = 2; i*i<=n; i++){
    //     if(n%i==0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime){
    //     cout << "Its a prime number";
    // } else{
    //     cout << "Its a non-prime number";

    // }

    // Nested loops

    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     int m = 5;
    //     for(int j = 1; j <= m; j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // }

    // sum of nums from 1 to N divisible by 3
    // int n = 10;
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     if(i%3==0){
    //         sum += i;
    //     }
    // }

    // Print factorial of a Number N
   int n = 3;
   int factorial = 1;
   for(int i = 1; i <= n; i++){
    factorial = factorial * i;
   };

   cout << "factorial = " << factorial << endl;
    return 0;
}