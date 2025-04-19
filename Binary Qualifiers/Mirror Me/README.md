I opened the binary in Ghidra and I saw that the condition ```if (lVar3 == iVar2 * iVar1)``` must be satisfied to access a terminal using ```system("/bin/sh");```.

I also saw that ```lVar3 = max_mirror();```. After analysing the functions used for calculating ```lVal3```, I decided to make my own C script to simulate this process (script_mirror.c).

The result is: ```906609```, so ```lVal3 = 906609```.

I found 2 divisors of 906609: 3 and 302203. So, I runned:
```
$ ./mirror_me                                                               
Insert the corect numbers in order to get the flag
3
302203            
$
```
Now I was able to run commands in the directory of the script.

I decided to connect to the server to get the flag in a similar way:

```
$ nc 141.85.224.99 31338
Insert the corect numbers in order to get the flag
```

```
3
302203
```

```
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
```
```
cd home
```

```
ls
ctf
```
```
cd ctf
```

```
ls
flag
mirror-me
```

```
cat flag
SSS{Mirror_mirror_on_the_wall_who_is_the_fairest_of_them_all}
```

```
exit
```

I found the flag in ```/home/ctf/flag```.

The flag is: ```SSS{Mirror_mirror_on_the_wall_who_is_the_fairest_of_them_all}```.