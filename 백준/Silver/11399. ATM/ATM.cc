#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N, sum =0;
    vector<int> order;

    //입력
    cin >> N;
    for(int i = 0 ;i<N; i++){
        int a = 0;
        cin >> a;
        order.push_back(a);
        sum += a;
    }

    //정렬
    sort(order.begin(), order.end());

    int ans = sum;
    for(int i = N-1; i>0; i--){
        sum -= order[i];
        ans += sum;
    }

    //출력
    cout << ans << endl;
}