#include<stdio.h>

void git(int n);

void firstbranch(int n);

int main(){
	
	printf("Hello git!\n");
	
	printf("Hello git from br1\n");

	return 0;
}

void git(int n){
	if(n){
		printf("I hate git\n");
	}
	else printf("I love git\n");
}

void firstbranch(int n){
	printf("%d is the number you made",n);
}
