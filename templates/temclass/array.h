#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <cassert>

template <class T> class array {
private:
  int the_length{};
  T *the_data{};

public:
  array(int length) {
    assert(length > 0);
    the_data = new T[length]{};
    the_length = length;
  }
  array(const array &) = delete;
  array &operator=(const array &) = delete;

  ~array() { delete[] the_data; }

  void erase() {
    delete[] the_data;
    // You need to ensure that the_data set to 0 here, otherwise it will be left
    // pointing at deallocated memory!...
    the_data = nullptr;
    the_length = 0;
  }

  T &operator[](int index) {
    assert(index >= 0 && index < the_length);
    return the_data[index];
  }

  //   templated getLength() function defined here
  int getLength() const;
};

// member functions defined outside the class need their own template
// delcaration
template <class T>
// note that, class name is array<T>, not the array bellow here but above..
int array<T>::getLength() const {
  return the_length;
}

/* As you can see, this version is almost identical to the IntArray version,
except we’ve added the template declaration, and changed the contained data type
from int to T.

Note that we’ve also defined the getLength() function outside of the class
declaration. This isn’t necessary, but new programmers typically stumble when
trying to do this for the first time due to the syntax, so an example is
instructive. Each templated member function defined outside the class
declaration needs its own template declaration. Also, note that the name of the
templated array class is array<T>, not array -- array would refer to a
non-templated version of a class named array, unless array is used inside of the
class. For example, the copy constructor and copy-assignment operator used Array
rather than array<T>. When the class name is used without template arguments
inside of the class, the arguments are the same as the ones of the current
instantiation. */

#endif // !_ARRAY_H_