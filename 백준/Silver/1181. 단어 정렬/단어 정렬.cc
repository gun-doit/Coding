#include <bits/stdc++.h>

using namespace std;

int N;
vector<string> word;

bool cmp(string p1, string p2){
    if(p1.length() == p2.length()){
        return p1 < p2;
    }
    else return p1.length() < p2.length();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    string p;
    for(int i = 0; i<N; i++){
        cin >> p;
        if(find(word.begin(), word.end(),p) == word.end())
            word.push_back(p);
    }

    sort(word.begin(), word.end(), cmp);
    for(int i = 0; i<word.size(); i++){
        cout << word[i] << "\n";
    }

    return 0;
}