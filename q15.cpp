
#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum;

    cout << "Armstrong numbers between 1 and 500 are: ";

    for (n = 1; n <= 500; n++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == n) {
            cout << n << " ";
        }
    }

    return 0;
}
