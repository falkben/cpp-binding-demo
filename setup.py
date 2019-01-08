from distutils.core import setup
from distutils.extension import Extension

from Cython.Build import cythonize
# from Cython.Distutils import build_ext

# this is all you need to get it to work from within the module directory (rect)
ext_modules = cythonize(
    Extension(
        "rect.rect",
        ["rect/rect.pyx"]))
setup(ext_modules=ext_modules)
# python setup.py build_ext
