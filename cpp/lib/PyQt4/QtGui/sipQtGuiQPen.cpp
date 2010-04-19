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

#line 41 "sip/QtGui/qpen.sip"
#include <qpen.h>
#line 39 "sipQtGuiQPen.cpp"

#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQPen.cpp"
#line 41 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 46 "sipQtGuiQPen.cpp"
#line 41 "sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 49 "sipQtGuiQPen.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 52 "sipQtGuiQPen.cpp"
#line 160 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 55 "sipQtGuiQPen.cpp"


extern "C" {static PyObject *meth_QPen_style(PyObject *, PyObject *);}
static PyObject *meth_QPen_style(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            Qt::PenStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->style();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_PenStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_style);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::PenStyle a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QPen,&sipCpp,sipType_Qt_PenStyle,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setStyle);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_widthF(PyObject *, PyObject *);}
static PyObject *meth_QPen_widthF(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widthF();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_widthF);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setWidthF(PyObject *, PyObject *);}
static PyObject *meth_QPen_setWidthF(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        qreal a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipType_QPen,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidthF(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setWidthF);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_width(PyObject *, PyObject *);}
static PyObject *meth_QPen_width(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_width);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QPen_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QPen,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setWidth);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_color(PyObject *, PyObject *);}
static PyObject *meth_QPen_color(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            QColor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QColor(sipCpp->color());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_color);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setColor(PyObject *, PyObject *);}
static PyObject *meth_QPen_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QColor * a0;
        int a0State = 0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QPen,&sipCpp,sipType_QColor,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColor(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setColor);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_brush(PyObject *, PyObject *);}
static PyObject *meth_QPen_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            QBrush *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBrush(sipCpp->brush());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_brush);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setBrush(PyObject *, PyObject *);}
static PyObject *meth_QPen_setBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QBrush * a0;
        int a0State = 0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QPen,&sipCpp,sipType_QBrush,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBrush(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QBrush *>(a0),sipType_QBrush,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setBrush);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_isSolid(PyObject *, PyObject *);}
static PyObject *meth_QPen_isSolid(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSolid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_isSolid);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_capStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_capStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            Qt::PenCapStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->capStyle();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_PenCapStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_capStyle);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setCapStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setCapStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::PenCapStyle a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QPen,&sipCpp,sipType_Qt_PenCapStyle,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCapStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setCapStyle);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_joinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_joinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            Qt::PenJoinStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->joinStyle();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_PenJoinStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_joinStyle);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setJoinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setJoinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::PenJoinStyle a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QPen,&sipCpp,sipType_Qt_PenJoinStyle,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setJoinStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setJoinStyle);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_dashPattern(PyObject *, PyObject *);}
static PyObject *meth_QPen_dashPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            QVector<qreal> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<qreal>(sipCpp->dashPattern());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_2400,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_dashPattern);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setDashPattern(PyObject *, PyObject *);}
static PyObject *meth_QPen_setDashPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QVector<qreal> * a0;
        int a0State = 0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QPen,&sipCpp,sipType_QVector_2400,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDashPattern(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QVector<qreal> *>(a0),sipType_QVector_2400,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setDashPattern);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_miterLimit(PyObject *, PyObject *);}
static PyObject *meth_QPen_miterLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->miterLimit();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_miterLimit);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setMiterLimit(PyObject *, PyObject *);}
static PyObject *meth_QPen_setMiterLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        qreal a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipType_QPen,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMiterLimit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setMiterLimit);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_dashOffset(PyObject *, PyObject *);}
static PyObject *meth_QPen_dashOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dashOffset();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_dashOffset);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setDashOffset(PyObject *, PyObject *);}
static PyObject *meth_QPen_setDashOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        qreal a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipType_QPen,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDashOffset(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setDashOffset);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_isCosmetic(PyObject *, PyObject *);}
static PyObject *meth_QPen_isCosmetic(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPen,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isCosmetic();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_isCosmetic);

    return NULL;
}


extern "C" {static PyObject *meth_QPen_setCosmetic(PyObject *, PyObject *);}
static PyObject *meth_QPen_setCosmetic(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        QPen *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipType_QPen,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCosmetic(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPen,sipName_setCosmetic);

    return NULL;
}


extern "C" {static PyObject *slot_QPen___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPen___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPen *sipCpp = reinterpret_cast<QPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPen));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QPen * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QPen,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPen::operator!=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QPen *>(a0),sipType_QPen,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPen,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPen___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPen___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPen *sipCpp = reinterpret_cast<QPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPen));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QPen * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QPen,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPen::operator==(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QPen *>(a0),sipType_QPen,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPen,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPen(void *, const sipTypeDef *);}
static void *cast_QPen(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPen)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPen(void *, int);}
static void release_QPen(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPen *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPen(void *, SIP_SSIZE_T, const void *);}
static void assign_QPen(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPen *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPen *>(sipSrc);
}


