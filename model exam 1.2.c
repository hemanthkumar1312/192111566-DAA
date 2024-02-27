#include<stdio.h>
int factorrial(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",num);
	if(num<0){
		printf("Enter the positive integer.");
	}
	else{
		printf("The factorial of %d is %d",num,factorial(num));
	}
	return 0;
}
