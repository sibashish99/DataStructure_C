#include<stdio.h>
int isPrime(int num){
	int i,flag=0;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
		}
	}
	if(flag==0)
	   return 1;
	else
	   return 0;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
	 if(i==1)
	    continue;
	  if(isPrime(i)==1)
		printf("%d ",i);
	}
	
	
}
