#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	char *str = "salut";
	printf("valeur de retour  = %d\n", ft_printf("salut anyssa je vais tester ton printf %c\t%s\t%%%%\t%p\t%d\t%i\t%x\t%X\t%p", 0, str, str, INT_MIN, INT_MAX, 3234763, 3234763, NULL));
	printf("valeur de retour  = %d\n", printf("salut anyssa je vais tester ton printf %c\t%s\t%%%%\t%p\t%d\t%i\t%x\t%X\t%p", 0, str, str, INT_MIN, INT_MAX, 3234763, 3234763, NULL));
	return (0);
}
