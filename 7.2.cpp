#include<stdio.h>
 int main(){
 	
int a,b,c,d,e,n=5;
 printf("nhap so a ");
 scanf("%d", &a);
 printf("nhap so b ");
 scanf("%d", &b);
 printf("nhap so c ");
 scanf("%d", &c);
 printf("nhap so d ");
 scanf("%d", &d);
 printf("nhap so e ");
 scanf("%d", &e);
 int t[5]={a,b,c,d,e};
 for(int i=0 ; i<n ; i++){
		printf("%d ",t[i]);
}
return 0;
}
