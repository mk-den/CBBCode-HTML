#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct bb_config {
//     char *emoticons_text;
//     char *emoticons_url;
// };

int bbcodetohtml(const char *bbcode,char *buffer, int buffer_size);
char *str_replace(char *str, const char *ptr, size_t ptr_len, const char *substr);
