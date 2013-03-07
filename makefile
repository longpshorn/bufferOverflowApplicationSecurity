all: compile suid aslr
compile:
	gcc -fno-stack-protector -z execstack bufferOverflow.c -o bufferOverflow  -std=c99
suid:
	sudo chmod 4755 bufferOverflow

aslr:
	sudo sysctl -w kernel.randomize_va_space=0