# os-project
## parallel zip
this is a simple compression tool based on run-length encoding, it do the same like `wzip` except it use threads to make a parallel version of zip <br>
we implement it using locks to achieve mutual exclusion, and producer & consumer method to devide the load between threads in cpu

## test functionality
to test the file we should open terminal. Then, we run the file using these two commands:
`gcc -o pzip pzip.c -Wall -Werror -pthread -O`
`./test-pzip.sh`
