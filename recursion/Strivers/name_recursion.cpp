#include <iostream>
using namespace std;

void printName(int n) {
    // 1. Base Case: Jab n chalte-chalte 0 ho jaye, toh ruk jao
    if (n == 0) {
        return;
    }

    // 2. Small Calculation: Mera kaam hai ek baar naam print karna
    cout << "Sahil" << endl;

    // 3. Recursive Call: Ab baaki bache hue (n-1) baar ke liye recursion ko bol do
    printName(n - 1);
}

int main() {
    int n;
    cout << "Enter how many times to print name: ";
    cin >> n;

    printName(n);

    return 0;
}