//Gold II
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1001] = {0,};
int ans = 0;
bool visited[1001] = {false,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i = 0; i<N; i++) cin >> arr[i];
    sort(arr,arr+N);
    
    for(int i = 0; i<N;i++){
        if(arr[i] > ans +1) break;
        ans+= arr[i];
    }
    cout << ans +1;
    
    return 0; 
}