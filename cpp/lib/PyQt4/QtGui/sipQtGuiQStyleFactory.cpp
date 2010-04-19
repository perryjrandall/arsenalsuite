/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:23 2010
 *
 * Copyright (c) 2009 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 37 "sip/QtGui/qstylefactory.sip"
#include <qstylefactory.h>
#line 39 "sipQtGuiQStyleFactory.cpp"

#line 41 "sip/QtGui/qstyle.sip"
#include <qstyle.h>
#line 43 "sipQtGuiQStyleFactory.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtGuiQStyleFactory.cpp"
#line 41 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 49 "sipQtGuiQStyleFactory.cpp"


extern "C" {static PyObject *meth_QStyleFactory_keys(PyObject *, PyObject *);}
static PyObject *meth_QStyleFactory_keys(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QStyleFactory::keys());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QStyleFactory,sipName_keys);

    return NULL;
}


extern "C" {static PyObject *meth_QStyleFactory_create(PyObject *, PyObject *);}
static PyObject *meth_QStyleFactory_create(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipType_QString,&a0,&a0State))
        {
            QStyle *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QStyleFactory::create(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QStyleFactory,sipName_create);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleFactory(void *, const sipTypeDef *);}
static void *cast_QStyleFactory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleFactory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleFactory(void *, int);}
static void release_QStyleFactory(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleFactory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleFactory(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleFactory(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleFactory *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleFactory *>(sipSrc);
}


extern "C" {static void *array_QStyleFactory(SIP_SSIZE_T);}
static void *array_QStyleFactory(SIP_SSIZE_T sipNrElem)
{
    return new QStyleFactory[sipNrElem];
}


extern "C" {static void *copy_QStyleFactory(const void *, SIP_SSIZE_T);}
static void *copy_QStyleFactory(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleFactory(reinterpret_cast<const QStyleFactory *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleFactory(sipSimpleWrapper *);}
static void dealloc_QStyleFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleFactory(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleFactory(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyleFactory(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyleFactory *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleFactory();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleFactory * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleFactory,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleFactory(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


static PyMethodDef methods_QStyleFactory[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QStyleFactory_create, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_keys), meth_QStyleFactory_keys, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleFactory,
        {0}
    },
    {
        sipNameNr_QStyleFactory,
        {0, 0, 1},
        2, methods_QStyleFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QStyleFactory,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QStyleFactory,
    assign_QStyleFactory,
    array_QStyleFactory,
    copy_QStyleFactory,
    release_QStyleFactory,
    cast_QStyleFactory,
    0,
    0,
    0
},
    0,
    0,
    0
};
