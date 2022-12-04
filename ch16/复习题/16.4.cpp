// auto_ptr<int> pia(new int[20]);
// auto_ptr使用 delete 而不是 delete[]，所以只能和 new 一起使用，不能与 new[] 一起使用

// auto_ptr<string> (new string);
// 缺少指针变量名

// int rigue = 7;
// auto_ptr<int>pr(&rigue);
// 智能指针 auto_ptr 必须指向 new 生成的新的内存区域，不能使用已有变量的存储地址。

// auto_ptr dbl (new double);
// 模版缺少模版参数，应修改为 auto_ptr<double> dbl(new double)
