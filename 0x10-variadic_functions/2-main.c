#include <stddef.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings("; ", 4, "You", "know", "nothing", "Jon Snow");
    print_strings("; ", 1, "You know nothing, Jon Snow");
    print_strings("", 4, "You ", "know ", "nothing, ", "Jon Snow");
    print_strings(NULL, 4, "You ", "know ", "nothing, ", "Jon Snow");
    print_strings("; ", 0);
    print_strings("; ", 4, "You know", "", "nothing", NULL);
    return (0);
    
}
