#include <stdio.h>
int main(){
	int length;
	int width;
	printf("Nhap chieu dai:");
	scanf("%d",&length);
	printf("Nhap chieu rong:");
	scanf("%d",&width);
	int perimeter = (length + width) * 2;
	int area = length*width;
	printf ("area = %d\n",area);
	printf ("perimeter = %d",perimeter);
	return 0;
	

}
