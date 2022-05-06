all:
	rm -rf 0-linear 1-binary 100-jump 102-interpolation 103-exponential 104-advanced_binary 105-jump 106-linear 

0: 0-linear.c
	cp main_files/0-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
	./0-linear
	rm 0-main.c

1: 1-binary.c
	cp main_files/1-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
	./1-binary
	rm 1-main.c

7: 100-jump.c
	cp main_files/100-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump
	./100-jump
	rm 100-main.c

9: 102-interpolation.c
	cp main_files/102-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation
	./102-interpolation
	rm 102-main.c

10: 103-exponential.c
	cp main_files/103-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential
	./103-exponential
	rm 103-main.c

11: 104-advanced_binary.c
	cp main_files/104-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary
	./104-advanced_binary
	rm 104-main.c

12: 105-jump_list.c
	cp main_files/105-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
	./105-jump
	rm 105-main.c

13: 106-linear_skip.c
	cp main_files/106-main.c .
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
	./106-linear
	rm 106-main.c
