#include<stdio.h>
int timmax(int n, int ary[]){
	int max=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>max)
		max=ary[i];
	}
	return max;
}

void nhapmang(int n,int ary[]){
	printf("Nhap mang :");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
}

void sapxepnhodenlon(int n,int ary[]){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(ary[j]>ary[j+1]){
				int temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}

void sapxeplondennho(int n,int ary[]){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(ary[j]<ary[j+1]){
				int temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}

void xuatmang(int n,int ary[]){
	printf("In mang :");
	for(int i=0;i<n;i++){
		printf("%d , ",ary[i]);
	}
	printf("\n");
}


int main(){
	int mang[8] = {5,10,8,9,17,58,5,1};
	int max=timmax(8,mang);
	printf("max la : %d\n",max);
	xuatmang(8,mang);
	sapxeplondennho(8,mang);
	xuatmang(8,mang);
	sapxepnhodenlon(8,mang);
	xuatmang(8,mang);
}
