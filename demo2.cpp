#include<stdio.h>

int tinhluythua(int a,int b){
	int S=1;
	for(int i=1;i<=b;i++){
		S=S*a;
	}
	return S;
}

void nhapmang(int n,int ary[]){
	printf("Nhap mang :");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
}

int timmax(int n, int ary[]){
	int max=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>max)
		max=ary[i];
	}
	return max;
}

int timmin(int n, int ary[]){
	int min=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]<min)
		min=ary[i];
	}
	return min;
}

bool KTSNT(int a){
	int dem=0;
	if(a<0){
		return false;
	}
	if(a==0 || a==1){
		return false;
	if(a==2){
		return true;
	}
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
	printf("%d  ",tinhluythua(3,4));
	int mang[7] = {1,3,12,48,6,12,5};
	printf("%d  ",timmax(7,mang));
	printf("%d  ",timmin(7,mang));
	printf("%d  ",SNTLN(7,mang));
	printf("%d  ",UCLN(7,mang));
	printf("%d  ",BCNN(7,mang));
	
}
