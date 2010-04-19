/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:19 2010
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

#include "sipAPIQtCore.h"

#line 39 "sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 39 "sipQtCoreQXmlStreamAttribute.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtCoreQXmlStreamAttribute.cpp"
#line 646 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtCoreQXmlStreamAttribute.cpp"


extern "C" {static PyObject *meth_QXmlStreamAttribute_namespaceUri(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttribute_namespaceUri(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QXmlStreamAttribute *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlStreamAttribute,&sipCpp))
        {
            QStringRef *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->namespaceUri());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlStreamAttribute,sipName_namespaceUri);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlStreamAttribute_name(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttribute_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QXmlStreamAttribute *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlStreamAttribute,&sipCpp))
        {
            QStringRef *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlStreamAttribute,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlStreamAttribute_qualifiedName(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttribute_qualifiedName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QXmlStreamAttribute *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlStreamAttribute,&sipCpp))
        {
            QStringRef *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->qualifiedName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlStreamAttribute,sipName_qualifiedName);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlStreamAttribute_prefix(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttribute_prefix(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QXmlStreamAttribute *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlStreamAttribute,&sipCpp))
        {
            QStringRef *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->prefix());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlStreamAttribute,sipName_prefix);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlStreamAttribute_value(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttribute_value(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QXmlStreamAttribute *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlStreamAttribute,&sipCpp))
        {
            QStringRef *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->value());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlStreamAttribute,sipName_value);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlStreamAttribute_isDefault(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamAttribute_isDefault(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QXmlStreamAttribute *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QXmlStreamAttribute,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDefault();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QXmlStreamAttribute,sipName_isDefault);

    return NULL;
}


extern "C" {static PyObject *slot_QXmlStreamAttribute___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QXmlStreamAttribute___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttribute *sipCpp = reinterpret_cast<QXmlStreamAttribute *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttribute));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QXmlStreamAttribute * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QXmlStreamAttribute,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlStreamAttribute::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QXmlStreamAttribute,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlStreamAttribute___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QXmlStreamAttribute___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamAttribute *sipCpp = reinterpret_cast<QXmlStreamAttribute *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamAttribute));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QXmlStreamAttribute * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QXmlStreamAttribute,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlStreamAttribute::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QXmlStreamAttribute,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlStreamAttribute(void *, const sipTypeDef *);}
static void *cast_QXmlStreamAttribute(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlStreamAttribute)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamAttribute(void *, int);}
static void release_QXmlStreamAttribute(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlStreamAttribute *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlStreamAttribute(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlStreamAttribute(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlStreamAttribute *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlStreamAttribute *>(sipSrc);
}


extern "C" {static void *array_QXmlStreamAttribute(SIP_SSIZE_T);}
static void *array_QXmlStreamAttribute(SIP_SSIZE_T sipNrElem)
{
    return new QXmlStreamAttribute[sipNrElem];
}


extern "C" {static void *copy_QXmlStreamAttribute(const void *, SIP_SSIZE_T);}
static void *copy_QXmlStreamAttribute(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlStreamAttribute(reinterpret_cast<const QXmlStreamAttribute *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlStreamAttribute(sipSimpleWrapper *);}
static void dealloc_QXmlStreamAttribute(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlStreamAttribute(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QXmlStreamAttribute(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QXmlStreamAttribute(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QXmlStreamAttribute *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlStreamAttribute();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1J1",sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlStreamAttribute(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
        }
    }

    if (!sipCpp)
    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        const QString * a2;
        int a2State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1J1J1",sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,sipType_QString,&a2,&a2State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlStreamAttribute(*a0,*a1,*a2);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
        }
    }

    if (!sipCpp)
    {
        const QXmlStreamAttribute * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QXmlStreamAttribute,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlStreamAttribute(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlStreamAttribute[] = {
    {(void *)slot_QXmlStreamAttribute___ne__, ne_slot},
    {(void *)slot_QXmlStreamAttribute___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlStreamAttribute[] = {
    {SIP_MLNAME_CAST(sipName_isDefault), meth_QXmlStreamAttribute_isDefault, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QXmlStreamAttribute_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namespaceUri), meth_QXmlStreamAttribute_namespaceUri, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_prefix), meth_QXmlStreamAttribute_prefix, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_qualifiedName), meth_QXmlStreamAttribute_qualifiedName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_value), meth_QXmlStreamAttribute_value, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QXmlStreamAttribute = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamAttribute,
        {0}
    },
    {
        sipNameNr_QXmlStreamAttribute,
        {0, 0, 1},
        6, methods_QXmlStreamAttribute,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlStreamAttribute,
    init_QXmlStreamAttribute,
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
    dealloc_QXmlStreamAttribute,
    assign_QXmlStreamAttribute,
    array_QXmlStreamAttribute,
    copy_QXmlStreamAttribute,
    release_QXmlStreamAttribute,
    cast_QXmlStreamAttribute,
    0,
    0,
    0
},
    0,
    0,
    0
};
