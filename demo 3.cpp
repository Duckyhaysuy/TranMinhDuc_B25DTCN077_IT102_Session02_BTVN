#include <stdio.h>
int main (){
	int number_1 = 75, number_2 = 30,sum,sub,multi;
	sub = number_1 - number_2;
	sum = number_1 + number_2;
	multi = number_1 * number_2;
    float division = number_1 / number_2;
	printf("%.2f\n",division);
	printf("%d\n",sum);
	printf("%d\n",sub);
	printf("%d\n",multi);
	return 0;
}
