#include <stdio.h>

#include "include.h"


static PyObject *setmaxstdio(PyObject *self, PyObject *args)
{
	int newvalue;

	if (!PyArg_ParseTuple(args, "i", &newvalue))
	{
		return NULL;
	}

	int result = _setmaxstdio(newvalue);

	return Py_BuildValue("i", result);
}

static PyObject *getmaxstdio(PyObject *self)
{
	int result = _getmaxstdio();

	return Py_BuildValue("i", result);
}

static PyMethodDef MaxstdioMethods[] = {
	{ "setmaxstdio", PyCFunction(setmaxstdio), METH_VARARGS, "Set the max number of files handles needed, up to a maximum of 2048." },
	{ "getmaxstdio", PyCFunction(getmaxstdio), METH_VARARGS, "Gets the current number of files handles set" },
	{ NULL, NULL, 0, NULL }        /* Sentinel */
};

PyMODINIT_FUNC initmaxstdio()
{
	PyObject *m;

	m = Py_InitModule("maxstdio", MaxstdioMethods);
	if (m == NULL)
	{
		return;
	}
}