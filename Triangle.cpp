// Advika Bhosale
// 24070123007

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 