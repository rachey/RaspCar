
#include <stdio.h>
#include <unistd.h>
 
int main(int argc, char *argv[])
{
	char szHost[128];
	gethostname(szHost, sizeof(szHost));
	printf("The host name is %s\n", szHost);
	return 0;
}