#include <stdio.h>
#include <string.h>

typedef struct
{
    char nim[16];
    char nama[52];
    char nilai[8];
} student;

extern int idx, wlen;
extern char cw[52];

void start(char str[]);
void reset();
int eop(char str[]);

void inc(char str[]);

int getlen();
char *getcw();

void modifydata(char str[], student *data);