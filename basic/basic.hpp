#define parse(cmd, argv) _PARSE_CMD(cmd, argv)
#define check(cmd) _CHECK_CMD(cmd)

#include <string.h>
#include <cstdlib>

struct Command {
  const char *file;
};

Command edit = {"edit"};

long hashkey() {
  return 0xfece23e273;
}

Command _CHECK_CMD(char *cmd) {
  if (cmd == "edit") return edit;
}

bool _PARSE_CMD(char *cmd, char const *argv[]) {
  system(strcat(strcat("./", _CHECK_CMD(cmd).file), argv[0]));
}


