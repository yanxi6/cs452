/**Update this file with the starter code**/
# include "lab.h"
#include <string.h>


char *get_prompt(const char *env) {
    
    char* res = (char*)malloc(100 * sizeof(char));
    char *custom = getenv("MY_PROMPT");

    if(!custom) {
        // default prompt
        strcpy(res, "shell>");
        return res;
    }
    return res;
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
    for ( ; line[c_k] != '\0'; c_k++) {
        if (line[c_k] == ' ') {
            tmp[c_j] = '\0';
            rval[cnt] = (char*)malloc((c_j + 1) * sizeof(char));
            strcpy(rval[cnt++], tmp);
            c_j = 0;
        } else {
            tmp[c_j] = line[c_k];
            c_j++;

        }
    }
    if(c_j > 0) {
        tmp[c_j] = '\0';
        rval[cnt] = (char*)malloc((c_j + 1) * sizeof(char));
        strcpy(rval[cnt++], tmp);
    }
    rval[cnt++] = NULL;
    return rval;
}

void cmd_free(char ** line) {
    for (int i = 0; i < 10; i ++) {
        free(line[i]);
    }
    free(line);
    return ;
}

char *trim_white(char *line) {
    // ls -a
    int len = strlen(line);
    char* res;
    int i = 0, j = len - 1, k = 0;
    while(i < len && line[i] == ' ') {
        i++;
    }
    while(j >= 0 && line[j] == ' ') {
        j--;
    }
    if (j < i) {
        return "";

    }
    res = (char*)malloc((j - i + 2) * sizeof(char));
    while(i <= j) {
        res[k++] = line[i++];
    }
    res[k] = '\0';
    return res;
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