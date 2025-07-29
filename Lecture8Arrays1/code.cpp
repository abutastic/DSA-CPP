#include <iostream>
using namespace std;

// pass by reference 
int changeArray(int arr[], int size){
    cout << "in function\n";
    for(int i=0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
}

// Linear search (find target)
// basically it says, visit every element one by one linearly and find solution, if not found return somelse
int findTarget(int arr[],int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}


// 2 pointer approach, reverse an array
void reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// function to calculate sum and product of all numbers
int sumProduct(int arr[], int size){
    int sum = 0;
    int product = 1;

    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout << "sum is: " << sum << endl;
    cout << "product is: " << product << endl;

    return 0;
}

// swap max and min of an array
void swapMaxMin(int arr[], int size){
    int maxIndex = 0;
    int minIndex = 0;

    for(int i=1; i<size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    

    swap(arr[maxIndex], arr[minIndex]);
}

void printUnique(int arr[], int size) {
    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        
        // Check if arr[i] appeared before the current index
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;  // Duplicate found
            }
        }
        
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    // int marks[] ={45, 89, 98, 6, 7};
    // int size = 5;

    // int smallest = INT_FAST16_MAX;
    // int largest = INT_LEAST16_MIN;

    // for(int i=0; i<size; i++){
    //     // if(marks[i] < smallest){
    //     //     smallest = marks[i];
    //     // }
    //     smallest = min(marks[i], smallest);
    //     largest = max(marks[i], largest);
    // }

    // smallest num's index
    // int nums[] = {0, 45, 78, 34, 23};
    // int size = 4;

    // int minIndex = 0;

    // for(int i=1; i<size; i++){
    //     if(nums[i] < nums[minIndex]){
    //         minIndex = i;
    //     }
    // }


    // pass by refernce example
    // when we pass an array to another function, we are sending its reference
    // internal arr is stores as address of first element (ex, 100 and continous other values)
    // so we send ref 100, so real changes happens to OG array
    // int arr[] = {1,2,3};

    // changeArray(arr, 3);

    // cout << "in main function";

    // for(int i=0; i<3; i++){
    //     cout << arr[i] << " ";
    // }    
    // cout << sizeof(marks) / sizeof(int) << endl;

    // Linear search (the easiest Algorithm)
    // int arr[] = {46, 89, 4, 3, 1};
    // int size = 5;
    // int target = 9;
    // cout << findTarget(arr, size, target) << endl;


    // 2 pointer approach (v imp)
    // reverse an array (same array)

    // int arr[] = {1,2,3,4,5,6, 7};
    // int sz = 7;
    // reverseArray(arr, sz);
    // for(int i=0; i<sz; i++){
    //     cout << arr[i] << " ";
    // }

    // sum & product
    int arr[] = {2, 3, 100, 1, 1, 3, 2};
    int size = 7;

    printUnique(arr, size);

    return 0;

}

// to print all the unique values in an array
// to print intersection of 2 arrays 