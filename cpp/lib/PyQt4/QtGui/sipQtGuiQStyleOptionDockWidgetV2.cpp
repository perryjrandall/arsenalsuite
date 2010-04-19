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

#line 1625 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionDockWidgetV2.cpp"

#line 783 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 43 "sipQtGuiQStyleOptionDockWidgetV2.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 46 "sipQtGuiQStyleOptionDockWidgetV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionDockWidgetV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionDockWidgetV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionDockWidgetV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionDockWidget)->ctd_cast((QStyleOptionDockWidget *)(QStyleOptionDockWidgetV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionDockWidgetV2(void *, int);}
static void release_QStyleOptionDockWidgetV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionDockWidgetV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionDockWidgetV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionDockWidgetV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionDockWidgetV2(SIP_SSIZE_T);}
static void *array_QStyleOptionDockWidgetV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionDockWidgetV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionDockWidgetV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionDockWidgetV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionDockWidgetV2(reinterpret_cast<const QStyleOptionDockWidgetV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionDockWidgetV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionDockWidgetV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionDockWidgetV2(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionDockWidgetV2(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyleOptionDockWidgetV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyleOptionDockWidgetV2 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionDockWidgetV2();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionDockWidgetV2 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionDockWidgetV2,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionDockWidgetV2(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionDockWidget * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionDockWidget,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionDockWidgetV2(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionDockWidgetV2[] = {{455, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionDockWidgetV2[] = {
    {sipName_Version, QStyleOptionDockWidgetV2::Version, 459},
};


extern "C" {static PyObject *varget_QStyleOptionDockWidgetV2_verticalTitleBar(void *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidgetV2_verticalTitleBar(void *sipSelf, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidgetV2 *sipCpp = reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipSelf);

    sipVal = sipCpp->verticalTitleBar;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionDockWidgetV2_verticalTitleBar(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidgetV2_verticalTitleBar(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidgetV2 *sipCpp = reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->verticalTitleBar = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionDockWidgetV2[] = {
    {sipName_verticalTitleBar, varget_QStyleOptionDockWidgetV2_verticalTitleBar, varset_QStyleOptionDockWidgetV2_verticalTitleBar, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionDockWidgetV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionDockWidgetV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionDockWidgetV2,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionDockWidgetV2,
        1, variables_QStyleOptionDockWidgetV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QStyleOptionDockWidgetV2,
    0,
    init_QStyleOptionDockWidgetV2,
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
    dealloc_QStyleOptionDockWidgetV2,
    assign_QStyleOptionDockWidgetV2,
    array_QStyleOptionDockWidgetV2,
    copy_QStyleOptionDockWidgetV2,
    release_QStyleOptionDockWidgetV2,
    cast_QStyleOptionDockWidgetV2,
    0,
    0,
    0
},
    0,
    0,
    0
};
