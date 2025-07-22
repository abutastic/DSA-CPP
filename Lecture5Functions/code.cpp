// Functions Begin
#include <iostream>
using namespace std;

int printSum(int a, int b){
    int sum = a + b;
    return sum;
}

int returnMin(int a, int b){
    if(a > b){
        cout << "Minimum is : " << b << endl;
    }else{
        cout << "Minimum is : " << a << endl;
    }

    return 0;
}

// calculate sum of numbers from 1 to N
int sumOfNums(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int retFact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }

    return factorial;
}

/* the computer has two types of memories
1 - Stack - used for static allocation
2 - Heap - used for dynamic allocation
Pass by value ex.
The flow how functions are stored in call stack while executing and later removed
*/

// calculate sum of digits of a number
int digitSum(int n){
    int digitSums = 0;
    while(n > 0){
        int lastDigit = n%10;
        n = n/10;
        digitSums += lastDigit;
    }
    return digitSums;
}

// calculate nCr binomial coefficient of n & r
int binomial(int n, int r){
    int factN = 1;
    int factR = 1;
    int factMinus = 1;
    for(int i=1; i<=n; i++){
        factN = factN * i;
    }
    cout << factN << endl;
    for(int i=1; i<=r; i++){
        factR = factR * i;
    }
    cout << factR << endl;

    for(int i=1; i<=n-r; i++){
        factMinus = factMinus * i;
    }
    cout << factMinus << endl;
    return factN/(factR*factMinus);
}
int main(){
    cout << "The binomial is : " << binomial(6, 2) << endl;
    return 0;
}

// WAF to check if a number is prime or not.
// WAF to print all prime numbers from 2 to N.
// WAF to print nth fibonacci.