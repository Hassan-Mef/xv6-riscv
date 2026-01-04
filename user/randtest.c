#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "user/rand.h"

int
main(void)
{
    unsigned long seed = uptime();
    sgenrand(seed);
    printf("Random number up to 100: %ld\n", random_at_most(100));
    exit(0);
}
