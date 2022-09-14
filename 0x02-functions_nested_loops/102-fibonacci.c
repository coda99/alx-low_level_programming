#include "main.h"

int main(){
	unsigned long a;
	unsigned long b;
	unsigned long temp, n;
	a=1;
	b=2;
	while(n <= 50){
		temp = a + b;
		a = b;
		b = temp;
		_putchar(',');
		_putchar(' ');
		_putchar(a + '0');
		n--;
	}
	return(0);
}
