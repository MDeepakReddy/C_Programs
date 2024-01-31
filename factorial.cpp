#include <stdio.h>
int main(){
	int n=0,fac=1,m;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n<0){
		printf("Invalid number");
	}
	else{
		for(int i=1;i<=n;i++){
			fac=fac*i;
		}
		printf("%d",fac);
	}
}
