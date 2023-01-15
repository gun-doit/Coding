#include<stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    char word[100];
    int ans = 0;

    for (int i = 0; i < T; i++){
        int alphabet[26] = { 0 };
        scanf("%s", word);
        for(int j = 0; word[j]; j++){
            if(word[j] == word[j+1]) continue;
            else alphabet[word[j]-97]++;
        }
        for(int j = 0; j <26; j++){
            if(alphabet[j] > 1) break;
            else{
                if( j == 25 ) ans++;
            }
        }
    }
    printf("%d\n", ans);
}