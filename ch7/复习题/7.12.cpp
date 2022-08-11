#include <iostream>

struct applicant
{
  char name[30];
  int credit_ratings[3];
};

void show(applicant app);
void show2(applicant *app);

void show(applicant app)
{
  std::cout << "name = " << app.name << std::endl;
  for (int i = 0; i < 3; i++)
  {
    std::cout << "credit_ratings = " << app.credit_ratings[i] << std::endl;
  }
}

void show2(applicant *app)
{
  std::cout << "name = " << (*app).name << std::endl;
  for (int i = 0; i < 3; i++)
  {
    std::cout << "credit_ratings = " << (*app).credit_ratings[i] << std::endl;
  }
}

int main()
{
  applicant app = {"qwer",
                   {1, 2, 3}};

  show(app);
  show2(&app);
}