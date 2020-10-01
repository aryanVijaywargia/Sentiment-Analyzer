#include<stdio.h>

void TOH(int n,char src,char des,char aux){
	
	if(n==0){
		return;
	}
	
	TOH(n-1,src,aux,des);
	printf("Move disc %d  from %c to %c\n",n,src,des);
	TOH(n-1,aux,des,src);
	
	
	
	
}

int main(){ int n;
printf("Enter number of discs\n");
scanf("%d",&n);
TOH(n,'A','C','B');
return 0;
}
