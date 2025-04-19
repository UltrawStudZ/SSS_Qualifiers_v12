After opening the binary in Ghidra I discovered:
```
                            part20
    00601038 64              undefined1 64h
                            part0
    00601039 53              undefined1 53h
                            part24
    0060103a 6f              undefined1 6Fh
                            part18
    0060103b 6f              undefined1 6Fh
                            part3
    0060103c 7b              undefined1 7Bh
                            part27
    0060103d 7d              undefined1 7Dh
                            part11
    0060103e 6f              undefined1 6Fh
                            part13
    0060103f 5f              undefined1 5Fh
                            part23
    00601040 6c              undefined1 6Ch
                            part12
    00601041 66              undefined1 66h
                            part14
    00601042 74              undefined1 74h
                            part21
    00601043 5f              undefined1 5Fh
                            part9
    00601044 70              undefined1 70h
                            part26
    00601045 6b              undefined1 6Bh
                            part17
    00601046 5f              undefined1 5Fh
                            part25
    00601047 63              undefined1 63h
                            part15
    00601048 68              undefined1 68h
                            part6
    00601049 63              undefined1 63h
                            part7
    0060104a 68              undefined1 68h
                            part22
    0060104b 62              undefined1 62h
                            part2
    0060104c 53              undefined1 53h
                            part8
    0060104d 69              undefined1 69h
                            part5
    0060104e 5f              undefined1 5Fh
                            part19
    0060104f 6c              undefined1 6Ch
                            part4
    00601050 61              undefined1 61h
                            part16
    00601051 65              undefined1 65h
                            part1
    00601052 53              undefined1 53h
                            part10
    00601053 5f              undefined1 5Fh
```
I combined the parts and the result is: ```0x53 0x53 0x53 0x7B 0x61 0x5F 0x63 0x68 0x69 0x70 0x5F 0x6F 0x66 0x5F 0x74 0x68 0x65 0x5F 0x6F 0x6C 0x64 0x5F 0x62 0x6C 0x6F 0x63 0x6B 0x7D```.

I took the hex values and I [transformed](https://gchq.github.io/CyberChef/#recipe=From_Hex('Auto')&input=MHg1MyAweDUzIDB4NTMgMHg3QiAweDYxIDB4NUYgMHg2MyAweDY4IDB4NjkgMHg3MCAweDVGIDB4NkYgMHg2NiAweDVGIDB4NzQgMHg2OCAweDY1IDB4NUYgMHg2RiAweDZDIDB4NjQgMHg1RiAweDYyIDB4NkMgMHg2RiAweDYzIDB4NkIgMHg3RA) them in ASCII characters.

The flag is: ```SSS{a_chip_of_the_old_block}```.