#!/bin/bash
ls *.c | while read F; do gcc -c -o `echo $F | tr ".c" ".o" ` $F; done | sleep 5 && ar -rc liball.a *.o