extern "C" {static void *array_QPen(SIP_SSIZE_T);}
static void *array_QPen(SIP_SSIZE_T sipNrElem)
{
    return new QPen[sipNrElem];
}


extern "C" {static void *copy_QPen(const void *, SIP_SSIZE_T);}
static void *copy_QPen(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPen(reinterpret_cast<const QPen *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPen(sipSimpleWrapper *);}
static void dealloc_QPen(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPen(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPen(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QPen(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QPen *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPen();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        Qt::PenStyle a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"E",sipType_Qt_PenStyle,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPen(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QColor * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QColor,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPen(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QColor *>(a0),sipType_QColor,a0State);
        }
    }

    if (!sipCpp)
    {
        const QBrush * a0;
        int a0State = 0;
        qreal a1;
        Qt::PenStyle a2 = Qt::SolidLine;
        Qt::PenCapStyle a3 = Qt::SquareCap;
        Qt::PenJoinStyle a4 = Qt::BevelJoin;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1d|EEE",sipType_QBrush,&a0,&a0State,&a1,sipType_Qt_PenStyle,&a2,sipType_Qt_PenCapStyle,&a3,sipType_Qt_PenJoinStyle,&a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPen(*a0,a1,a2,a3,a4);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QBrush *>(a0),sipType_QBrush,a0State);
        }
    }

    if (!sipCpp)
    {
        const QPen * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QPen,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPen(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QPen *>(a0),sipType_QPen,a0State);
        }
    }

    if (!sipCpp)
    {
        const QVariant * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QVariant,&a0,&a0State))
        {
#line 83 "sip/QtGui/qpen.sip"
        sipCpp = new QPen(qVariantValue<QPen>(*a0));
#line 891 "sipQtGuiQPen.cpp"

            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QPen(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPen(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPen **sipCppPtr = reinterpret_cast<QPen **>(sipCppPtrV);

#line 45 "sip/QtGui/qpen.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// QColor to be used whenever a QPen is expected.

if (sipIsErr == NULL)
    return (sipCanConvertToType(sipPy, sipType_QPen, SIP_NO_CONVERTORS) ||
            sipCanConvertToType(sipPy, sipType_QColor, 0));

if (sipCanConvertToType(sipPy, sipType_QPen, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QPen *>(sipConvertToType(sipPy, sipType_QPen, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

int state;
QColor *c = reinterpret_cast<QColor *>(sipConvertToType(sipPy, sipType_QColor, 0, 0, &state, sipIsErr));

if (*sipIsErr)
{
    sipReleaseType(c, sipType_QColor, state);
    return 0;
}

*sipCppPtr = new QPen(*c);

sipReleaseType(c, sipType_QColor, state);

return sipGetState(sipTransferObj);
#line 935 "sipQtGuiQPen.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPen[] = {
    {(void *)slot_QPen___ne__, ne_slot},
    {(void *)slot_QPen___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPen[] = {
    {SIP_MLNAME_CAST(sipName_brush), meth_QPen_brush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_capStyle), meth_QPen_capStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_color), meth_QPen_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dashOffset), meth_QPen_dashOffset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dashPattern), meth_QPen_dashPattern, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isCosmetic), meth_QPen_isCosmetic, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isSolid), meth_QPen_isSolid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_joinStyle), meth_QPen_joinStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_miterLimit), meth_QPen_miterLimit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setBrush), meth_QPen_setBrush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCapStyle), meth_QPen_setCapStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QPen_setColor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCosmetic), meth_QPen_setCosmetic, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDashOffset), meth_QPen_setDashOffset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDashPattern), meth_QPen_setDashPattern, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setJoinStyle), meth_QPen_setJoinStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMiterLimit), meth_QPen_setMiterLimit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setStyle), meth_QPen_setStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QPen_setWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidthF), meth_QPen_setWidthF, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_style), meth_QPen_style, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_width), meth_QPen_width, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widthF), meth_QPen_widthF, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPen = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPen,
        {0}
    },
    {
        sipNameNr_QPen,
        {0, 0, 1},
        23, methods_QPen,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPen,
    init_QPen,
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
    dealloc_QPen,
    assign_QPen,
    array_QPen,
    copy_QPen,
    release_QPen,
    cast_QPen,
    convertTo_QPen,
    0,
    0
},
    0,
    0,
    0
};
