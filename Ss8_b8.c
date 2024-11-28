#include <stdio.h>

int main(){
	int arr[2][2]={{1,2},{3,4}},sum;
	for(int i=0;i<2;i++){
			printf("phan tu duong cheo phu la : %d\n",arr[i][2-1-i]);
			sum=sum+arr[i][i];
	} 
	printf("tong cua duong cheo phu la : %d\n",sum);
    return 0;
}
