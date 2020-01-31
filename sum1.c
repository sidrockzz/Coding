#include <stdio.h>

int main(void) {
	int i,sum,minu,sum2;
	for(i=1;i<=100;i++){
	    sum = sum + i*i;
	    sum2 = sum2 + i;
	}
	sum2 = sum2* sum2;
	printf("%d %d\n",sum,sum2);
	minu = sum2 - sum;
	printf("%d",minu);
	return 0;
}

