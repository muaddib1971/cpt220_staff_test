#include "io.h"
/**
 * This function performs buffer clearing when you detect buffer overflow using
 * fgets
 **/
static void clear_buffer(void) {
    int ch;
    /* reads each char from the input buffer untile the buffer is clearned */
    for (ch = getc(stdin); ch != '\n' && ch != EOF;)
        ;
}
