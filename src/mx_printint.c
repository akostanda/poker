#include "cards.h"

void mx_printint(int n) {

	if (n < 0)
		mx_printchar('-');
	
	if (n / 10 != 0)
		mx_printint(n / 10);
	
	mx_printchar(n % 10 + 48);
}

