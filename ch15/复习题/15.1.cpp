// 1. 下面建立友元的尝试有什么错误
// a. class snap {
//       friend clasp;
//       ...
//    };
//    class clasp { ... };

// b. class cuff {
//    public:
//          void snip(muff &) { ... }
//          ...
//    };
//    class muff {
//        friend void cuff::snip(muff &);
//        ...
//    };
// c. class muff {
//          friend void cuff::snip(muff &);
//          ...
//    };
//    class cuff {
//    public:
//          void snip(muff &) { ... }
//          ...
//    };

// a. 没有使用class关键字。

// b. cuff类的snip函数使用了 muff& 作为参数，但是cuff类前面没有声明muff类；需要提前声明 class muff。

// c. muff类使用了cuff::snip()作为友元函数，cuff类使用了muff&作为参数，两个类都需要声明到前面，应使用提前声明解决循环依赖问题。 
// 应修改为
// class muff;

// class cuff
// {
// public:
//   void snip(muff &){...};
// };

// class muff
// {
//   friend void cuff::snip(muff &);
// };
