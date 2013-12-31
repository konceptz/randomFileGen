randomFileGen
=============

Generates a file full of random data using openSSL


How to compile:
===============

gcc -o RandomFileGenerator RandomFileGenerator.c -lcrypto


Usage:
======

./RandomFileGenerator OutputFilename FileSizeinMB

ex.

./RandomFileGenerator fiveMegs.bin 5

Author
======

Arthur Hinds<br>
July 2013
