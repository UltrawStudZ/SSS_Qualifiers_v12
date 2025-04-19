#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 10000; i++) {
        
        int param_1 = i;    
        
        unsigned long local_40;
        char local_38 [40];
        long local_10;
        
        local_38[0] = 0x3c;
        local_38[1] = 0x3c;
        local_38[2] = 0x3c;
        local_38[3] = 0x14;
        local_38[4] = 0x1f;
        local_38[5] = 0x1d;
        local_38[6] = 0x5c;
        local_38[7] = 0x1b;
        local_38[8] = 0x1b;
        local_38[9] = 0x16;
        local_38[10] = 0x30;
        local_38[11] = 0xc;
        local_38[12] = 0x5f;
        local_38[13] = 1;
        local_38[14] = 0x19;
        local_38[15] = 0;
        local_38[16] = 3;
        local_38[17] = 0x1a;
        local_38[18] = 0x1b;
        local_38[19] = 10;
        local_38[20] = 0xb;
        local_38[21] = 0x30;
        local_38[22] = 9;
        local_38[23] = 3;
        local_38[24] = 0x5b;
        local_38[25] = 8;
        local_38[26] = 0x12;
        local_38[27] = 0x6f;
        
        for (local_40 = 0; local_40 < 0x1c; local_40 = local_40 + 1) {
            local_38[local_40] = local_38[local_40] ^ (char)param_1;
        }
        
        if (local_38[0] == 'S')
            printf("You chose flag no. %lld; Here: %s\n", (long long)param_1,local_38);
        
    }

    return 0;
}