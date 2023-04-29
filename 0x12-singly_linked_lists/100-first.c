#include <stdio.h>

/**
 * before_main - function before main
 * @void: prints nothing
 * __attribute__((constructor))- prints main after
 */

void __attribute__ ((constructor))before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
