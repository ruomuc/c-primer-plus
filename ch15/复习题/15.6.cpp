// 三个类的派生关系为：Grand<--Superb<--Magnificent
// 第一个if (ps = dynamic_cast<Superb *>(pg)) 试图将基类转换为派生类，可以转换，所以条件为真
// 第二个if (typeid(*pg) == typeid(Superb)) 仅当 pg 是指向 Superb 类的对象指针时，才为真。