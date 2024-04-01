#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int, char **);
int f1(int);
int f2(char *, int);
int f3(char *, int);
int f4(char *, int);
char f5(char *, int);
int f6(char);

int main (int argc, char **argv)
{
  int check_res;
  int length;
  char *param_name;
  char *magic_string = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

  if (argc != 2)
  {
    printf("Usage: %s 6_char_long_name", argv[0]);
    return (1);
  } 

  param_name = argv[1];
  length = strlen(param_name);
  
  check_res = f1(length & 0xffffffff);
  putchar(magic_string[check_res]);

  check_res = f2(param_name, length);
  putchar(magic_string[check_res]);

  check_res = f3(param_name, length);
  putchar(magic_string[check_res]);

  check_res = f4(param_name, length);
  putchar(magic_string[check_res]);

  check_res = f5(param_name, length);
  putchar(magic_string[check_res]);

  check_res = f6(*param_name);
  putchar(magic_string[check_res]);
  
  return (0);
}

int f1 (int length)
{
  return ((length ^ 0x3b) & 0x3f);
}

int f2 (char *name, int length)
{
  uint out = 0;
  int index = 0;

  while (index < length)
  {
    out += (int)(name[index]);
    index++;
  }

  return ((out ^ 0x4f) & 0x3f);
}

int f3 (char *name, int length)
{
  uint out = 1;
  int index = 0;

  while (index < length)
  {
    out *= (int)(name[index]);
    index++;
  }

  return ((out ^ 0x55) & 0x3f);

}

int f4 (char *name, int length)
{
  uint out;
  int max = name[0];
  int index = 0;

  while (index < length)
  {
    if (name[index] > max)
      max = name[index];
    index++;
  }

  srand(max ^ 0xe);
  out = rand();
  return (out & 0x3f);
}

char f5 (char *name, int length)
{
  char out = 0;
  int index = 0;

  while (index < length)
  {
    out += name[index] * name[index];
    index++;
  }

  return ((out ^ 0xef) & 0x3f);
}

int f6 (char n)
{
  int out = 0;
  int index = 0;

  while (index < n)
  {
    out = rand();
    index++;
  }

  return ((out ^ 0xe5) & 0x3f);
}
