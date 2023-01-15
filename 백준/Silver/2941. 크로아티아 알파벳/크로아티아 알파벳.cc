#include<stdio.h>
#include<string.h>



int main(void){
    char word[100];
    scanf("%s", word);
    int alphabet[26] = {0};
    int cnt = 0;

    for(int i = 0; word[i]; i++){
        switch (word[i])
        {
        case 'c':
            if(word[i+1] == '=') { cnt++; i++;}
            else if(word[i+1] == '=') { cnt++; i++;}
            else alphabet[word[i]-97]++;
            break;
        case 'd':
            if(word[i+1] == 'z' && word[i+2] == '=') { cnt++; i+=2;}
            else if(word[i+1] == '-') { cnt++; i++;}
            else alphabet[word[i]-97]++;
            break;
        case 'l':
            if(word[i+1] == 'j') { cnt++; i++;}
            else alphabet[word[i]-97]++; 
            break;
        case 'n':
            if(word[i+1] == 'j') { cnt++; i++;}
            else alphabet[word[i]-97]++;
            break;
        case 's':
            if(word[i+1] == '=') { cnt++; i++;}
            else alphabet[word[i]-97]++;
            break;
        case 'z':
            if(word[i+1] == '=' && word[i-1] != 'd') { cnt++; i++;}
            else alphabet[word[i]-97]++;
            break;
        default:
            alphabet[word[i]-97]++;
            break;
        }
    }
    for (int i = 0; i < 26; i++) cnt += alphabet[i];
    
    printf("%d\n", cnt);
}