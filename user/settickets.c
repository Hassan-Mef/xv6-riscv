#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Usage: settickets <number>\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  int result = settickets(n);

  if (result < 0)
    printf("Error: settickets failed\n");
  else
    printf("Tickets set to %d\n", n);

  exit(0);
}
