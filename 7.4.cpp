#include<stdio.h>
 int main(){
 	
int n;
printf("nhap so n ");
 scanf("%d", &n);
 int t[n]={};
 for(int i=0;i<=n-1;i++){
 	printf("cac phan tu la :  ", i);
	scanf("%d",&t[i]);	  
 }
 for(int i=0 ; i<n ; i++){
		printf("%d ",t[i]);
}
return 0;
}
