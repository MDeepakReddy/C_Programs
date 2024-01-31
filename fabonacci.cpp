#include <stdio.h>
int main(){
    int n=0,fab=0,t1=0,t2=1;
	printf("Enter the fabonacci till number: ");
	scanf("%d",&n);
	if(n<0){
		printf("Invalid number");
	}
	else{
		for(int i=0;i<=n;i++){
			printf("%d ",t1);
			fab=t1+t2;
			t1=t2;
			t2=fab;
		}
	}
	return 0;
}
