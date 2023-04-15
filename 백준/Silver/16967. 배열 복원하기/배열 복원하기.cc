#include <iostream>
#include <vector>
using namespace std;

int H,W,X,Y;
int arr[1001][1001]={0,};
// HxW 의 배열인 a를
// +x, +y로 이동시켜 두 배열을 합친 b를 만듬
// b가 주어질 때 a를 구해라


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> H >> W >> X >> Y;
    for(int i = 0; i<H+X; i++){
        for(int j = 0; j<W+Y; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<=H; i++){
        for(int j = 0; j<=W; j++){
            arr[i+X][j+Y] -= arr[i][j];
        }
    }

    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;
}

