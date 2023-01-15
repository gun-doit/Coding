#include <bits/stdc++.h>
using namespace std;

int N;
int arr[51] = {0,};
int cnt = 0;
int zero = 0;

void div(){
    for(int i = 0; i<N; i++){
        if(arr[i] == -1) continue;
        else arr[i]/=2;
    }
    cnt++;
}

void solution(){
    for(int i = 0; i<N; i++){
        if(arr[i] % 2 != 0 && arr[i] != -1){ arr[i]-=1; cnt++; }
        if(arr[i] == 0){ arr[i] = -1; zero+=1; continue; }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }

    while(zero != N){
        solution();
        if(zero != N) div();
    }
    cout << cnt;

    return 0;
}