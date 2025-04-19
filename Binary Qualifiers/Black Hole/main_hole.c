undefined8 FUN_004007b3(void)

{
  FILE *__s;
  void *__ptr;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = fopen("/tmp/null","wb");
  if (__s == (FILE *)0x0) {
    perror("open");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_004006f6();
  local_28 = 0xf87d834801f84583;
  local_20 = 0x63f845c748e37663;
  __ptr = malloc(0x31);
  if (__ptr == (void *)0x0) {
    perror("malloc");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_0040074a(&DAT_00400960,__ptr,0x31,&local_28,0x10);
  *(undefined *)((long)__ptr + 0x30) = 0;
  fwrite(__ptr,0x30,1,__s);
  fclose(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}