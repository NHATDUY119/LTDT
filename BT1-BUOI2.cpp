#include <stdio.h>
#include <stdlib.h>
int a[100][100], n;

void docfile(){
	FILE *f;
	f = fopen("TEST.txt", "r");
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
int ktdonda(){
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		   if(a[i][j]>1)
		   return 0;
	return 1;	
}

int ktgiadt(){
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(i==j)
				if(a[i][j]!=0)
				return 0;	
	return 1;
}
int main(){
	docfile();
	printf("Ma Tran Ke: \n");
	infile();	
	if(ktdoixung()==1)
		if(ktgiadt()==0)
		printf("gia do thi");
		else
		if(ktdonda() == 0)
		printf("Da do thi vo huong");
		else
		printf("Don do thi vo huong");
	
	else
	if(ktdonda() == 0)
		printf("Da do thi co huong");
		else
		printf("Don do thi co huong");
	
}
