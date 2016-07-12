from distutils.core import setup, Extension

setup(name='maxstdio',
    version='0.1',
    description='A small module that will enable windows devs to set and get number of files handles available to the underlying Visual C++ runtime.',
    author='Barry Carr',
    author_email='b.carr@dundee.ac.uk',
    ext_modules=[Extension('maxstdio', ['main.cpp'])],
    classifiers=['Development Status :: 3 - Alpha'],
    platforms=['win32'],)