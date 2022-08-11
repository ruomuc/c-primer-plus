void set_number(int *start, int *end, int target);

void set_number(int *start, int *end, int target)
{
  for (int *pt = start; pt != end; pt++)
  {
    *pt = target;
  }
}