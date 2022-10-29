#ifndef QUEUETP_H_
#define QUEUETP_H_

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Worker
{
private:
  string fullname;
  long id;

protected:
  void Data() const;
  void Get() const;

public:
  Worker() : fullname("no one"), id(0L){};
  Worker(const string &s, long n) : fullname(s), id(n){};
  ~Worker(){};

  void Set();
  void Show() const;
};

void Worker::Set()
{
  cout << "Enter worker's name: ";
  getline(cin, fullname);
  cout << "Enter worker's id: ";
  cin >> id;
};

void Worker::Show() const
{
  cout << "Name: " << fullname << endl;
  cout << "ID: " << id << endl;
};

template <class T>
class QueueTp
{
private:
  enum
  {
    Q_SIZE = 10
  };
  struct Node
  {
    T item;
    Node *next;
  };

  Node *front;
  Node *rear;
  int items;
  const int qsize;
  QueueTp(const QueueTp &q) : qsize(0){};
  QueueTp &operator=(const QueueTp &q) { return *this; };

public:
  QueueTp(int qs = Q_SIZE) : qsize(qs)
  {
    front = rear = nullptr;
    items = 0;
  };

  ~QueueTp()
  {
    Node *temp;
    while (front != nullptr)
    {
      temp = front;
      front = front->next;
      delete temp;
    }
  };

  bool isempty() const;
  bool isfull() const;
  int queuecount() const;
  bool enqueue(const T &item);
  bool dequeue(T &item);
};

template <class T>
bool QueueTp<T>::isempty() const
{
  return items == 0;
}

template <class T>
bool QueueTp<T>::isfull() const
{
  return items == qsize;
}

template <class T>
int QueueTp<T>::queuecount() const
{
  return items;
}

template <class T>
bool QueueTp<T>::enqueue(const T &item)
{
  if (isfull())
  {
    return false;
  }

  Node *temp = new Node;
  temp->item = item;
  temp->next = nullptr;
  items++;

  if (front == nullptr)
  {
    front = temp;
  }
  else
  {
    rear->next = temp;
  }
  rear = temp;

  return true;
}

template <class T>
bool QueueTp<T>::dequeue(T &item)
{
  if (isempty())
  {
    return false;
  }

  item = front->item;
  items--;
  Node *temp = front;
  front = front->next;
  delete temp;
  if (items == 0)
  {
    rear = nullptr;
  }
  return true;
}

#endif
