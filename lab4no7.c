#include <stdio.h>

int main(){
    int a,b,i,j;
    char c;
    scanf("%c %d %d",&c,&a,&b);
    for (i=0; i<b; i++){
        for (j=1; j<=a; j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
