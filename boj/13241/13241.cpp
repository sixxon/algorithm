#include <iostream>
using namespace std;

long long A, B;

long long gcd(long long a, long long b) {
    return ( a%b ? gcd(b, a%b) : b);
}

int main() {
    cin >> A >> B;
 
    if(A > B) {
        cout << A * B / gcd(A, B);
    }
    else {
        cout << A * B / gcd(B, A);
    }
    return 0;
}