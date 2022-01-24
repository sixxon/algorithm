#include <iostream>
#include <algorithm>
using namespace std;

int N;

int main() {
    cin >> N;
    
    for(int i=0; i<N; i++) {
        int arr[10];

        for(int j=0; j<10; j++) {
            cin >> arr[j];
        }
        sort(arr, arr+10);

        cout << arr[7] << "\n";
    }
    return 0;
}