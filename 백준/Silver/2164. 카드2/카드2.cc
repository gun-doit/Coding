#include<iostream>
#include<deque>

using namespace std;

int N;
deque<int> Q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i = N; i > 0; i--){
        Q.push_front(i);
    }

    while(Q.size() != 1){
        Q.pop_front();
        Q.push_back(Q.front());
        Q.pop_front();
    }

    cout << Q.front() << endl;

   return 0;
}