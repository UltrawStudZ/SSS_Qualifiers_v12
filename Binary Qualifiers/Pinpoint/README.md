I opened in Ghidra and I analysed the binary with GDB (it can be seen in main_pinpoint.c).

As we wat to get to ```system("/bin/sh");```, it is clear that the input is related with the ```v``` variable, which has the address: ```00601058```.

The input is integer, so ```00601058``` in integer is ```6295640```.

The following input will be related with ```0x5358535```, but the variable already has ```0x5358535```.

As the input accepts only two bytes, I thought it will be ```0x2020```, but after this I saw in IDA PRO that only one byte will be used.

Than I used ```6295640``` and ```0x20``` as input. After this, I found out that we need also an integer as second input.

I used the following input: ```6295640``` and ```88```. After this I saw in GDB that the address I was writing was wrong.

As I need to write to a futher possision in the momory to get the ```0x5358535```, I tried to inscrease the address. Using ```6295642``` and ```88``` as input worked, because I need to write to the third byte of the integer that has four bytes.

This is the code with the interaction with the server:
```
$ nc 141.85.224.99 31337

address to write to: 6295642
value to write: 88

ls

bin
boot
core
dev
etc
home
lib
lib64
media
mnt
opt
proc
root
run
sbin
srv
sys
tmp
usr
var

cd home

ls

ctf

cd ctf

ls

flag
pinpoint

cat flag

SSS{aim_for_the_kill}

exit
```

The final flag is: ```SSS{aim_for_the_kill}```.