# gnlTester (2019+)
Tester for the get next line project of 42 school (with personalized leaks checking on mac, using valgrind on linux)  
Clone this tester in your get_next_line repository. (works on linux and mac, handles sigsegv on all tests, and timeout on mandatory part)  
![alt text](https://i.imgur.com/uupv1UH.png)

# NEW FEATURE!
Now gnl tester support the job flag of Makefile for faster build *in parallel* (instead of building everything sequentially).
to use it you just have to do the following command in your terminal :

On linux terminal:

```sh
  make -j$(nproc) m
```
On mac terminal:
```sh
   make -j$(sysctl -n hw.ncpu) m
```

# Commands
make m = launch mandatory tests  
make b = launch bonus tests  
make a = launch mandatory tests + bonus tests 

make dockerm = launch mandatory tests in linux container  
make dockerb = launch bonus tests in linux container  
make dockera = launch mandatory tests + bonus tests in linux container  
Thanks to gurival- for the docker idea (https://github.com/grouville/valgrind_42)  

You can change the timeout value in Makefile    
![alt text](https://i.imgur.com/jUimpaC.png)  

*FOR RIGOROUS TEST YOU SHOULD RUN ALL TESTS WITH VALGRIND USING LINUX (make docker...)*


# Setup docker in goinfre for 42 mac  
```
rm -rf ~/Library/Containers/com.docker.docker  
rm -rf ~/.docker  
rm -rf /goinfre/${USER}/docker /goinfre/${USER}/agent  
mkdir -p /goinfre/${USER}/docker /goinfre/${USER}/agent  
ln -s /goinfre/${USER}/agent ~/Library/Containers/com.docker.docker  
ln -s /goinfre/${USER}/docker ~/.docker  
```


# Outputs
![alt text](https://i.imgur.com/u4Li6AM.png)  
![alt text](https://i.imgur.com/KL3mc4F.png)  
![alt text](https://i.imgur.com/0AQa9eG.png)  

MOK / MKO = test about your malloc size (this shouldn't be tested by moulinette)  


# Report bugs / Improvement
Contact me on slack or discord : jgambard
