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

#line 112 "sip/QtGui/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 39 "sipQtGuiQGraphicsSceneMouseEvent.cpp"

#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 43 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 41 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 55 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 94 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 58 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 61 "sipQtGuiQGraphicsSceneMouseEvent.cpp"


class sipQGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent
{
public:
    sipQGraphicsSceneMouseEvent(QEvent::Type);
    ~sipQGraphicsSceneMouseEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsSceneMouseEvent(const sipQGraphicsSceneMouseEvent &);
    sipQGraphicsSceneMouseEvent &operator = (const sipQGraphicsSceneMouseEvent &);
};

sipQGraphicsSceneMouseEvent::sipQGraphicsSceneMouseEvent(QEvent::Type a0): QGraphicsSceneMouseEvent(a0), sipPySelf(0)
{
}

sipQGraphicsSceneMouseEvent::~sipQGraphicsSceneMouseEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_pos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_scenePos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_screenPos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::MouseButton a0;
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp,sipType_Qt_MouseButton,&a0))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->buttonDownPos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_buttonDownPos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::MouseButton a0;
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp,sipType_Qt_MouseButton,&a0))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->buttonDownScenePos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_buttonDownScenePos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::MouseButton a0;
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp,sipType_Qt_MouseButton,&a0))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->buttonDownScreenPos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_buttonDownScreenPos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_lastPos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastScenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_lastScenePos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->lastScreenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_lastScreenPos);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            Qt::MouseButtons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_buttons);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            Qt::MouseButton sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->button();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_MouseButton);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_button);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QGraphicsSceneMouseEvent,&sipCpp))
        {
            Qt::KeyboardModifiers *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QGraphicsSceneMouseEvent,sipName_modifiers);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneMouseEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneMouseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneMouseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneMouseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneMouseEvent(void *, int);}
static void release_QGraphicsSceneMouseEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsSceneMouseEvent *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsSceneMouseEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsSceneMouseEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneMouseEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QGraphicsSceneMouseEvent(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QGraphicsSceneMouseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQGraphicsSceneMouseEvent *sipCpp = 0;

    if (!sipCpp)
    {
        QEvent::Type a0 = QEvent::None;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|E",sipType_QEvent_Type,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsSceneMouseEvent(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneMouseEvent[] = {{173, 255, 1}};


static PyMethodDef methods_QGraphicsSceneMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_button), meth_QGraphicsSceneMouseEvent_button, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonDownPos), meth_QGraphicsSceneMouseEvent_buttonDownPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonDownScenePos), meth_QGraphicsSceneMouseEvent_buttonDownScenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonDownScreenPos), meth_QGraphicsSceneMouseEvent_buttonDownScreenPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneMouseEvent_buttons, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QGraphicsSceneMouseEvent_lastPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QGraphicsSceneMouseEvent_lastScenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QGraphicsSceneMouseEvent_lastScreenPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneMouseEvent_modifiers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneMouseEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneMouseEvent_scenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneMouseEvent_screenPos, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsSceneMouseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneMouseEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneMouseEvent,
        {0, 0, 1},
        12, methods_QGraphicsSceneMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QGraphicsSceneMouseEvent,
    0,
    init_QGraphicsSceneMouseEvent,
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
    dealloc_QGraphicsSceneMouseEvent,
    0,
    0,
    0,
    release_QGraphicsSceneMouseEvent,
    cast_QGraphicsSceneMouseEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
