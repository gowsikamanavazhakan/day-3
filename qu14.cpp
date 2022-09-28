#include <iostream>
using namespace std;

int main() {
    int n, i,c=0;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            c++;
    }
    cout<<c;

    return 0;
}
