#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M;
int grid[50][50];
bool visited[50][50];

int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

void dfs(int k,int y,int x)
{
    visited[y][x]=true;

    for(int i=0;i<4;i++)
    {
        int ny=y+dy[i];
        int nx=x+dx[i];

        if(ny<0||ny>=N||nx<0||nx>=M) continue;
        if(visited[ny][nx]==1) continue;
        if(grid[ny][nx]<=k) continue;


        
        dfs(k,ny,nx);

    }
}

int main() {
    cin >> N >> M;

    int best_k=0;
    int max_k=0;

    int max_areas=0;


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            max_k=max(grid[i][j],max_k);
        }
    }


    // Please write your code here.
    for(int i=1;i< max_k;i++)
    {
        memset(visited, false, sizeof(visited));
        int areas=0;


        for(int y=0;y<N;y++)
        {
            for(int x=0;x<M;x++)
            {
                if(!visited[y][x] && grid[y][x]>i)
                {
                    areas++;
                    dfs(i,y,x);

                }
            }
        }


        if (areas > max_areas) {  // '>'로 비교해야 동점일 때 가장 작은 K가 유지됨
            max_areas = areas;
            best_k = i;
        }
    }

    if(max_areas==0)
    {
        cout << 1 << ' '<< 0;
        return 0; 
    }

    cout << best_k<<" "<<max_areas;
    return 0;
}
