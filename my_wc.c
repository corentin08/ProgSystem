#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SSIZE_MAX 1024

int countByte(int fd)
{
	size_t count;
	char buffer[SSIZE_MAX];
	return read(fd,buffer,count)-1;
	
}

void main(int argc, char *argv[])
{
	printf("%d",countByte(STDIN_FILENO));
}
