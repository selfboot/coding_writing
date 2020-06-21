


反汇编器可以根据机器代码产生一种类似汇编代码的格式。

```
objdump -d mstore.o

mstore.o:	file format Mach-O 64-bit x86-64

Disassembly of section __TEXT,__text:
_multStore:
       0:	55 	pushq	%rbp
       1:	48 89 e5 	movq	%rsp, %rbp
       4:	53 	pushq	%rbx
       5:	50 	pushq	%rax
       6:	48 89 d3 	movq	%rdx, %rbx
       9:	e8 00 00 00 00 	callq	0 <_multStore+0xe>
       e:	48 89 03 	movq	%rax, (%rbx)
      11:	48 83 c4 08 	addq	$8, %rsp
      15:	5b 	popq	%rbx
      16:	5d 	popq	%rbp
      17:	c3 	retq
```



