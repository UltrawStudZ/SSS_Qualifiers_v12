I opened the file in Ghidra.

I saw that the flag is printed in ```/dev/null```, but I was unable to read it, so I modifiend in Ghidra the path to ```/tmp/sss``` and I exported the new program.

Than, I runned the program and I verified if ```/tmp/sss``` file had the flag inside.

The flag is: ```SSS{the_more_you_look_the_less_you_actually_see}```.