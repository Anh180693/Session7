#include<stdio.h>
int timmin(int n, int ary[]){
	int min=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]<min)
		min=ary[i];
	}
	return min;
}

bool KTUOC(int n, int ary[], int m){
	int dem=0;
	for(int i=0;i<n;i++){
		if(ary[i]%m==0){
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

int UCLN(int n,int ary[]){
	int max = timmin(n,ary);
	for(int i=max;i>=1;i--){
		if(KTUOC(n,ary,i)){
				max=i;
				break;
		}
	}
	return max;		
}

int main(){
	int ary[5]={2,4,18,10,8};
	printf("Uoc chung lon nhat cua tat ca cac phan tu trong mang la :  %d",UCLN(5,ary));
}
