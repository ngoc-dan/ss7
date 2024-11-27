#include <stdio.h>
int main(){
	int n=5;
	int a[n]={4,8,3,6,7};
	for(int i=0;i<=n-1;i++){
	if(a[i]%2==0){
		printf("%d ",a[i]);
	}
}
return 0;
}

