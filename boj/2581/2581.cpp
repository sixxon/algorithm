#include <iostream>
using namespace std;

int N, M;
int sum, min_p = 10000;
bool num[10001];

void prime(int n) {
    fill(num, num+n+1, true);
    num[0] = false; num[1] = false;

    for(int i=2; i<=n; i++) {
        for(int j=2; i*j<=n; j++) {
            num[i*j] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    prime(M);

    for(int i=N; i<=M; i++) {
        if(num[i]) {
            sum += i;

            if(min_p > i)
                min_p = i;
        }
    }
    sum ? cout << sum << "\n" << min_p : cout << "-1";

    return 0;
}