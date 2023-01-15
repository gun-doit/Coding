//Bronze I
#include <iostream>
using namespace std;


bool array[101][101] = {false,};
int ans = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int x, y, x1, y1;
    for(int i = 0; i<4; i++){
        cin >> x >> y >> x1 >> y1;

        for(int j = x; j<x1; j++){
            for(int k = y; k<y1; k++){
                if(array[j][k] == false){
                    array[j][k] = true;
                    ans++;
                }
            }
        }
    }

    cout << ans;
    return 0;
}