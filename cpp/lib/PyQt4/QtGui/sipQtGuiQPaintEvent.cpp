/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:24 2010
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

#line 340 "sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQPaintEvent.cpp"

#line 41 "sip/QtGui/qregion.sip"
#include <qregion.h>
#line 43 "sipQtGuiQPaintEvent.cpp"
#line 41 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 46 "sipQtGuiQPaintEvent.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtGuiQPaintEvent.cpp"


class sipQPaintEvent : public QPaintEvent
{
public:
    sipQPaintEvent(const QRegion&);
    sipQPaintEvent(const QRect&);
    sipQPaintEvent(const QPaintEvent&);
    ~sipQPaintEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPaintEvent(const sipQPaintEvent &);
    sipQPaintEvent &operator = (const sipQPaintEvent &);
};

sipQPaintEvent::sipQPaintEvent(const QRegion& a0): QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::sipQPaintEvent(const QRect& a0): QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::sipQPaintEvent(const QPaintEvent& a0): QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::~sipQPaintEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QPaintEvent_rect(PyObject *, PyObject *);}
static PyObject *meth_QPaintEvent_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEvent,&sipCpp))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->rect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEvent,sipName_rect);

    return NULL;
}


extern "C" {static PyObject *meth_QPaintEvent_region(PyObject *, PyObject *);}
static PyObject *meth_QPaintEvent_region(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPaintEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPaintEvent,&sipCpp))
        {
            QRegion *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRegion(sipCpp->region());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPaintEvent,sipName_region);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPaintEvent(void *, const sipTypeDef *);}
static void *cast_QPaintEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPaintEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QPaintEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEvent(void *, int);}
static void release_QPaintEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPaintEvent *>(sipCppV);
    else
        delete reinterpret_cast<QPaintEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPaintEvent(sipSimpleWrapper *);}
static void dealloc_QPaintEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPaintEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPaintEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QPaintEvent(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QPaintEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQPaintEvent *sipCpp = 0;

    if (!sipCpp)
    {
        const QRegion * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QRegion,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPaintEvent(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QRect * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QRect,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPaintEvent(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QPaintEvent * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QPaintEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPaintEvent(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPaintEvent[] = {{46, 0, 1}};


static PyMethodDef methods_QPaintEvent[] = {
    {SIP_MLNAME_CAST(sipName_rect), meth_QPaintEvent_rect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_region), meth_QPaintEvent_region, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPaintEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPaintEvent,
        {0}
    },
    {
        sipNameNr_QPaintEvent,
        {0, 0, 1},
        2, methods_QPaintEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QPaintEvent,
    0,
    init_QPaintEvent,
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
    dealloc_QPaintEvent,
    0,
    0,
    0,
    release_QPaintEvent,
    cast_QPaintEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
