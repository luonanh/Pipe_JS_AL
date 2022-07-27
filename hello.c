// https://www.youtube.com/watch?v=dhFkwGRSVGk

#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

int main()
{
	fprintf(stdout, "Hello Workd\n");
	fprintf(stderr, "I'm an error!\n");
	return 0;
}
