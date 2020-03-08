#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the timeConversion function below.
 */

/*
 * Please either make the string static or allocate on the heap. For example,
 * static char str[] = "hello world";
 * return str;
 *
 * OR
 *
 * char* str = "hello world";
 * return str;
 *
 */
char* timeConversion(char* s) {
    char* str = s;
    int a, b, c;
    for(int i=0; i<10; i++){
        if(i==0){
          a = str[i] -'0';
        }
        if (i==1) {
          b = str[i] - '0';
        }
        c = a * 10 + b;
        if (i == 8) {
          if(str[i] == 'P'){
            int d = 12 + c;
            char e = d/10 + '0';
            char f = d % 10 + '0';
            if (c != 12) {
              str[0] = e;
              str[1] = f;
            }
          }
          if (str[i] == 'A') {
              if(c == 12){
                str[0] = '0';
                str[1] = '0';
              }
          }
          str[i] = '\0';
          break;
        }
    }
    return str;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
