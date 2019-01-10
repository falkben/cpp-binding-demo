# cpp-binding-demo

This is an implementation of the Cython [demo/tutorial](https://cython.readthedocs.io/en/latest/src/userguide/wrapping_CPlusPlus.html)

## cython

From within the `rect` directory in order to build run:

```sh
python setup.py build_ext --inplace
```

To test (from within `Python` interpreter):

```Python
import rect
rect_obj = rect.PyRectangle(1,2,3,4)
rect_obj.get_area()
dir(rect_obj)
```

## pybind11

### Test cases

To run the [test cases](https://pybind11.readthedocs.io/en/master/basics.html)

1. Install `cmake` and `boost`
2. Checkout `pybind11` from github: `git clone https://github.com/pybind/pybind11.git`
3. Use `bash` (Errors when using fish shell)

### Compiling

To build python module `rect` from `rect.cpp`

```sh
c++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` rect.cpp -o rect`python3-config --extension-suffix`
````
