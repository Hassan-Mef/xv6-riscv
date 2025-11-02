#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
    printf("Year: %d\n", getyear());
    printf("Read count before read(): %d\n", getreadcount());

    char buf[10];
    read(0, buf, sizeof(buf));   // type something + Enter inside QEMU

    printf("Read count after read(): %d\n", getreadcount());
    exit(0);
}
