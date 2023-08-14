#include <stdio.h>
#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - prints python list info
 *
 * @p: PyObject
 *
 * Return: (no return)
 *
 */
void print_python_list_info(PyObject *p)
{
	long int size = Pylist_size(p);
	int i;
	PylistObject *obj = (PylistObject *)p;

	printf("[*] Size of Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);

	for (i =0; i < size; i++)
	  printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
}
