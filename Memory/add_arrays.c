#include <stdio.h>

int main(){
    int v1[3], v2[3], v3[3];

    for(int i = 0; i < 3; i++){
        v1[i] = i + 6;
        v2[i] = i + 6;

        v3[i] = v1[i] + v2[i];
    }
    printf("\nResult Arr :\n");
    for(int i = 0; i < 3; i++){
        printf("%d\n", v3[i]);
    }
}