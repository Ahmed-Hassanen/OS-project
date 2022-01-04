#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#define _GNU_SOURCE

void grep(int file, const char *pattern){
	char *buf, *str;
	int len;
	int count = 0;
	int size = 100;
	buf = (char *)malloc(size*sizeof(char));

	len = read(file, buf, size);

	str = (char *)malloc(len*sizeof(char));

	while(len > 0){
		for(int i=0; i<len; i++){
			str[count] = buf[i];
			count++;
			if (buf[i]=='\n'){
				if (strstr(str, pattern)!=NULL){write(1, str, count);}
				str = (char *)malloc(len*sizeof(char));
				count = 0;
			}
	
		}
		len = read(file, buf, size);
		if (count!=0)
			str = (char *)realloc(str, (count+len)*sizeof(char));
		else
			str = (char *)malloc(len*sizeof(char));
	}
}

int main(int argc, char const *argv[])
{
	char error[100]="wgrep: searchterm [file ...]\n";
	char ferr[100]="wgrep: cannot open file\n";
	int file;
	if (argc < 2){
		for (int i =0; i<100;i++){
			if (error[i]=='\0') break;
			write(1, error+i, 1);
		}
		_Exit(1);
	}

	if (argc == 2){
		grep(0, argv[1]);
	}
	else {
		for(int i=2; i<argc; i++){
			file = open(argv[i], S_IRUSR);
			if (file == -1){
				for(int i=0;i<100;i++){
					if (ferr[i]=='\0') break;
					write(1, ferr+i, 1);
				}
				_Exit(1);

			}
			grep(file, argv[1]);
		}
	}
	return 0;
}