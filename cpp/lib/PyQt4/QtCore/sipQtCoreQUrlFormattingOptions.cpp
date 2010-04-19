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

#line 41 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "sipQtCoreQUrlFormattingOptions.cpp"

#line 41 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 43 "sipQtCoreQUrlFormattingOptions.cpp"


extern "C" {static int slot_QUrl_FormattingOptions___bool__(PyObject *sipSelf);}
static int slot_QUrl_FormattingOptions___bool__(PyObject *sipSelf)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtCoreQUrlFormattingOptions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUrl_FormattingOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QUrl::FormattingOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QUrl_FormattingOptions,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtCoreQUrlFormattingOptions.cpp"

            sipReleaseType(const_cast<QUrl::FormattingOptions *>(a0),sipType_QUrl_FormattingOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUrl_FormattingOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUrl_FormattingOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QUrl::FormattingOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QUrl_FormattingOptions,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtCoreQUrlFormattingOptions.cpp"

            sipReleaseType(const_cast<QUrl::FormattingOptions *>(a0),sipType_QUrl_FormattingOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUrl_FormattingOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___invert__(PyObject *sipSelf);}
static PyObject *slot_QUrl_FormattingOptions___invert__(PyObject *sipSelf)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QUrl::FormattingOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl::FormattingOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QUrl_FormattingOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QUrl::FormattingOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QUrl_FormattingOptions,&a0,&a0State,&a1))
        {
            QUrl::FormattingOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl::FormattingOptions((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QUrl_FormattingOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QUrl::FormattingOptions * a0;
        int a0State = 0;
        QUrl::FormattingOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QUrl_FormattingOptions,&a0,&a0State,sipType_QUrl_FormattingOptions,&a1,&a1State))
        {
            QUrl::FormattingOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl::FormattingOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_FormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QUrl_FormattingOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QUrl::FormattingOptions * a0;
        int a0State = 0;
        QUrl::FormattingOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QUrl_FormattingOptions,&a0,&a0State,sipType_QUrl_FormattingOptions,&a1,&a1State))
        {
            QUrl::FormattingOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl::FormattingOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_FormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_FormattingOptions,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___int__(PyObject *sipSelf);}
static PyObject *slot_QUrl_FormattingOptions___int__(PyObject *sipSelf)
{
    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUrl_FormattingOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QUrl::FormattingOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QUrl_FormattingOptions,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QUrl::FormattingOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUrl_FormattingOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QUrl::FormattingOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QUrl_FormattingOptions,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QUrl::FormattingOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QUrl_FormattingOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QUrl_FormattingOptions___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUrl_FormattingOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::FormattingOptions *sipCpp = reinterpret_cast<QUrl::FormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_FormattingOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QUrl::FormattingOptions::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QUrl_FormattingOptions(void *, const sipTypeDef *);}
static void *cast_QUrl_FormattingOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUrl_FormattingOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUrl_FormattingOptions(void *, int);}
static void release_QUrl_FormattingOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QUrl::FormattingOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QUrl_FormattingOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QUrl_FormattingOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUrl::FormattingOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUrl::FormattingOptions *>(sipSrc);
}


extern "C" {static void *array_QUrl_FormattingOptions(SIP_SSIZE_T);}
static void *array_QUrl_FormattingOptions(SIP_SSIZE_T sipNrElem)
{
    return new QUrl::FormattingOptions[sipNrElem];
}


extern "C" {static void *copy_QUrl_FormattingOptions(const void *, SIP_SSIZE_T);}
static void *copy_QUrl_FormattingOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUrl::FormattingOptions(reinterpret_cast<const QUrl::FormattingOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUrl_FormattingOptions(sipSimpleWrapper *);}
static void dealloc_QUrl_FormattingOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUrl_FormattingOptions(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QUrl_FormattingOptions(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QUrl_FormattingOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QUrl::FormattingOptions *sipCpp = 0;

    if (!sipCpp)
    {
        const QUrl::FormattingOptions * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QUrl_FormattingOptions,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUrl::FormattingOptions(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QUrl::FormattingOptions *>(a0),sipType_QUrl_FormattingOptions,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUrl::FormattingOptions(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUrl::FormattingOptions();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QUrl_FormattingOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QUrl_FormattingOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QUrl::FormattingOptions **sipCppPtr = reinterpret_cast<QUrl::FormattingOptions **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QUrl::FormattingOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOption)) ||
            sipCanConvertToType(sipPy, sipType_QUrl_FormattingOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_FormattingOption)))
{
    *sipCppPtr = new QUrl::FormattingOptions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QUrl::FormattingOptions *>(sipConvertToType(sipPy, sipType_QUrl_FormattingOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtCoreQUrlFormattingOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUrl_FormattingOptions[] = {
    {(void *)slot_QUrl_FormattingOptions___bool__, bool_slot},
    {(void *)slot_QUrl_FormattingOptions___ne__, ne_slot},
    {(void *)slot_QUrl_FormattingOptions___eq__, eq_slot},
    {(void *)slot_QUrl_FormattingOptions___invert__, invert_slot},
    {(void *)slot_QUrl_FormattingOptions___and__, and_slot},
    {(void *)slot_QUrl_FormattingOptions___xor__, xor_slot},
    {(void *)slot_QUrl_FormattingOptions___or__, or_slot},
    {(void *)slot_QUrl_FormattingOptions___int__, int_slot},
    {(void *)slot_QUrl_FormattingOptions___ixor__, ixor_slot},
    {(void *)slot_QUrl_FormattingOptions___ior__, ior_slot},
    {(void *)slot_QUrl_FormattingOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QUrl_FormattingOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QUrl__FormattingOptions,
        {0}
    },
    {
        sipNameNr_FormattingOptions,
        {192, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUrl_FormattingOptions,
    init_QUrl_FormattingOptions,
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
    dealloc_QUrl_FormattingOptions,
    assign_QUrl_FormattingOptions,
    array_QUrl_FormattingOptions,
    copy_QUrl_FormattingOptions,
    release_QUrl_FormattingOptions,
    cast_QUrl_FormattingOptions,
    convertTo_QUrl_FormattingOptions,
    0,
    0
},
    0,
    1,
    0
};
