#include<iostream>

using namespace std;

char white[101][101] = {0,};

void black(int x, int y){
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            white[x+i][y+j] = 1;
        }
    }
}

int main(){
    int N,size = 0;

    //INPUT
    cin >> N;
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        black(x,y);
    }

    for(int i = 0; i<=100; i++){
        for(int j = 0; j<100; j++){
            if(white[i][j] == 1) size++;
        }
    }

    //OUTPUT
    cout << size << "\n";
}