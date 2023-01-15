#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int,string> a, pair<int,string> b){
    return a.first < b.first;
}
int main(){
    int N;

    //INPUT
    cin >> N;
    vector<pair<int,string>> people;

    for(int i = 0; i<N; i++){
        int age;
        string name;
        cin >> age >> name;
        people.push_back(pair<int,string>(age,name));
    }

    //SORT
    stable_sort(people.begin(), people.end(), cmp);
    //sort 와 stable_sort의 차이점?? 뭐고 시바맂ㄴ짜로
    
    //OUTPUT
    for(int i = 0; i<N; i++){
        cout << people[i].first << " " << people[i].second << '\n';
    }
}