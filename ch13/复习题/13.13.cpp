// a. 如果基类head()为常规非虚方法。
// ph->head() 将调用 Corporation::head()

// b. 如果基类将head()定义为虚方法。
// ph->head() 将调用 PublicCorporation::head()
