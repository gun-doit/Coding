#include<iostream>
#include<vector>
#include<bitset>

using namespace std;

int N, Q, ans = 0;
int xor_domino[200001] = {0,};
int P[200001]= {0,};

int main(){
    int Q_num = 0;
    vector<int> ans;
    

    //입력
    cin >> N >> Q;

    //XOR연산한 값 입력
    for(int i = 1; i<=N-1; i++){
        cin >> xor_domino[i];
    }

    for(int i = 1; i<=N-1; i++){
        P[i] = P[i-1] ^ xor_domino[i];
    }

    //질문 입력
    for(int i = 0; i<Q; i++){
        cin >> Q_num;
        int x,y,z;
        if(Q_num == 0){
            cin >> x >> y;
            ans.push_back(P[x-1] ^ P[y-1]);
        }
        else{
            cin >> x >> y >> z;
            ans.push_back(P[x-1] ^ P[y-1]^ z);
        }
        
    }

    for(int i = 0; i<Q; i++){
        printf("%d\n", ans[i]);
    }
}