#include <stdlib.h>
#include <stdio.h>
int main(){
	int n,x,y,r;
	int i,j,k;
	int *input;
	scanf("%d",&n);
	int b[n],a[n];
	if(n>0){
		printf("Enter the values: ");
		input=(int*)malloc(n*sizeof(int));  
    }
    else{
    	printf("Invalid Entry");
	}
	for(x=0;x<n;++x){
		scanf("%d",input+x);
		b[x]=*(input+x);
	}
	for(i=0;i<n;++i){
		a[i]=b[i];
	}
	for(j=0;j<n;++j){
		for(k=0;k<n;++k){
			if(a[j]<a[k]){
			    y=a[j];
				a[j]=a[k];
				a[k]=y;	
			}
		}
	}
	for(int l=0;l<n;++l){
		printf("%d",a[l]);
	}
	for(int s=0;s<n;++s){
	    if(a[s]==b[s]){
		    r=1;
	    }
	    else{
		    r=0;
	    }
    }
    if(r==1){
    	printf("\nbad");
	}
	else{
		printf("\ngood");
	}
	free(input);
	return 0;
}

