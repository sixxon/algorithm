#include <iostream>
#include <string>
#include <vector>
using namespace std;

void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    init();
    
    while(1) {
        string temp;
        vector<char> p;
        bool check = true;

        getline(cin, temp);
        if(temp.size() == 1 && temp[0] == '.')
            break;

        for(int i=0; i<temp.size(); i++) {
            if(temp[i] == '(' || temp[i] == '[') {
                p.push_back(temp[i]);
            }
            else if(temp[i] == ')' || temp[i] == ']') {
                if(p.size() > 0 && ((p.back() == '(' && temp[i] == ')') || (p.back() == '[' && temp[i] == ']'))) {
                    p.pop_back();
                }
                else {
                    check = false;
                    break;
                }
            }
        }

        cout << (check && p.size() == 0 ? "yes\n" : "no\n");
    }

    return 0;
}