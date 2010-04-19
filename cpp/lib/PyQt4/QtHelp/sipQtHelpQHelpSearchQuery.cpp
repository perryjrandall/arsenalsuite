/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:26 2010
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

#include "sipAPIQtHelp.h"

#line 39 "sip/QtHelp/qhelpsearchengine.sip"
#include <qhelpsearchengine.h>
#line 39 "sipQtHelpQHelpSearchQuery.cpp"

#line 41 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 43 "sipQtHelpQHelpSearchQuery.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHelpSearchQuery(void *, const sipTypeDef *);}
static void *cast_QHelpSearchQuery(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QHelpSearchQuery)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHelpSearchQuery(void *, int);}
static void release_QHelpSearchQuery(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QHelpSearchQuery *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QHelpSearchQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QHelpSearchQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHelpSearchQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHelpSearchQuery *>(sipSrc);
}


extern "C" {static void *array_QHelpSearchQuery(SIP_SSIZE_T);}
static void *array_QHelpSearchQuery(SIP_SSIZE_T sipNrElem)
{
    return new QHelpSearchQuery[sipNrElem];
}


extern "C" {static void *copy_QHelpSearchQuery(const void *, SIP_SSIZE_T);}
static void *copy_QHelpSearchQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHelpSearchQuery(reinterpret_cast<const QHelpSearchQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHelpSearchQuery(sipSimpleWrapper *);}
static void dealloc_QHelpSearchQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QHelpSearchQuery(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QHelpSearchQuery(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QHelpSearchQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QHelpSearchQuery *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHelpSearchQuery();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        QHelpSearchQuery::FieldName a0;
        const QStringList * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"EJ1",sipType_QHelpSearchQuery_FieldName,&a0,sipType_QStringList,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHelpSearchQuery(a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);
        }
    }

    if (!sipCpp)
    {
        const QHelpSearchQuery * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QHelpSearchQuery,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHelpSearchQuery(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}

static sipEnumMemberDef enummembers_QHelpSearchQuery[] = {
    {sipName_ALL, QHelpSearchQuery::ALL, 9},
    {sipName_ATLEAST, QHelpSearchQuery::ATLEAST, 9},
    {sipName_DEFAULT, QHelpSearchQuery::DEFAULT, 9},
    {sipName_FUZZY, QHelpSearchQuery::FUZZY, 9},
    {sipName_PHRASE, QHelpSearchQuery::PHRASE, 9},
    {sipName_WITHOUT, QHelpSearchQuery::WITHOUT, 9},
};


pyqt4ClassTypeDef sipTypeDef_QtHelp_QHelpSearchQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHelpSearchQuery,
        {0}
    },
    {
        sipNameNr_QHelpSearchQuery,
        {0, 0, 1},
        0, 0,
        6, enummembers_QHelpSearchQuery,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QHelpSearchQuery,
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
    dealloc_QHelpSearchQuery,
    assign_QHelpSearchQuery,
    array_QHelpSearchQuery,
    copy_QHelpSearchQuery,
    release_QHelpSearchQuery,
    cast_QHelpSearchQuery,
    0,
    0,
    0
},
    0,
    0,
    0
};
