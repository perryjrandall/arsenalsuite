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

#line 37 "sip/QtGui/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 39 "sipQtGuiQPixmapCache.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQPixmapCache.cpp"
#line 41 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 46 "sipQtGuiQPixmapCache.cpp"


extern "C" {static PyObject *meth_QPixmapCache_cacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_cacheLimit(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QPixmapCache::cacheLimit();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPixmapCache,sipName_cacheLimit);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_setCacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_setCacheLimit(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QPixmapCache::setCacheLimit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPixmapCache,sipName_setCacheLimit);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_find(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_find(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipType_QString,&a0,&a0State))
        {
            QPixmap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QPixmapCache::find(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QPixmap,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QPixmap * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1J9",sipType_QString,&a0,&a0State,sipType_QPixmap,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QPixmapCache::find(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPixmapCache,sipName_find);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_insert(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_insert(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QPixmap * a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1J9",sipType_QString,&a0,&a0State,sipType_QPixmap,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QPixmapCache::insert(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPixmapCache,sipName_insert);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_remove(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_remove(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            QPixmapCache::remove(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPixmapCache,sipName_remove);

    return NULL;
}


extern "C" {static PyObject *meth_QPixmapCache_clear(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_clear(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            QPixmapCache::clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPixmapCache,sipName_clear);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPixmapCache(void *, const sipTypeDef *);}
static void *cast_QPixmapCache(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPixmapCache)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPixmapCache(void *, int);}
static void release_QPixmapCache(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPixmapCache *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPixmapCache(void *, SIP_SSIZE_T, const void *);}
static void assign_QPixmapCache(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPixmapCache *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPixmapCache *>(sipSrc);
}


extern "C" {static void *array_QPixmapCache(SIP_SSIZE_T);}
static void *array_QPixmapCache(SIP_SSIZE_T sipNrElem)
{
    return new QPixmapCache[sipNrElem];
}


extern "C" {static void *copy_QPixmapCache(const void *, SIP_SSIZE_T);}
static void *copy_QPixmapCache(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPixmapCache(reinterpret_cast<const QPixmapCache *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPixmapCache(sipSimpleWrapper *);}
static void dealloc_QPixmapCache(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPixmapCache(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPixmapCache(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QPixmapCache(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QPixmapCache *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPixmapCache();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QPixmapCache * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QPixmapCache,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPixmapCache(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


static PyMethodDef methods_QPixmapCache[] = {
    {SIP_MLNAME_CAST(sipName_cacheLimit), meth_QPixmapCache_cacheLimit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QPixmapCache_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_find), meth_QPixmapCache_find, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insert), meth_QPixmapCache_insert, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QPixmapCache_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCacheLimit), meth_QPixmapCache_setCacheLimit, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPixmapCache = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPixmapCache,
        {0}
    },
    {
        sipNameNr_QPixmapCache,
        {0, 0, 1},
        6, methods_QPixmapCache,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QPixmapCache,
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
    dealloc_QPixmapCache,
    assign_QPixmapCache,
    array_QPixmapCache,
    copy_QPixmapCache,
    release_QPixmapCache,
    cast_QPixmapCache,
    0,
    0,
    0
},
    0,
    0,
    0
};
