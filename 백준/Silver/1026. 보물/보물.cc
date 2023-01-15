#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    vector<vector<int>> array(2);


    //입력
    cin >> N;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<N; j++){
            int n;
            cin >> n;
            array[i].push_back(n);
        }
    }

    int sum = 0;
    for(int i = 0;i<2; i++) sort(array[i].begin(), array[i].end());
    for(int i = 0; i<N; i++){
        sum += array[0][i] * array[1][N-i-1];
    }

    cout << sum << endl;
}