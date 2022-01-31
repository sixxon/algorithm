#include <iostream>
using namespace std;

int T;
int M, N, K;
bool arr[50][50], visited[50][50];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

void dfs(int m, int n) {
    visited[m][n] = true;

    for(int i=0; i<4; i++) {
        if(m+dx[i] < 0 || m+dx[i] >= M || n+dy[i] < 0 || n+dy[i] >= N)
            continue;
        else if(arr[m+dx[i]][n+dy[i]] && !visited[m+dx[i]][n+dy[i]])
            dfs(m+dx[i], n+dy[i]);
    }
}

int main() {
    cin >> T;

    for(int i=0; i<T; i++) {
        int cabbage = 0;

        cin >> M >> N >> K;

        fill(&arr[0][0], &arr[M-1][N], false);
        fill(&visited[0][0], &visited[M-1][N], false);

        for(int j=0; j<K; j++) {
            int m, n;
            cin >> m >> n;

            arr[m][n] = true;
        }

        for(int j=0; j<M; j++) {
            for(int k=0; k<N; k++) {
                if(arr[j][k] && !visited[j][k]) {
                    dfs(j, k);
                    cabbage++;
                }
            }
        }
        cout << cabbage << "\n";
    }
    return 0;
}