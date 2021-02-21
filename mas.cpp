#include <bits/stdc++.h>//头文件
using namespace std;//命名空间
int main(){
	int n,m;
	 scan("%d %d",&n,&m);
	 int a[n][m];
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<m;j++){
	 		scan("%d",&a[i][j]);
		 }
	 	} 
	 for(int i=0;i<m;i++){
	 	int tMAX=a[0][i],tMAXn=0;
	 	for(int j=1;j<n;j++){
	 		if(tMAX=a[j][i]){
	 			tMAX=a[j][i]; 
	 			tMAXn=j;
			 }
		 }
		 bool check=true;
		 for(int j=0;j<m;j++){
		 	if(a[tMAXn][j]<tMAX&&j!=i){
		 		check=false;
			 }
		 }
	 } 
	 if(check){
	 	printf("%d %d %d",tMAXn+1;i+1,tMAX)
	 }
}


