

```shell
$ ./3_1_stdin_offset.o < /etc/passwd
Seek OK
$ cat < /etc/passwd | ./3_1_stdin_offset.o
Can't seek
```

