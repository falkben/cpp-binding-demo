# cython-rect-demo

This is an implementation of the Cython demo from https://cython.readthedocs.io/en/latest/src/userguide/wrapping_CPlusPlus.html with minor modifications to make it work.

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