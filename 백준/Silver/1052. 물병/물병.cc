#include <iostream>
#include <bitset>
using namespace std;

int N, K;
int ans;
bitset<32> bottle;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;
    while(bitset<32>(N).count() > K){
        N++;
        ans++;
    }

    cout << ans;
}