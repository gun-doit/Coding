//Silver III
#include<bits/stdc++.h>
using namespace std;

int N, M;       // 1 <= M <= N <= 8
int arr[9] = {0,};
int array[8] = {1,2,3,4,5,6,7,8};
bool visited[8] = {false,};

void dfs(int cnt)
{
    if(cnt == M)
    {
        for(int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt+1);
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    dfs(0);
    return 0;
}