#include<iostream>
#include<string>

using namespace std;
int N;
string QuadTree[65];

// 1, 0, -1을 반환 : -1일 경우 압축하지 못함.
int isCompress(int y, int x, int size){
    const auto value = QuadTree[y][x];
    for(int i = y; i < y + size; ++i){
        for(int j = x; j < x + size; ++j){
            if(QuadTree[i][j] != value){
                return -1;
            }
        }
    }
    return value == '1' ? 1 : 0;
}

void solution(int y, int x, int size){
    // 기저 조건
    if(size == 1){
        cout << (QuadTree[y][x] == '1' ? 1 : 0);
        return;
    }
    int compress_value = isCompress(y,x,size);
    if(compress_value != -1){
        cout << compress_value;
        return;
    }


    cout << "(";
    // 왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래 
    int mid = size / 2;
    solution(y,x,mid);
    solution(y,x+mid,mid);
    solution(y+mid,x,mid);
    solution(y+mid,x+mid,mid);
    cout << ")";
    
}

void getUserInput(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> QuadTree[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getUserInput();
    solution(0,0,N);
    return 0;
}