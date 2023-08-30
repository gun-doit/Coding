//Silver V
#include <iostream>
#include <map>
#include <string>-

using namespace std;

map<string, bool> logdata;

void solution(){
    string name, log;
    cin >> name >> log;

    if(log == "enter"){
        logdata[name] = true;
    }
    else{
        logdata[name] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
    for(int i =0; i<T; i++){
        solution();
    }

    for(auto it = logdata.rbegin(); it != logdata.rend(); ++it)
        if(it->second == true) cout << it->first << "\n";
    return 0;
}