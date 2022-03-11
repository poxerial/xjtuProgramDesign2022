#include <stdio.h>
#include <ctype.h>

int main(){
    int upp = 0;
    int low = 0;
    for (int i = 0; i < 9; i++){
        char c;
        scanf("%c", &c);
        if (isalpha(c)){
            if (isupper(c)){upp++;}
            if (islower(c)){low++;}
        }
    }
    printf("大写字母个数=%d\n小写字母个数=%d", upp, low);
    return 0;
}