Link: http://141.85.224.116:8084/.

As it works like: ping 'our input', our input can contain ';' with allows us to send more commands.

After searching a lot in directories I found 'ctf' folder in '/home' directory, which has 'flag' file inside.

I gave the following input: ```-c 0 8.8.8.8; cat /home/ctf/flag``` to read 'flag' file.

The flag is: ```SSS{hey_man_stop_pinging_around}```.