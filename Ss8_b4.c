#include <stdio.h>
 int main(){
 	int number[2][2]={{1,5},{3,6}},max,min;
 	max=number[0][0];
 	min=number[0][0];
 	for(int i=0; i<2; i++){
 		for(int j=0; j<2; j++){
 			if(number[i][j]>max){
 			max=number[i][j];
		 }
		 if(number[i][j]<min){
		 	min=number[i][j];
		 }
		 }
	 }
	 printf("so lon nhat la : %d\n ", max);
	 printf("so nho nhat la : %d\n ", min);
 	 return 0;
 }
