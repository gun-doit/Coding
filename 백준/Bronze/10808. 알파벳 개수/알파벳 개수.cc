#include<bits/stdc++.h>
#include<string>
int main(){
    std::string word;
    int alpha[26] = {0,};
    std::cin >> word;
    
    for(int i = 0; i<word.size(); i++){
        alpha[word[i] - 'a']++;
    }
    
    for(int i = 0; i<26; i++){
        printf("%d ", alpha[i]);
    }
}