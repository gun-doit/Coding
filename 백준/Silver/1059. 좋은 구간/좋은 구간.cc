#include <bits/stdc++.h>
#define MAX 51
using namespace std;

int L;
int S[MAX];
int n;

void solution(){
    sort(S, S + L);
    int last = 51;
    int left, right, result = 0;
    for(int i = 0;i<L; i++){
        if(S[i] == n){
            cout << 0 << "\n";
            return;
        }
        if(S[i] > n){
            last = i;
            break;
        }
    }
    if(last == 51){
        cout << 0 << '\n';
        return;
    }

    if(last > 0){
        left = n - 1 - S[last-1];
        right = S[last] - 1 - n;
        result = left + right + (left*right);
    }
    else{
        if(n >= 2){
            left = n - 1;
        }
        else{
            left = 0;
        }
        right = S[0] - 1 - n;
        result = left + right + (left*right);
    }

    cout << result << '\n';
    return;

}

void Answer(){
    cin >> L;
    for(int i=0; i<L; i++) cin >> S[i];
    cin >> n;

    solution();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();
    return 0;
}