#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
=======
<<<<<<< HEAD
gcc -c *.c
ar rc liball.a *.o
=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
>>>>>>> 2e90ff7 (1. Without libraries what have we? We have no past and no future)
>>>>>>> master
ranlib liball.a
