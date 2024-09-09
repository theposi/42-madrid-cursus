#include "ft_printf.h"

int	main(void) {
	char *string = "Hola Mundo!";

	int printed_characs = ft_printf("My fn: %s\n", string);
	int print = printf("No fn: %s\n", string);
	printf("Own: %d\n", printed_characs);
	printf("Printf: %d\n", print);
	return 0;
}
