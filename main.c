#include <stdio.h>
#include <stdlib.h>
#include <psl1ght/lv2.h>
#include <io/pad.h>

int main() {
    ioPadInit(7);
    padInfo padinfo;
    padData paddata;

    printf("سلاڤ! ئه ڤه ئێکەم یارییا منە ل سەر PS3\n");

    while(1) {
        ioPadGetInfo(&padinfo);
        if(padinfo.status[0]) {
            ioPadGetData(0, &paddata);
            if(paddata.BTN_START) break; // دهێتەدەر دەما Start دادگری
        }
    }
    return 0;
}
