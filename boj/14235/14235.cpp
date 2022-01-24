#include <iostream>
#include <queue>
using namespace std;

int N;
priority_queue<int, vector<int>> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i=0; i<N; i++) {
        int a;
        cin >> a;

        if(a == 0) {
            if(!q.empty()) {
                cout << q.top() << "\n";
                q.pop();
            }
            else {
                cout << "-1\n";
            }
        }
        else {
            for(int j=0; j<a; j++) {
                int b;
                cin >> b;

                q.push(b);
            }
        }
    }
    return 0;
}