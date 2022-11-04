1. 为什么没有定义赋值运算符？
> 没有分配动态内存，使用默认的赋值运算符可以正常工作。

2. 为什么要将 showAll() 和 setAll() 定义为虚的？
> 因为这两个方法在派生类和基类的实现不同，定义为虚的可以根据实际对象的类型决定调用哪个实现。否则 
>
> `abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};   for (int i = 0; i < 4; i++)    tri[i]->ShowAll();`   
>
> 这段代码将无法按照预期工作。

3. 为什么要将 abstr_emp 定义为虚基类？

> highfink实现了多重继承，且两个基类又有共同的基类 abstr_emp ；使用虚基类简化  abstr_emp  在 highfink两个基类中的副本。

4. 为什么 highfink 没有数据部分？

> hignfink 继承了 manager 和 fink 类的数据成员，足够描述自己的属性，无需额外的成员属性。

5. 为什么只需要一个operator<< 版本？

> abstr_emp  的 operator<<() 是通过友元实现的，友元无法继承。
