// a. 没有给str默认值，应将 str 设置为空指针

// b. 将 s 的地址赋值给了 str，str 和 s 指向的同一个字符串。应该先分配内存，在使用 strcpy()复制。

// c. 没有给str分配空间，应该先使用 str = new char[strlen(s)+1] 来分配内存，再使用 strcpy(str,s) 复制字符串。
