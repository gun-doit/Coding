#include <bits/stdc++.h>
using namespace std;

int N, M, K;
int grid[16][16] = {0,};
pair<int,int> des = {0,0};

int solution(int x, int y, pair<int,int> des){
    if(x < 0 || y < 0 || x >= N || y >= M ) return 0;
    if(des == make_pair(x,y)) return 1;
    int ans = 0;
    ans += solution(x,y+1,des);
    ans += solution(x+1,y,des);
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    
    cin >> N >> M >> K;
    if(K == 0){
        cout << solution(0,0,make_pair(N-1,M-1)) << "\n";
        return 0;
    }
    else{
        int k = 1;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                if(k == K) des = make_pair(i,j);
                grid[i][j] = k++;
            }
        }
    }


    cout << solution(0,0,des) * solution(des.first,des.second,make_pair(N-1,M-1));


    return 0;
}