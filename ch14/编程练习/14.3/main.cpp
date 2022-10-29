#include "queuetp.h"

int main()
{
  QueueTp<Worker> q1;
  Worker w1;
  w1.Set();
  q1.enqueue(w1);

  Worker w2;
  q1.dequeue(w2);

  w2.Show();
}
