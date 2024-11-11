#include <stdio.h>
#include <stdlib.h>
int a[100][100], n;

void docfile(){
	FILE *f;
	f = fopen("TEST2.txt", "r");
	if(f==NULL){
	printf("khong co tap tin");
	exit(0);
}
	else{
		fscanf(f, "%d", &n);
		for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		fscanf(f, "%d", &a[i][j]);
	}
	fclose(f);
}

void infile(){
		for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
		printf("%d  ",a[i][j]);
	printf("\n");
		}
}
int ktdoixung(){
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		if(a[i][j]!=a[j][i])
		return 0;
	return 1;		
}

int bacvohuong(int x){
	int tong = 0;
	for(int i =1 ;i <= n; i++)
	if(x==i)
		tong += a[x][i]*2;
	else
		tong += a[x][i];
	return tong;
}
int ktgiadt(){
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(i==j)
				if(a[i][j]!=0)
				return 0;	
	return 1;
}

int bacvao(int x){
	int tong = 0;
	for(int i=1; i<=n; i++)
	tong += a[i][x];
	return tong;
}
int bacra(int x){
	int tong = 0;
	for(int j=1; j<=n; j++)
	tong += a[x][j];
	return tong;
}
int main(){
		docfile();
	printf("Ma Tran Ke: \n");
	infile();
	int x;
	printf("Nhap dinh can tim bac x = ");
	scanf("%d",&x);
	if(ktdoixung()==1)
		printf("Bac dinh %d la: %d", x, bacvohuong(x));
else{
	printf(" bac vao dinh %d la: %d \n", x, bacvao(x));
		printf(" bac ra dinh %d la: %d", x, bacra(x));
} 

	
}

