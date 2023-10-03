//Level : Gold v
#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> num;
int result = -1;

bool isSquare(int n){
    int root = (int)round(sqrt(n));
	return (root * root == n);
}

int reverse(int n){
    int rev_num = 0;
    while(n > 0){
        rev_num = rev_num * 10 + n % 10;
        n /= 10;
    }
    return rev_num;
}

void solution(){
    for(int x = 0; x < N; x++){
        for(int y = 0; y < M; y++){
            if(isSquare(num[x][y]) && result < num[x][y]) result = num[x][y];
            for(int i = -N; i<N; i++){
                for(int j = -M; j<M; j++){
                    if(i == 0 && j == 0) continue;
                    int k = num[x][y], _k = 0, cnt = 1;
                    while(0 <= x+(i*cnt) && x+(i*cnt) < N && 0 <= y+(j*cnt) && y+(j*cnt) < M){
                        k = k*10 + num[x+i*cnt][y+j*cnt];
                        _k = reverse(k);
                        if(isSquare(k) && result < k) result = k;
                        if(isSquare(_k) && result < _k) result = _k;
                        cnt++;
                    }
                }
            }
        }
    }
    cout << result;
}

void Answer(){
    cin >> N >> M;
    string tmp;
    num = vector<vector<int>>(N+1);
    for(int i = 0; i<N; i++){
        cin >> tmp;
        for(auto j : tmp){
            num[i].push_back(j - '0');
        }
    }
    solution();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    Answer();
    return 0;
}