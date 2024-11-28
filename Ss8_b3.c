#include <stdio.h>

int main(){
	int a;
	printf("nhap so nguyen bat ki : ");
	scanf("%d",&a);
	int arr[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	} 
    return 0;
}
