#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int K, N;
    vector<int> people;
    vector<int> ans;

    //입력
    cin >> N >> K;
    for(int i = 1; i<= N; i++) people.push_back(i);

    //계산
    int i = 0;
    while(!people.empty()){
        i += K -1;
        if(i == people.size()) i = 0;
        else i = i % (people.size());

        ans.push_back(people[i]);
        people.erase(people.begin()+i);
    }
    
    cout << "<";
    for(int i = 0; i<N-1; i++){
        cout << ans[i] << ", ";
    }cout << ans[N-1];
    cout << ">";
}