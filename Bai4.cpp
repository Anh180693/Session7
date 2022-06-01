#include<stdio.h>
int timmax(int n, int ary[]){
	int max=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>max)
		max=ary[i];
	}
	return max;
}

bool KTBOI(int n, int ary[], int m){
	int dem=0;
	for(int i=0;i<n;i++){
		if(m%ary[i]==0){
			dem++;
		}
	}
	if(dem==n){
		return true;
	}
	else{
		return false;
	}
}

int BCNN(int n, int ary[]){
	int min = timmax(n,ary);
	for(int i=min;;i++){
		if(KTBOI(n,ary,i)){
			min=i;
			break;
		}
	}
	return min;
}

int main(){
	int ary[5]={1,2,5,4,20};
	printf("Boi chung nho nhat cua tat ca cac phan tu trong mang la :  %d",BCNN(5,ary));
}
