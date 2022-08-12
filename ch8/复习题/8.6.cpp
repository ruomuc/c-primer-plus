// a.
double mass(double d, double v = 1.0);

// b.
void repeat(int n, char *s);
void repeat(char *s);

// c.
int average(int x, int y);
double average(double x, double y);

template <typename T>
T average(T x, T y);

// d. 无法实现，char 和 char* 的特征标相同。