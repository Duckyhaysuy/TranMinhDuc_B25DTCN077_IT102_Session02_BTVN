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
	
	double d1 = (pow(a,2)+sqrt(pow(b,2)+4*a*c))/(2*a);
	double d2 = pow(b,3)/(pow(c,2));
	double d3 = sqrt(fabs(a-b));
	double s = d1-d2+d3;
	
	printf("ket qua = %.2f",s);
	
	return 0;
}
