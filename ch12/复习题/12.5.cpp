// class Golfer
// {
// private:
//     char * fullname; // points to string containing golfer's name
//     int games;       // holds number of golf games played
//     int * scores;    // points to first element of array of golf scores
// public:
//     Golfer();
//     Golfer(const char * name, int g= 0);
//      // creates empty dynamic array of g elements if g > 0
//     Golfer(const Golfer & g);
//     ~Golfer();
// };

// a.
// Golfer nancy;                     // #1 Golfer();
// Golfer lulu(“Little Lulu”);       // #2 Golfer(const char * name, int g= 0)
// Golfer roy(“Roy Hobbs”, 12);      // #3 Golfer(const char * name, int g= 0)
// Golfer * par = new Golfer;        // #4 Golfer()
// Golfer next = lulu;               // #5 Golfer(const Golfer & g)
// Golfer hazzard = “Weed Thwacker”; // #6 Golfer(const char * name, int g= 0)
// *par = nancy;                     // #7 默认赋值运算符
// nancy = “Nancy Putter”;           // #8 Golfer(const char * name, int g= 0) 、 默认赋值运算符

// b.
// 类应该定义一个可以深度复制数据的的赋值运算符。