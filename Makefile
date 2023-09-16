# LIBCOUTILS by Alexander Abraham 
# a.k.a. "Angel Dollface".
# Licensed under the MIT license.

build: ; gcc tests/tests.c -I lib -o tester
clean: ; rm -rf tester
perm: ; chmod a+x tester