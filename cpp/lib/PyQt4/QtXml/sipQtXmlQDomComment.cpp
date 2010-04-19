/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:37 2010
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

#include "sipAPIQtXml.h"

#line 394 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "sipQtXmlQDomComment.cpp"

#line 69 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 43 "sipQtXmlQDomComment.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtXmlQDomComment.cpp"
#line 340 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 49 "sipQtXmlQDomComment.cpp"
#line 41 "sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 52 "sipQtXmlQDomComment.cpp"
#line 301 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 55 "sipQtXmlQDomComment.cpp"
#line 464 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 58 "sipQtXmlQDomComment.cpp"
#line 420 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 61 "sipQtXmlQDomComment.cpp"
#line 435 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 64 "sipQtXmlQDomComment.cpp"
#line 380 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 67 "sipQtXmlQDomComment.cpp"
#line 451 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 70 "sipQtXmlQDomComment.cpp"
#line 197 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 73 "sipQtXmlQDomComment.cpp"
#line 216 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 76 "sipQtXmlQDomComment.cpp"
#line 288 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 79 "sipQtXmlQDomComment.cpp"
#line 407 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 82 "sipQtXmlQDomComment.cpp"
#line 322 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 85 "sipQtXmlQDomComment.cpp"
#line 261 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 88 "sipQtXmlQDomComment.cpp"
#line 176 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 91 "sipQtXmlQDomComment.cpp"


extern "C" {static PyObject *meth_QDomComment_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomComment_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomComment *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomComment,&sipCpp))
        {
            QDomNode::NodeType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->nodeType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomComment,sipName_nodeType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomComment(void *, const sipTypeDef *);}
static void *cast_QDomComment(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDomComment)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDomCharacterData)->ctd_cast((QDomCharacterData *)(QDomComment *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomComment(void *, int);}
static void release_QDomComment(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDomComment *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDomComment(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomComment(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomComment *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomComment *>(sipSrc);
}


extern "C" {static void *array_QDomComment(SIP_SSIZE_T);}
static void *array_QDomComment(SIP_SSIZE_T sipNrElem)
{
    return new QDomComment[sipNrElem];
}


extern "C" {static void *copy_QDomComment(const void *, SIP_SSIZE_T);}
static void *copy_QDomComment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomComment(reinterpret_cast<const QDomComment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomComment(sipSimpleWrapper *);}
static void dealloc_QDomComment(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomComment(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QDomComment(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QDomComment(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QDomComment *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomComment();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QDomComment * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QDomComment,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomComment(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomComment[] = {{2, 255, 1}};


static PyMethodDef methods_QDomComment[] = {
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomComment_nodeType, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QDomComment = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDomComment,
        {0}
    },
    {
        sipNameNr_QDomComment,
        {0, 0, 1},
        1, methods_QDomComment,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QDomComment,
    0,
    init_QDomComment,
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
    dealloc_QDomComment,
    assign_QDomComment,
    array_QDomComment,
    copy_QDomComment,
    release_QDomComment,
    cast_QDomComment,
    0,
    0,
    0
},
    0,
    0,
    0
};
