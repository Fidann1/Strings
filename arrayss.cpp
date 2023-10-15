#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
	
}
int main(){
	int array1[]={1,2,3,5,6};
	int array2[]={-3,0,4,7};
    int  array[9];

    for(int i=0;i<5;i++){array[i]=array1[i];
	}
	   int i=0;
	for(int j=5;j<9;j++) {
		 
	array[j]=array2[i];
	i++;}
	
	for(int m=0;m<9;m++){
		
		for(int n=m+1;n<9;n++){if(array[m]>array[n]) {
		swap(&array[m],&array[n]);}
		}
				
	}	
for(int y=0;y<9;y++)	{printf("%d",array[y]);

}	
	
	return 0;
	
	
	
}
