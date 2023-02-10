#include<iostream>
#include<string>
using namespace std;

int ans[1001][1001] = {0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string word_1, word_2;
    cin >> word_1;
    cin >> word_2;
    int h = word_1.size();
    int w = word_2.size();


    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=w; j++){
            if(word_1[i-1] == word_2[j-1]){
                ans[i][j] = ans[i-1][j-1] + 1;
            }
            else{
                ans[i][j] = max(ans[i][j-1], ans[i-1][j]);
            }
        }
    }
    cout << ans[h][w];
    return 0;
}