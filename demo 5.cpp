#include <stdio.h>
int main(){
	int a;
	int b;
	float c;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	printf("Nhap so thuc c:");
	scanf("%f",&c);
	
	float tong_thuc_3_so = a+b+c;
	int tong_phan_nguyen_3_so = a+b+ (int)c;
	
	printf("tong thuc 3 so = %.2f\n",tong_thuc_3_so);
	printf("tong phan nguyen 3 so = %d",tong_phan_nguyen_3_so);
	
	return 0;
}
