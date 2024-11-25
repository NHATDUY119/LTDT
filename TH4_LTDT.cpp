#include <iostream> 
#include <queue>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int x,n, a[100][100], d[100], kq;


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

void BFS(int x){
	for(int i =1; i<=n;i++)
	 d[i]=0;	
    queue<int> S;
	 S.push(x);
	  
	 while (!S.empty()) {
       kq=S.front();
         S.pop();
         
       if(d[kq]==0){
	    cout << kq << " ";
		d[kq] = -1;	
	}
	
       	 for (int i = 1; i <= n; i++){
       	 	if(a[kq][i]!=0 && d[i]==0)
       	 	 S.push(i); 
  	 	} 	   	
}
	
}
int main(){
	 docfile();
	printf("Ma Tran Ke: \n");
	infile();
	printf("Nhap dinh can duyet x = ");
	scanf("%d",&x);
	  BFS(x);
 }	
	
