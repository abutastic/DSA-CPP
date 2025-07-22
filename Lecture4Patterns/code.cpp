#include <iostream>
using namespace std;

int main() {
    // printing numbers/stars
    // int n = 4;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << "*" << " ";        
    //     }
    //     cout << endl;
    // }

    // printing characters
    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for(int j = 0; j < n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    //printing continous numbers
    // int n = 4;
    // int num = 1;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // character continous
    // int n = 3;
    // char ch = 'A';
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // cout << "after pattern : " << ch << endl;

    // Triangle stars (own appraoch)
    // int n = 7;
    // int k = 1;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= k; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //     k++;
    // }

    // standard approach
    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i + 1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Triangel numbers
    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << i+1 << " ";
    //     }

    //     cout << endl;
    // }


    // character triangle
    // int n = 5;
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << ch;
    //         // ch++;

    //     }
    //     cout << endl;
    //     ch++;
    // }


    // numbers starting same every line (Triangle)
    // int n = 4;
    // for(int i = 0; i < n; i++){      
    //     for(int j = 1; j <=i+1; j++){
    //         cout << j;

    //     }
    //     cout << endl;
    // }

    // reverse numbers triangle
    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1 ; j > 0 ;j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Floyed's Triangle Pattern
    // int n = 4;
    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<(i+1); j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Floyed's TRiangle HW chars
    // int n = 4;
    // char ch = 'A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<(i+1); j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }


    // character reversed
    // int n = 5;
    // for(int i=0; i<n; i++){
    //     char ch = 'A' + i;
    //     for(int j=0; j<=i; j++){
    //         cout << ch << " ";
    //         ch--;
    //     }
    //     cout << endl;
    // }

    // print in reverse (nums + i+1)
    // int n = 6;
    // char ch = 'A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // Puramid
    int n = 4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j<(i+1); j++){
            cout << j+1;
        }
        for(int j=i; j>0; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}