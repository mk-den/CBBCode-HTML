#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct bb_config {
//     char *emoticons_text;
//     char *emoticons_url;
// };

int bbcodetohtml_simple(const char *bbcode, char **buffer);
void str_replace(char **buf, unsigned int *buf_size, const char *ptr, size_t ptr_len, const char *substr);
