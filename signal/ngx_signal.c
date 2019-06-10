

#include <stdio.h>
#include <unistd.h>

void mysignal()
{      
    printf("exec mysignal!\n");
    return ;
}
