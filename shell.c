#include "main.h"
int main(int ac, char **av)
{
	(void)av;
	(void)ac;
	
	signal(SIGINT, controlC);
	prompt();
	return (0);
}
