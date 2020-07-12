#include <pybind11/pybind11.h>

#include <string>

class Example
{
public:

  Example() {
  }

  void abc() {};

};

PYBIND11_MODULE(example, m)
{
  namespace py = pybind11;
  py::class_<Example>(m, "Example").def( "abc", &Example::abc );
}
