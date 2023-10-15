#include<stdio.h>
int main(){
	int arr[]={50,38,100,80,90};
	int s=0;
	for(int i=0;i<5;i++){s=s+arr[i];
	}
	
	float f=(float)s/5;
	printf("%.2f",f);
	return 0;
	
	
	
	
	
	
	
	
	
}
