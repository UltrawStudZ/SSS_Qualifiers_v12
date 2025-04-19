undefined8 FUN_004008a1(int param_1,long param_2)

{
int iVar1;

if (param_1 == 2) {
    iVar1 = atoi(*(char **)(param_2 + 8));
    FUN_004006b6(iVar1);
    return 0;
}
FUN_004007af();
                    /* WARNING: Subroutine does not return */
exit(1);
}