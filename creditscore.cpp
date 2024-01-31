#include <stdio.h>

int main(){
	int n=0,min,sum,y;
	int x[10],p[10];
	scanf("%d",&n);
	for(int i=0; i<n; i++)  
    {  
	    printf("balance - %d : ",i);
        scanf("%d", &x[i]);  
    }  
	
	if(n>=2){
		for(int i=0;i<n-1;i++)
		{
			p[i] = x[i]*x[i+1];
		}
		for(int i=0; i<n-1; i++)  
        {  
            printf("%d  ", p[i]);  
        } 
		for(int j=0;j<n;j++)
		{
			if(min>p[j]){
				min = p[j];
				y = j;
			}	
		}
	}
	sum = x[y]+x[y+1];
	printf("\nThe credit score is %d",sum);
}
