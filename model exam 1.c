#include<stdio.h>
int binomialco(int n,int k){
	if(k>n){
		return 0;
	}
	if(k==0||k==n){
		return 1;
	}
	return binomialco(n-1,k-1)+binomialco(n-1,k);
}
int main(){
	int n,k;
    printf("enter the values of n and k:");
    scanf("%d%d",&n,&k);
    printf("value of %dC%d is %d",n,k,binomialco(n,k));
    return 0;
}
