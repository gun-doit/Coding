//Silver IV
#include <bits/stdc++.h>
using namespace std;

int N;
int TestCase;
vector<int> arr;
int sum = 0;

void solution(int i, int j){
    for(i; i<=j; i++){
        sum += arr[i];
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int k = 0;
    for(int i = 0 ;i<N; i++){
        cin >> k;
        arr.push_back(k);
    }

    cin >> TestCase;
    int n1 = 0, n2 = 0;
    for(int i = 0; i<TestCase; i++){
        cin >> n1 >> n2;
        solution(n1,n2);
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}