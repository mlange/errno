#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    perror("NO ERROR");
    errno = EWOULDBLOCK;
    perror("EWOULDBLOCK");

    exit(0);
}

