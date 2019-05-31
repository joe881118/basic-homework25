#include<stdio.h>
#include<stdlib.h>

int main(void){
	int m,n;
	int *ptr[4];
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	
	for(m=0;m<4;m++){
		ptr[m]=array[m];
	}

	for(m=0;m<4;m++){
		for(n=0;n<3;n++){
			printf("%3d", *(ptr[m]+n));
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 
