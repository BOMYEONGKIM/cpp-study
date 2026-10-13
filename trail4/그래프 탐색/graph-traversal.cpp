#include <iostream>
#include <vector>

using namespace std;

int n, m;
int from[10000], to[10000];

vector<vector<int>> graph;
vector<int> visited;

int cnt;


void dfs(int current) {
    for (int i = 1; i <= n; i++) {
        if (graph[current][i] == 0 || visited[i] == 1) continue;
        visited[i] = 1;
        cnt++;
        dfs(i);      // visited[i] = 0 으로 되돌리지 않음
    }
}


int main() {
    cin >> n >> m;

    graph.assign(n+1, vector<int>(n+1, 0));
    visited.assign(n+1, 0);

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i];
       graph[from[i]][to[i]]=1;
       graph[to[i]][from[i]]=1;

    }

    // Please write your code here
            visited[1]=1;

   dfs(1);
    cout << cnt;

    return 0;
}
