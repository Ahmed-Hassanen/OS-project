wgrep:
this is the second function a variant of the UNIX tool it looks inside a file line by line to find  search term in the line defined by the user
if the line has the word specified by the user within it the line is printed if it doesnt have that word it won't be printed out. for example looking for a term foo
in a file called bar.txt
	prompt> ./wgrep match bar.txt
	this line has match in it.
	
	
notes
1-wgrep should be passed a search term and zero or more files to grep through it searches within each line and if the search term is in that line
the line should be printed otherwise skip that line
2-search term is case sensitive for example searching for word lines with Word will not match and rather be skipped only lines with the word Word will be prited out.
3-wgrep work for very long lines it will print the whole line with the search term match on it and only stops if ecountered a new line character"\n"
4-if no arguments passed to wgrep it prints "wgrep: searchterm [file ...]" (then a newline) and exit with return code 1.
5-If wgrep cant open a file it prints "wgrep: cannot open file" (then a newline) and exit with return code 1.
6-in other cases wgrep exit with return code 0.
7-if user didn't specify which file to use with wgrep and a search term is specified the wgrep will read from the standard input as the file stream stdin is already open.
8-if user specified the search term as an empty string wgrep will either print out all lines or no lines




-Wzip
_____

wZIP is a compression and file packaging utility for Unix. Each file is stored in single .zip {.zip-filename} file with the extension .zip.

wzip is used to compress the files to reduce file size and also used as file package utility. zip is available in many operating systems like unix, linux, windows etc.

The type of compression used here is a simple form of compression called run-length encoding (RLE).

For example:
____________

*dddddkkk --> 5d3k

The useing of shell redirection in order to write the compressed output to a file. For example:

prompt> ./wzip file.txt > file.z


-Wunzip
_______

You can use the unzip command to extract (unzip) the file on Linux or Unix-like operating system. 

Unzip is a program to unpack, list, test, and compressed (extract) files and it may not be installed by default.

The wunzip tool simply does the reverse of the wzip tool, taking in a compressed file and writing the uncompressed results. For example:

prompt> ./wunzip file.z


