#include <iostream>
#include <queue>

using namespace std;

int n, m;
int a[100][100];
bool visited[100][100];

int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    queue<pair<int,int>> q;

    q.push({0,0});
    visited[0][0]=1;

    while(!q.empty())
    {
        pair<int,int> current= q.front();
        q.pop();

        if(current.first==n-1 && current.second==m-1)
        {
            cout <<1;
            return 0;
        }

        for(int i=0;i<4;i++)
        {
            int ny = current.first+dy[i];
            int nx = current.second+dx[i];

            if(ny<0||ny>=n||nx<0||nx>=m) continue;

            if(visited[ny][nx]==1) continue;

            if(a[ny][nx]==0) continue;

            visited[ny][nx]=1;
            q.push({ny,nx});
        }
    }

    cout << 0;
    return 0;
}
