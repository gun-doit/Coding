//Silver IV
#include <set>
#include<string>
#include <iostream>
using namespace std;

set<string> emotion;
int result = 0;

void solution(string name){
    if(name == "ENTER") emotion.clear();
    else if(emotion.find(name) == emotion.end()){
        result += 1;
        emotion.insert(name);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
    for(int i = 0; i<T; i++){
        string name;
        cin >> name;
        solution(name);
    }

    cout << result << endl;

    return 0;
}