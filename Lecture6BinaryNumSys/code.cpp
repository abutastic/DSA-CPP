#include <iostream>
using namespace std;

int decimal(int decNum){
    int pow = 1;
    int ans = 0;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum/2;
        ans += (rem * pow);
        pow = pow*10;
    }

    return ans;
}

int binary(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem*pow);

        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main(){
    cout << "decimal is = " << binary(110) << endl;
    return 0;
}

