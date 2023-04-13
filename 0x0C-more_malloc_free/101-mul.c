#include main.h

/**
  *main - multiplies 2 +ve numbers
  *@argc: n arguments
  *@argv: args
  *Return: int
  */
int main(int argc, cgar *argv[])

{

unsigned long mul;
int i, j;
	if(argc != 3)
	{ printf("Error\n");
		exit (98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (arg[i][j] > 57 || arg [i][j] < 48)
			{ printf("Error\n");
			exit(98); }
		}
	}
	mul = atol(argv[1] *atol(argv[2]);
	printf("5lu\n", mul);
return (0);
}
