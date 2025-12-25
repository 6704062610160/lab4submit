#include<stdio.h>
int main(){
	int n,m,i,j;
	char a;
	scanf("%c %d %d",&a,&n,&m);
	
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			printf("%c",a);
		}
		printf("\n");
	}
}
