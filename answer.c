#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArr(int r[]){
	int i;
	
	for(i=0 ; i<50 && r[i]>0 ; i++)
		printf("%d ", r[i]);

	printf("\n");
}

int cmpfunc (const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

void jendela(int r[], int size){
	int i, j, k;
	
	int copy[3];
	int konv[50];
	
	memset(konv, -1, 50 * sizeof(konv[0]));
	
	for(i=0 ; i<size-2 ; i++){
		for(j=0 , k=i ; j<=2 ; j++){
			copy[j] = r[k++];
		}
		
		qsort(copy, 3, sizeof(int), cmpfunc);
		konv[i] = copy[1];
	}
		
	memcpy(r, konv, 50);
}

void result(int r[], int size){
	jendela(r, size);
	
	if(size == 3){
		printf("%d", r[0]);
	}
	else if(size == 4){
		printf("%d %d", r[0], r[1]);
	}
	else{
		result(r, size-2);
	}
}

int main(){
	int nilai[50];
	
	memset(nilai, -1, 50*sizeof(nilai[0]));

	int size = 0;
	int count = 0;
	
	char check = ' ';
	
	while(1){
		if(check == ' '){
			scanf("%d%c", &nilai[size++], &check);
			if(size >= 50){
				printf("\nCacah Integer di atas 50 buah");
				return 0;
			}
		}
		else break;
	}
	
	if(size < 3) {
		printf("\n");
		while(count != size){
			printf("%d ", nilai[count]);
			count++;
		}
	}
	else{
		printf("\n");
		result(nilai, size);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
