#include <stdio.h>

int main(){
	int arr[2][2]={{1,2},{3,4}},sum;
	for(int i=0;i<2;i++){
			printf("phan tu duong cheo chinh la : %d\n",arr[i][i]);
			sum=sum+arr[i][i];
	} 
	printf("tong cua duong cheo chinh la : %d\n",sum);
    return 0;
}
