#include <iostream>
#include <vector>
using namespace std;

int N, sum;
vector<int> arr;

int main() {
    cin >> N;

    for(int i=0; i<N; i++) {
        int temp;
        cin >> temp;

        if(temp == 0) {
            arr.pop_back();
        }
        else {
            arr.push_back(temp);
        }
    }

    for(int i=0; i<arr.size(); i++) {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}