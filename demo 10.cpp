#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	printf("Nhap so nguyen c:");
	scanf("%d",&c);
	
	float d1 = sqrt(pow(a,2)+pow(b,2))/(c+1);
	float d2 = (a*b)/c;
	float d3 = sqrt(abs(a-b)+pow(c,2));
	float sum = d1+d2-d3;
	
	printf("ket qua = %.2f", sum);
	
	return 0;
}
