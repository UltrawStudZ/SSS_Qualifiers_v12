#include <stdio.h>

int check_cond(unsigned long param_1) {
    unsigned long local_30;
    unsigned long local_20;

    local_20 = 0;
    for (local_30 = param_1; local_30 != 0; local_30 = local_30 / 10)
        local_20 = local_30 % 10 + local_20 * 10;

    return local_20 == param_1;
}


int main() {
    unsigned int uVar1;
    unsigned int uVar2;
    
    int iVar3;
    
    unsigned int local_24;
    unsigned int local_20;

    uVar1 = 0;
    for (local_24 = 999; 100 < local_24; local_24 = local_24 - 1) {
        for (local_20 = local_24; 100 < local_20; local_20 = local_20 - 1) {
            uVar2 = local_20 * local_24;
            iVar3 = check_cond(uVar2);
            if ((iVar3 != 0) && (uVar1 < uVar2)) {
                uVar1 = uVar2;
            }
        }
    }
    
    printf("%d",uVar1);

    return 0;
}