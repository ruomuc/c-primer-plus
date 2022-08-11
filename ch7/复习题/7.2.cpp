// a
void igor();

// b
float tofu(int i);

// c
double mpg(double a, double b);

// d
long summation(long arr[], int len);
long summation(long *arr, int len); //  *arr 在这里等价于 arr[]
long summation(long *, int len);    // 函数定义，可以省略

// e
double doctor(const char *str);

// f

struct boss
{
  char *name;
};

void ofcourse(boss b);

// g
struct map
{
  int a;
};

char *plot(map *m);