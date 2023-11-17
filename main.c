#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	/*char	c = 'a';

	ft_printf("MINE >> %%c: %c\n", 'a');
	printf("%%c: %c\n", 'a');
	ft_printf("MINE >> %%c: %c\n", '=');
	printf("%%c: %c\n", '=');

	ft_printf("MINE >> %%s: %s\n", "Hello World!");
	printf("%%s: %s\n", "Hello, World!");
	ft_printf("MINE >> %%s: %s\n", (char *) NULL);
	printf("%%s: %s\n", (char *) NULL);

	ft_printf("MINE >> %%p: %p\n", NULL);
	printf("%%p: %p\n", NULL);

	ft_printf("MINE >> %%p: %p\n", &c);
	printf("%%p: %p\n", &c);

	ft_printf("MINE >> %%d: %d\n", 48);
	printf("%%d: %d\n", 48);

	ft_printf("MINE >> %%u: %u\n", 48);
	printf("%%u: %u\n", 48);

	ft_printf("MINE >> %%i: %i\n", 48);
	printf("%%i: %i\n", 48);

	ft_printf("MINE >> %%x: %x\n", 255);
	printf("%%x: %x\n", 255);

	ft_printf("MINE >> %%X: %X\n", 255);
	printf("%%X: %X\n", 255);

	ft_printf("MINE >> %% \n");
	printf("%%\n");
*/
	char *str = "salut";
	printf("valeur de retour  = %d\n", ft_printf("salut anyssa je vais tester ton printf %c\t%s\t%%%%%p\t%d\t%i\t%x\t%X\t%p", 0, str, str, INT_MIN, INT_MAX, 3234763, 3234763, NULL));
	printf("valeur de retour  = %d\n", printf("salut anyssa je vais tester ton printf %c\t%s\t%%%%%p\t%d\t%i\t%x\t%X\t%p", 0, str, str, INT_MIN, INT_MAX, 3234763, 3234763, NULL));
	return (0);
}
