#include "lists.h"
/**
 * before_main - add a text before the main
 * Return: void
 */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
