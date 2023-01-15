//Bronze I
#include <bits/stdc++.h>
using namespace std;

int N;
int borad[1001][1001];
int Coneffi_area[101] = {0,};

void draw(int x, int y, int w, int h, int numbering){
    for(int i = x; i<x+w; i++){
        for(int j = y; j<y+h; j++){
            borad[i][j] = numbering;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i = 1; i<=N; i++){
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        draw(x,y,w,h,i);
    }
    

    for(int i = 0; i<1001; i++){
        for(int j = 0; j<1001; j++){
            if(borad[i][j] > 0){
                Coneffi_area[borad[i][j]]++;
            }
        }
    }

    for(int i = 1; i<=N; i++){
        cout << Coneffi_area[i] << endl;
    }
    return 0;
}