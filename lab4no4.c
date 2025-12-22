#include <stdio.h>

int main (){
	int i;
	i = 1;
	while (i <= 3){
		printf("Row %d; ",1);
		for (int j =1; j<= 5; j++)
			printf("%3d",j);
		printf("\n");
		i++;
	}
	return 0;
} 	
