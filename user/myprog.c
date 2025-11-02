#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    printf("hello, this program is named '%s'\n", argv[0]);
    exit(0);
}
