#include <stdio.h>
#include <stdbool.h>

int  main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; ++i) {
        printf("%d\n",argc );
        printf("%s\n",argv[i] );
    }
	return 0;
}