#include <stdio.h>
#include "pico/stdlib.h"

int main() {
	setup_default_uart();
	printf("Hey you\n");
	return 0;
}

