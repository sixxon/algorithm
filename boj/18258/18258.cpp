#include <iostream>
#include <queue>
#include <string>
using namespace std;

int N;
queue<int> q;

void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    init();
    
    cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++) {
        string op;
        getline(cin, op);

        if(op.substr(0, 4) == "push") {
            q.push(stoi(op.substr(5)));
        }
        else if(op.substr(0, 3) == "pop") {
            if(q.size()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << "-1\n";
        }
        else if(op.substr(0, 4) == "size") {
            cout << q.size() << "\n";
        }
        else if(op.substr(0, 5) == "empty") {
            cout << q.empty() << "\n";
        }
        else if(op.substr(0, 5) == "front") {
            q.size() > 0 ? cout << q.front() << "\n" : cout << "-1\n";
        }
        else if(op.substr(0, 4) == "back") {
            q.size() > 0 ? cout << q.back() << "\n" : cout << "-1\n";
        }
    }
    return 0;
}