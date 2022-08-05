// Version 1
// while (cin.get(ch)) // quit on eof
// {
//       if (ch == ' ')
//              spaces++;
//       if (ch == '\n')
//              newlines++;
// }
//
// Version 2
// while (cin.get(ch)) // quit on eof
// {
//       if (ch == ' ')
//              spaces++;
//       else if (ch == '\n')
//              newlines++;
// }

// 第一种 必然会进行两次条件判断
// 第二种 如果第一个if的表达式为true，就不会再检查第二个 else if 里的表达式