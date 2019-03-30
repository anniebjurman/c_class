#include <stdio.h>

void start_hello_world(const char *name)
{
  printf("Hello, %s!\n", name);
}

void show_usage(const char *prog)
{
  printf("Usage: %s [-h] <name>\n", prog);
  printf("  -h   Show detailed help\n");
}

int main(int argc, char *argv[])
{
  if (argc == 2) {
    start_hello_world(argv[1]);
  } else {
    show_usage(argv[0]);
  }
  return 0;
}
