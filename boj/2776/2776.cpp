#include <iostream>
#include <algorithm>
using namespace std;

int T, N, M;
int note1[1000000], note2[1000000];

bool binary_search(int value) {
    int start = 0, end = N-1;
    int result = 0;

    while(start <= end) {
        int mid = (start+end)/2;

        if(value >= note1[mid]) {
            result = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    return (note1[result] == value ? true : false);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> N;
        for(int j=0; j<N; j++) {
            cin >> note1[j];
        }

        cin >> M;
        for(int j=0; j<M; j++) {
            cin >> note2[j];
        }

        sort(note1, note1+N);

        for(int j=0; j<M; j++) {
            cout << binary_search(note2[j]) << "\n";
        }
    }

    return 0;
}