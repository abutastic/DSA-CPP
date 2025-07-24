// Bitwise operators
// scope of a variable
// Data type modifiers


#include <iostream>
using namespace std;

int main(){

    // bitwise operators
    // bitwise &
    // take both binary forms and add it, everything is 0 only 1+1=1
    int a = 4;
    int b = 12;
    // cout << (a & b) << endl;

    // bitwise | or
    // take both binary forms and add it, only 0+0=0, everything is 1
    int c = 5;
    int d = 8;
    // cout << (c | d) << endl;

    // bitwise XOR ^
    // if bits are same --> 0
    // if bits are different --> 1

    int x = 5;
    int y = 8;
    // cout << (x ^ y) << endl;

    // bitwise left shift <<
    // shift every bit to left by given number
    // (4 << 1) == 1000 == 8
    // cout << (10 << 1) << endl; // 20
    // cout << (10 << 2) << endl; // 40
    // trick  a * 2 pow b

    // bitwise right shift >>
    // cout << (10 >> 1) << endl; // 5
    // cout << (8 >> 2) << endl; // 2
    // trick a/2powb


    // HW
    // cout << (6 & 10) << endl;
    // cout << (6 | 10) << endl;
    // cout << (6 ^ 10) << endl;
    // cout << (10 << 2) << endl;
    // cout << (10 >> 1) << endl;


    // OPERATOR PRECEDENCE
    // in an expression a+b-c*d, what will executed first?
    // the precedence 
    // cout << (8+10-5*4) << endl; // -2

}