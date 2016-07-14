from setuptools import setup, Extension
# from distutils.core import setup, Extension

setup(name='maxstdio',
    version='0.2',
    description='A small module that provides a wrapper around the VC++ runtimes _setmaxstdio and _getmaxstdio functions.',
    author='Barry Carr',
    author_email='b.carr@dundee.ac.uk',
    ext_modules=[Extension('maxstdio', ['main.cpp'])],
    classifiers=[
        'Development Status :: 3 - Alpha',
        'Intended Audience :: Developers',
        'Programming Language :: Python :: 2.7',],
    platforms=['win32'],
    keywords='_setmaxstdio _getmaxstdio development windows win32 msvcrt')