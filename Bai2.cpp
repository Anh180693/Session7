#include<stdio.h>

int timmax(int n, int ary[]){
	int max=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>max)
		max=ary[i];
	}
	return max;
}

bool KTSNT(int a){
	int dem=0;
	if(a<2){
		return false;
	}
	for(int i=2;i<a;i++){
		if(a%i==0){
			dem++;
		}
	}
	if(dem==0){
		return true;
	}
	return false;
}

int SNTLN(int n,int ary[]){
	int max = timmax(n,ary);
	for(int i=max;;i++){
		if(KTSNT(i)){
		max=i;
		break;
		}
	}
	return max;
}

int main(){
	int ary[6]={1,18,14,12,14,11};
	printf("So nguyen nho nhat lon hon tat ca cac gia tri trong mang la :  %d",SNTLN(6,ary));
}
