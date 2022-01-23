#include <iostream>
#include <string>
using namespace std;

int N, count;

int main() {
    cin >> N;

    for(int i=1; i<=N; i++) {
        string num = to_string(i);

        if(num.size() <= 2) count++;
        else {
            int diff = num[1]-num[0];

            for(int j=1; j<num.size()-1; j++) {
                if(num[j+1]-num[j] != diff) {
                    count--;
                    break;
                }
            }
            count++;
        }
    }
    cout << count;

    return 0;
}