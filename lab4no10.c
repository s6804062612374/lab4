#include <stdio.h>

int main(){
    int n,score,a=0,b=0,c=0,d=0,f=0;
    while (1==1){
        scanf("%d",&score);
        if (score == -1){
            break;
        }
        else if (score>100){
            printf("error");
        }
        else if (score<0){
            printf("error");
        }
        else if (score>=68){
            if (score>=85){
                printf("%d(A)\n",score);
                a++;
            }
            else if (score>=75){
                printf("%d(B)\n",score);
                b++;
            }
            else if (score>=68){
                printf("%d(C)\n",score);
                c++;
            }
        }
        else if (score>=55){
            printf("%d(D)\n",score);
            d++;
        }
        else{
            printf("%d(F)\n",score);
            f++;
        }
    }
    printf("A(%d)\n",a);
    printf("B(%d)\n",b);
    printf("C(%d)\n",c);
    printf("D(%d)\n",d);
    printf("F(%d)\n",f);
    
}
