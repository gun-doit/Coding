#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int N, sum = 0;
    vector<int> num;
    int frequency[8001] = {0,};
    int max_fre = 0, aver = 0;
    vector<int> idx;

    //INPUT
    cin >> N;
    for(int i = 0; i<N; i++){
        int k = 0;
        cin >> k;
        sum += k;
        frequency[k+4000]++;

        if(max_fre < frequency[k+4000]){
            max_fre = frequency[k+4000];
        }

        num.push_back(k);
    }

    aver = round((float)sum/N);
    for(int i = 0; i<=8000; i++){
        if(frequency[i] == max_fre){
            idx.push_back(i-4000);
        }
    }

    sort(num.begin(), num.end());
    if(aver == -0) cout << 0 << endl;
    else cout << aver << endl;
    cout << num[N/2] << endl;
    if(idx.size() >= 2){
        cout << idx[1] << endl;
    }
    else cout << idx[0] << endl;
    cout << num[N-1] - num[0] << endl;
}