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

#line 220 "sip/QtGui/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 39 "sipQtGuiQGraphicsSceneHelpEvent.cpp"

#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 43 "sipQtGuiQGraphicsSceneHelpEvent.cpp"
#line 41 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 46 "sipQtGuiQGraphicsSceneHelpEvent.cpp"
#line 94 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 49 "sipQtGuiQGraphicsSceneHelpEvent.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 52 "sipQtGuiQGraphicsSceneHelpEvent.cpp"


class sipQGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent
{
public:
    sipQGraphicsSceneHelpEvent(QEvent::Type);
    ~sipQGraphicsSceneHelpEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsSceneHelpEvent(const sipQGraphicsSceneHelpEvent &);
    sipQGraphicsSceneHelpEvent &operator = (const sipQGraphicsSceneHelpEvent &);
};

sipQGraphicsSceneHelpEvent::sipQGraphicsSceneHelpEvent(QEvent::Type a0): QGraphicsSceneHelpEvent(a0), sipPySelf(0)
{
}

sipQGraphicsSceneHelpEvent::~sipQGraphicsSceneHelpEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QGraphicsSceneHelpEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHelpEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneHelpEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneHelpEvent,&sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneHelpEvent,sipName_scenePos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneHelpEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHelpEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneHelpEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneHelpEvent,&sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneHelpEvent,sipName_screenPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneHelpEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneHelpEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneHelpEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneHelpEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneHelpEvent(void *, int);}
static void release_QGraphicsSceneHelpEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsSceneHelpEvent *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsSceneHelpEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsSceneHelpEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneHelpEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsSceneHelpEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneHelpEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QGraphicsSceneHelpEvent(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QGraphicsSceneHelpEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQGraphicsSceneHelpEvent *sipCpp = 0;

    if (!sipCpp)
    {
        QEvent::Type a0 = QEvent::None;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|E",sipType_QEvent_Type,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsSceneHelpEvent(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneHelpEvent[] = {{173, 255, 1}};


static PyMethodDef methods_QGraphicsSceneHelpEvent[] = {
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneHelpEvent_scenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneHelpEvent_screenPos, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsSceneHelpEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneHelpEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneHelpEvent,
        {0, 0, 1},
        2, methods_QGraphicsSceneHelpEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QGraphicsSceneHelpEvent,
    0,
    init_QGraphicsSceneHelpEvent,
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
    dealloc_QGraphicsSceneHelpEvent,
    0,
    0,
    0,
    release_QGraphicsSceneHelpEvent,
    cast_QGraphicsSceneHelpEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
