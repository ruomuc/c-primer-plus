// 1. 首先 House is a Kitchen 不满足 is-a 公有继承规则。
// 2. House::area()将隐藏 Kitchen::area()。
// 3. House() {all_sq_ft += kit_sq_ft;} 派生类不能直接访问基类的私有成员。