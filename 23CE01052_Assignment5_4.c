#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of triangle: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = i; j < (n-1); j++){
            printf(" ");
        }
        for(int j = 0; j < (i+1); j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}