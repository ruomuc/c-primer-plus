// 10
// 4
// 0
// Other: 10, 1
// another(): 10, -4



// // file1.cpp
// #include <iostream>
// using namespace std;
// void other();
// void another();
// int x = 10;
// int y;

// int main()
// {
//     cout << x << endl;
//     {
//         int x = 4;
//         cout << x << endl;
//         cout << y << endl;
//     }
//     other();
//     another();
//     return 0;
// }

// void other()
// {
//     int y = 1;
//     cout << "Other: " << x << ", " << y << endl;
// }

// // file 2.cpp
// #include <iostream>
// using namespace std;
// extern int x;
// namespace
// {
//     int y = -4;
// }

// void another()
// {
//     cout << "another(): " << x << ", " << y << endl;
// }