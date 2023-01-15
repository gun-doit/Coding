#include<stdio.h>
#include<string.h>

int time(char a){
    switch (a)
    {
    case 'A':
    case 'B':
    case 'C':
        return 3;
    case 'D':
    case 'E': 
    case 'F': 
        return 4;
    case 'G':
    case 'H':
    case 'I': 
        return 5;
    case 'J':
    case 'K':
    case 'L': 
        return 6; 
    case 'M': 
    case 'N': 
    case 'O': 
        return 7; 
    case 'P': 
    case 'Q': 
    case 'R': 
    case 'S': 
        return 8; 
    case 'T': 
    case 'U': 
    case 'V': 
        return 9; 
    default: 
        return 10;
    }
}

int main(void){
    char dial[15];
    scanf("%s", dial);
    int len = strlen(dial);
    int ans = 0;

    for(int i = 0; dial[i]; i++){
        ans += time(dial[i]);    
    }
    printf("%d\n", ans);
}