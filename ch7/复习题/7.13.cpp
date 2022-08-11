struct applicant
{
  char name[30];
  int credit_ratings[3];
};

void f1(applicant *a);
const char *f2(const applicant *a1, const applicant *a2);

typedef void (*p1_fn)(applicant *a);
typedef const char *(*p2_fn)(const applicant *a1, const applicant *a2);

void f1(applicant *a)
{
}

const char *f2(const applicant *a1, const applicant *a2)
{
  return "qwe";
}

int main()
{
  p1_fn p1 = f1;
  p2_fn p2 = f2;

  p1_fn ap[5];
  p2_fn pa[10];
}
