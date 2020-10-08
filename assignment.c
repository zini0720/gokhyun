#include<stdio.h>

void git(int n);

void question();

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

void question(){
	printf("Do you like git?");
}
