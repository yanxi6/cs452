/**Update this file with the starter code**/
# include "lab.h"
#include <string.h>


char *get_prompt(const char *env) {
    return NULL;
}

int change_dir(char **dir) {
    return 0;
}

char **cmd_parse(char const *line) {
    // cmd_parse("ls -a -l");
    int len = strlen(line);
    char ** rval = (char** )malloc(10 * sizeof(char*));
    char tmp[10];
    int c_k = 0;
    int c_j = 0;
    int cnt = 0; // c_k: line; c_j: tmp count
    for ( ; line[c_k] != '/0'; c_k++) {
        if (line[c_k] == ' ') {
            tmp[c_j] = '/0';
            rval[cnt] = (char*)malloc(3 * sizeof(char));
            strcpy(rval[cnt], "ls");
            c_j = 0;
            cnt++;
        } else {
            tmp[c_j] = line[c_k];
            c_j++;

        }

    }
    rval[cnt++] = NULL;
    return rval;
}


void cmd_free(char ** line) {
    return ;
}

char *trim_white(char *line) {
    return NULL;
}

bool do_builtin(struct shell *sh, char **argv) {
    return true;
}

void sh_init(struct shell *sh) {
    return ;
}

void sh_destroy(struct shell *sh) {
    return ;
}

void parse_args(int argc, char **argv) {
    return ;
}