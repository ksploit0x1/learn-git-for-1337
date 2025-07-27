#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void zigzag(char *str)
{
	int	i;
	i = 0;

	while(str[i])
	{
		if(i % 2 != 0 && str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] + 32);
		
		else if(i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32);
	
		else
			ft_putchar(str[i]);

	i++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	char *s;
	s = "azertyuiosdfghj11fghj";
	zigzag(s);
}
		
