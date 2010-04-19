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

#line 75 "sip/QtCore/qglobal.sip"
#include <qglobal.h>
#line 39 "sipQtCoreQSysInfo.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSysInfo(void *, const sipTypeDef *);}
static void *cast_QSysInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSysInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSysInfo(void *, int);}
static void release_QSysInfo(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSysInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSysInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QSysInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSysInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSysInfo *>(sipSrc);
}


extern "C" {static void *array_QSysInfo(SIP_SSIZE_T);}
static void *array_QSysInfo(SIP_SSIZE_T sipNrElem)
{
    return new QSysInfo[sipNrElem];
}


extern "C" {static void *copy_QSysInfo(const void *, SIP_SSIZE_T);}
static void *copy_QSysInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSysInfo(reinterpret_cast<const QSysInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSysInfo(sipSimpleWrapper *);}
static void dealloc_QSysInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSysInfo(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QSysInfo(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QSysInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QSysInfo *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSysInfo();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QSysInfo * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QSysInfo,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSysInfo(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}

static sipEnumMemberDef enummembers_QSysInfo[] = {
    {sipName_BigEndian, QSysInfo::BigEndian, 156},
    {sipName_ByteOrder, QSysInfo::ByteOrder, 156},
    {sipName_LittleEndian, QSysInfo::LittleEndian, 156},
    {sipName_WordSize, QSysInfo::WordSize, 157},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QSysInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSysInfo,
        {0}
    },
    {
        sipNameNr_QSysInfo,
        {0, 0, 1},
        0, 0,
        4, enummembers_QSysInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QSysInfo,
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
    dealloc_QSysInfo,
    assign_QSysInfo,
    array_QSysInfo,
    copy_QSysInfo,
    release_QSysInfo,
    cast_QSysInfo,
    0,
    0,
    0
},
    0,
    0,
    0
};
