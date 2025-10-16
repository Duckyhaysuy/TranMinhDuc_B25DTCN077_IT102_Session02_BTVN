#include <stdio.h>
int main(){
	int a;
	printf("nhap so tu 5 chu so tro xuong:");
	scanf("%d",&a);
	
	int d1 = a%10;
	int d2 = (a/10)%10;
	int d3 = (a/100)%10;
	int d4 = (a/1000)%10;
	int d5 = (a/10000)%10;
	int sum = d1+d2+d3+d4+d5;
	
	printf("day da tach = %d %d %d %d %d\n",d5,d4,d3,d2,d1);
	printf("ket qua = %d",sum);
	
	return 0;
}
