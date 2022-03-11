#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int bo = 0;
    for (int i = 0; i + a <= b; i++){
        if (i+a==1){continue;}
        for (int j = 2;;j++){
            if (i+a==j){
                if (bo==0){
                    printf("%d", i+a);
                    bo=1;
                } else {
                    printf(" %d", i+a);
                }
            }
            if ((i+a)%j==0){break;}
        }
    }
    return 0;
}