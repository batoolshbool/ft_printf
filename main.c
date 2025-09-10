#include <stdio.h>

#include <stdio.h>

int main()
{
	int i = 6;
	void *j = &i;

	printf("printf:     %p\n", j);
	ft_print_ptr(j);
	printf(" <- ft_print_ptr\n");

	return 0;
}