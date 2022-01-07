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


