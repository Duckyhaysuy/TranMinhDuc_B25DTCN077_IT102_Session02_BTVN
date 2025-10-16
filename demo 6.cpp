#include <stdio.h>
int main (){
	int a,b,c,d;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	printf("Nhap so nguyen c:");
	scanf("%d",&c);
	printf("Nhap so nguyen d:");
	scanf("%d",&d);
	
	int gia_tri_bieu_thuc_A = a*b-2*c+3*(a-d);
	
	printf("gia tri bieu thuc A = %d",gia_tri_bieu_thuc_A);
	
	return 0;
}
	
