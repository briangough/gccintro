#ifndef BUFFER_H
#define BUFFER_H

template <class T> 
class Buffer
{
public:
  Buffer (unsigned int n);
  void insert (const T & x);
  T get (unsigned int k) const;
private:
  unsigned int i;
  unsigned int size;
  T *pT;
};

template <class T> 
Buffer<T>::Buffer (unsigned int n)
{
  i = 0;
  size = n;
  pT = new T[n];
};

template <class T> 
void 
Buffer<T>::insert (const T & x)
{
  i = (i + 1) % size;
  pT[i] = x;
};

template <class T> 
T 
Buffer<T>::get (unsigned int k) const
{
  return pT[(i + (size - k)) % size];
};

#endif /* BUFFER_H */
