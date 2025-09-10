// #include "ft_printf.h"
// #include <stdio.h>

// int main()
// {
// 	// int i = 157;
// 	// void *j = &i;
// 	// printf("printf:     %p\n", j);
// 	// int b = ft_print_ptr(j);
// 	// printf(" <- ft_print_ptr");
// 	// int a = printf("%p", j);
// 	// printf ("\n\n\n\n%d\n%d", a , b);

// 	// int a = 3125368;
// 	// int b = printf("%i", a);
// 	// printf("\n\n");
// 	// int c = ft_print_digit(a);
// 	// printf("\n\noriginal : %d\nmine :%d\n", b , c);

// 	return 0;
// }

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" // Make sure this header is available and correctly configured

int main(void)
{
    int len1, len2;

    // Character
    len1 = printf("printf:    Char: %c\n", 'A');
    len2 = ft_printf("ft_printf: Char: %c\n", 'A');
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // String
    len1 = printf("printf:    String: %s\n", "Hello, world!");
    len2 = ft_printf("ft_printf: String: %s\n", "Hello, world!");
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Pointer
    void *ptr = (void *)0x1234abcd;
    len1 = printf("printf:    Pointer: %p\n", ptr);
    len2 = ft_printf("ft_printf: Pointer: %p\n", ptr);
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Signed int
    len1 = printf("printf:    Signed int: %d\n", -12345);
    len2 = ft_printf("ft_printf: Signed int: %d\n", -12345);
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Integer using %i
    len1 = printf("printf:    Integer (%%i): %i\n", 54321);
    len2 = ft_printf("ft_printf: Integer (%%i): %i\n", 54321);
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Unsigned int
    len1 = printf("printf:    Unsigned: %u\n", UINT_MAX);
    len2 = ft_printf("ft_printf: Unsigned: %u\n", UINT_MAX);
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Hex lowercase
    len1 = printf("printf:    Hex (lower): %x\n", 305441741);
    len2 = ft_printf("ft_printf: Hex (lower): %x\n", 305441741);
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Hex uppercase
    len1 = printf("printf:    Hex (upper): %X\n", 305441741);
    len2 = ft_printf("ft_printf: Hex (upper): %X\n", 305441741);
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    // Percent sign
    len1 = printf("printf:    Percent: %%\n");
    len2 = ft_printf("ft_printf: Percent: %%\n");
    printf("Lengths -> printf: %d | ft_printf: %d\n\n", len1, len2);

    return 0;
}

/*printf:    Char: A
ft_printf: Char: A
Lengths -> printf: 19 | ft_printf: 19

printf:    String: Hello, world!
ft_printf: String: Hello, world!
Lengths -> printf: 33 | ft_printf: 33

printf:    Pointer: 0x1234abcd
ft_printf: Pointer: 0x1234abcd
Lengths -> printf: 31 | ft_printf: 31

printf:    Signed int: -12345
ft_printf: Signed int: -12345
Lengths -> printf: 30 | ft_printf: 30

printf:    Integer (%i): 54321
ft_printf: Integer (%i): 54321
Lengths -> printf: 31 | ft_printf: 31

printf:    Unsigned: 4294967295
ft_printf: Unsigned: 4294967295
Lengths -> printf: 32 | ft_printf: 24

printf:    Hex (lower): 1234abcd
ft_printf: Hex (lower): 
Lengths -> printf: 33 | ft_printf: 25

printf:    Hex (upper): 1234ABCD
ft_printf: Hex (upper): 
Lengths -> printf: 33 | ft_printf: 25

printf:    Percent: %
ft_printf: Percent: %
Lengths -> printf: 22 | ft_printf: 22
*/