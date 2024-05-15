#include<stdio.h>

void main(){
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if ( age < 18 ){
		printf("not eligible for voting...");
	}
	else
		printf("Eligible for Voting...");
}