//Level : Silver II
#include <bits/stdc++.h>
using namespace std;

long N;
int L;
vector<long> result;

bool solution(){
    for(int i = L; i <= 100; i++){
        int k = (i-1)*i/2;
        if((N-k) % i == 0 && (N-k) / i >= 0){
            long n = (N-k) / i;
            for(int j = 0; j < i; j++){
                result.push_back(n++);
            }
            return true;
        }
    }
    return false;
}

void Answer(){
    cin >> N >> L;
    if(solution()){
        for(auto iter : result){
            cout << iter << " ";
        }
    }
    else cout << -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    Answer();
    return 0;

}