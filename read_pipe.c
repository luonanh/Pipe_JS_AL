// https://www.youtube.com/watch?v=dhFkwGRSVGk

#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

int main()
{
	int fd = open("anhpipe", O_RDONLY);
	char c;

	while (read(fd, &c, 1) > 0)
		printf("%c", toupper(c));

	close(fd);
	return 0;
}
