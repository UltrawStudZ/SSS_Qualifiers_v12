I opened the file in Ghidra and I saw a very interesting function (FUN_004006b6.c).

The function ```FUN_004008a1``` calls the previonus function (FUN_004008a1.c).

As it is unclear what values have param_1 and param_2, I've written the following script to test a huge number of possible values for param_1 and param_2 (script_backdoor.c).

The output of the program is:
```
You chose flag no. 111; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 367; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 623; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 879; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 1135; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 1391; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 1647; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 1903; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 2159; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 2415; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 2671; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 2927; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 3183; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 3439; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 3695; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 3951; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 4207; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 4463; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 4719; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 4975; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 5231; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 5487; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 5743; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 5999; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 6255; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 6511; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 6767; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 7023; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 7279; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 7535; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 7791; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 8047; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 8303; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 8559; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 8815; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 9071; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 9327; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 9583; Here: SSS{pr3tty_c0nvoluted_fl4g}
You chose flag no. 9839; Here: SSS{pr3tty_c0nvoluted_fl4g}

...Program finished with exit code 0
```

The final flag is: ```SSS{pr3tty_c0nvoluted_fl4g}```.