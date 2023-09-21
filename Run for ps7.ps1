Clear
# gcc *.c ./test/_printf_test.c -o output `
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 ./_*.c ./test/_printf_test.c -o output `
&& ./output `
&& rm output.exe
