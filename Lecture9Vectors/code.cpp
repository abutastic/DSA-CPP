#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec(3,0); // [0, 0, 0]
    vector<int> vec;

    vec.push_back(25); // adds el at last
    vec.push_back(67); // 
    vec.push_back(2); 
    cout << vec.size() << endl; // prints size
    cout << vec.front() << endl; // prints first el
    cout << vec.back() << endl; // prints last el

    vec.pop_back(); // removes value from last 
    cout << vec.at(1) << endl; // prints idx value

    

    // forEach loop
    for(int val : vec){ //
        cout << val << endl;
    }
    return 0;
}