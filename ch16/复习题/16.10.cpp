// TooBig<int>(10)返回一个匿名函数对象，TooBig<int>(10)(15)调用了该函数对象的operator()方法，参数是15。
// 所以结果是 15>10 为true。