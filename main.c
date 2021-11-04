#include "main.h"

/**
 * main - func with infinite loop
 * @ac: argument to main
 * @av: argument to main
 * Return: loop.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
