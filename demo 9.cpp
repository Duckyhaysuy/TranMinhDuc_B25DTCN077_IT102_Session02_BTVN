#include <stdio.h> 
#include <math.h>
int main (){
	int a,b,c;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	printf("Nhap so nguyen c:");
	scanf("%d",&c);
	
	float A = pow(a,3)+pow(b,2)+2*c+sqrt(a+b-c);
	
	printf("ket qua = %.2f",A);
	
	return 0;
}
