Clear
# gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c ./test/_printf_test.c -o output `
gcc *.c ./test/_printf_test.c -o output `
&& ./output `
&& rm output.exe
