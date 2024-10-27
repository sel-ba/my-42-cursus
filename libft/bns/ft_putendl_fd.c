#include "../libft.h"

void ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}

int main()
{
	int fd = open("filenewline", O_RDWR | O_CREAT);
	ft_putendl_fd("ghsjkjh", fd);
}

