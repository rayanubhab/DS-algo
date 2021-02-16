#include <stdio.h>

int main() {
	//code
	int tc,t,n,i,d,j,k,temp;
	scanf("%d",&tc);
	for(t=0;t<tc;t++){
	    scanf("%d",&n);
	    int a[2000];
	    for(i=0;i<n;i++){
	        
	        scanf("%d",&a[i]);
	    }
	   
	    scanf("%d",&d);
	    for(j=1;j<=d;j++){
	        temp=a[0];
	        for(k=0;k<n-1;k++){
	        a[k]=a[k+1];
	            
	        }
	        
	        a[k]=temp;
	        
	        
	        
	    }
printf("\n");

for(i=0;i<n;i++){
    
    printf(" %d ",a[i]);
    
}
	    
	    
	    
	    
	    
	    
	    
	}
	return 0;
}
