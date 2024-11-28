#include <stdio.h>

int main(){
	int i,num;
	printf("nhap 1 phan tu bat ki : ");
	scanf("%d",&num);
	int a[5]={1,2,3,4,5}, dem=0;
	for(i=0;i<5;i++){
		if(num==a[i]){
	    	printf("vi tri phan tu trong mang la %d ",i+1);
	    	dem++;
		}
	}
	if(dem==0){
		printf("khong co phan tu trong mang");
	}
	return 0;
}
