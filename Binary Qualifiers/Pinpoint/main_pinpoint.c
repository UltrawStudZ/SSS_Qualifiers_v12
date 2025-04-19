
undefined8 main(void)

{
  long in_FS_OFFSET;
  undefined local_19;
  undefined *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  setvbuf(stdout,(char *)0x0,2,0);
  printf("address to write to: ");
  __isoc99_scanf(&DAT_0040083a,&local_18);
  printf("value to write: ");
  __isoc99_scanf(&DAT_0040084f,&local_19);
  *local_18 = local_19;
  if (v == 0x53585353) {
    system("/bin/sh");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}