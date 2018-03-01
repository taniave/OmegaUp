#include <bits/stdc++.h>

int main(){
	
	int cont=0,n,k,num;
	
	scanf("%d %d",&n,&k);
	
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num == k)
			cont++;
	}
	
	printf("%d\n",cont);
	/*
	
	int arr[100], cont=0,n,k;

	scanf("%d %d",&n,&k);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
		if(arr[i] == k)
		    cont++;
	}
	
	printf("%d\n",cont);*/
	
	

	

 return 0;
}
