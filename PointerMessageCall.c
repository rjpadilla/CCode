#include <stdio.h>

char *msg_from_amy = "Don't call me";

void skip(char *msg)
{
    puts(msg + 6);
}

int main()
{
    skip(msg_from_amy);
}


