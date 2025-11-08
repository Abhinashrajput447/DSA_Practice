#include <stdio.h>
int main() {
	int n,k,c=1;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    if(a[i]==k){
	        printf("Yes");
	        c=0;
	    }
	}
	if(c)
	printf("No");
}

