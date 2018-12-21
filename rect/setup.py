from distutils.core import setup

# I couldn't get this to work:
# from Cython.Build import cythonize
# setup(name='rect',
#       packages=['rect'],
#       ext_modules=cythonize("rect.pyx"))


from distutils.extension import Extension
from Cython.Distutils import build_ext
setup(ext_modules=[Extension("rect",
                             sources=["rect.pyx", "Rectangle.pxd"],
                             language="c++")],
      cmdclass={'build_ext': build_ext}
      )
