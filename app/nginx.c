

#include <stdio.h>
#include <unistd.h>

#include "ngx_func.h"  //头文件路径，已经使用gcc -I参数指定了
#include "ngx_signal.h"

int main(int argc, char *const *argv)
{             
    printf("begin main\n");    
    myconf();
    mysignal();
    
    /*for(;;)
    {
        sleep(1); //休息1秒
        printf("休息1秒\n");
    }*/
    printf("end main!\n");
    return 0;
}


