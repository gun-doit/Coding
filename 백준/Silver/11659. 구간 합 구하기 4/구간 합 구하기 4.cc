//Silver III
#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> sum;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    int k = 0;
    int i, j, m = 0;
    sum.resize(N);
    sum.push_back(0);

    for(m = 1; m<=N; m++){
        cin >> k;
        if(m == 1) sum[1] = k;
        else{
            sum[m] = sum[m-1] + k;
        }
    }

    for(m = 0; m<M; m++){
        cin >> i >> j;
        cout << sum[j] - sum[i-1] << "\n";
    }
    return 0;
}
// 0 1  2  3  4
// 5 9 12 14 15