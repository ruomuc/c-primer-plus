#include <iostream>

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void show_box(box);
void set_box_volume(box *);

int main()
{
  box b = {"china", 1.2, 1.0, 1.0};

  set_box_volume(&b);
  show_box(b);
}

void show_box(box b)
{
  using namespace std;
  cout << "marker = " << b.maker << endl;
  cout << "height = " << b.height << endl;
  cout << "width = " << b.width << endl;
  cout << "length = " << b.length << endl;
  cout << "volume = " << b.volume << endl;
}

void set_box_volume(box *b)
{
  b->volume = b->height * b->width * b->length;
}