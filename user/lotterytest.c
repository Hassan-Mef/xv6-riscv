#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  int pid = fork();

  if (pid == 0) {
    // Child B
    settickets(5);
    printf("Child B: tickets=5\n");

    while (1) {
      // busy loop
    }
  } else {
    // Parent A
    settickets(50);
    printf("Parent A: tickets=50\n");

    while (1) {
      // busy loop
    }
  }
}
