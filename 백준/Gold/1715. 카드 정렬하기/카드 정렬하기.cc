#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int N, size = 0, ans = 0;
    vector<int> card;
    vector<int> shuffle1;
    vector<int> shuffle2;
    priority_queue<int, vector<int>, greater<int>> pq;

    //INPUT
    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> size;
        card.push_back(size);
        pq.push(size);
    }

    if(N == 1){
        cout << ans << "\n";
        return 0;
    }
 
    int p = N;
    while(pq.size() != 1){
        int k = pq.top();
        pq.pop();
        k += pq.top();
        pq.pop();

        pq.push(k);
        ans += k;
    }
    cout << ans << "\n";
    return 0;
} 