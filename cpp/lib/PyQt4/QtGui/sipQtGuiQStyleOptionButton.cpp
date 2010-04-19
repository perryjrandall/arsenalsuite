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

#line 438 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionButton.cpp"

#line 438 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 43 "sipQtGuiQStyleOptionButton.cpp"
#line 41 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 46 "sipQtGuiQStyleOptionButton.cpp"
#line 41 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 49 "sipQtGuiQStyleOptionButton.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtGuiQStyleOptionButton.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 55 "sipQtGuiQStyleOptionButton.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionButton(void *, const sipTypeDef *);}
static void *cast_QStyleOptionButton(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionButton)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionButton *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionButton(void *, int);}
static void release_QStyleOptionButton(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionButton *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionButton(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionButton(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionButton *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionButton *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionButton(SIP_SSIZE_T);}
static void *array_QStyleOptionButton(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionButton[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionButton(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionButton(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionButton(reinterpret_cast<const QStyleOptionButton *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionButton(sipSimpleWrapper *);}
static void dealloc_QStyleOptionButton(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionButton(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionButton(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyleOptionButton(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyleOptionButton *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionButton();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionButton * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionButton,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionButton(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionButton[] = {{440, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionButton[] = {
    {sipName_AutoDefaultButton, QStyleOptionButton::AutoDefaultButton, 445},
    {sipName_CommandLinkButton, QStyleOptionButton::CommandLinkButton, 445},
    {sipName_DefaultButton, QStyleOptionButton::DefaultButton, 445},
    {sipName_Flat, QStyleOptionButton::Flat, 445},
    {sipName_HasMenu, QStyleOptionButton::HasMenu, 445},
    {sipName_None, QStyleOptionButton::None, 445},
    {sipName_Type, QStyleOptionButton::Type, 447},
    {sipName_Version, QStyleOptionButton::Version, 448},
};


extern "C" {static PyObject *varget_QStyleOptionButton_features(void *, PyObject *);}
static PyObject *varget_QStyleOptionButton_features(void *sipSelf, PyObject *)
{
    QStyleOptionButton::ButtonFeatures *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipVal = &sipCpp->features;

    return sipConvertFromType(sipVal,sipType_QStyleOptionButton_ButtonFeatures, NULL);
}


extern "C" {static int varset_QStyleOptionButton_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionButton::ButtonFeatures *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionButton_ButtonFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionButton_ButtonFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionButton_icon(void *, PyObject *);}
static PyObject *varget_QStyleOptionButton_icon(void *sipSelf, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipVal = &sipCpp->icon;

    return sipConvertFromType(sipVal,sipType_QIcon, NULL);
}


extern "C" {static int varset_QStyleOptionButton_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionButton_iconSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionButton_iconSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipVal = &sipCpp->iconSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionButton_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionButton_text(void *, PyObject *);}
static PyObject *varget_QStyleOptionButton_text(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionButton_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionButton_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QStyleOptionButton *sipCpp = reinterpret_cast<QStyleOptionButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionButton[] = {
    {sipName_features, varget_QStyleOptionButton_features, varset_QStyleOptionButton_features, 0},
    {sipName_icon, varget_QStyleOptionButton_icon, varset_QStyleOptionButton_icon, 0},
    {sipName_iconSize, varget_QStyleOptionButton_iconSize, varset_QStyleOptionButton_iconSize, 0},
    {sipName_text, varget_QStyleOptionButton_text, varset_QStyleOptionButton_text, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionButton = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionButton,
        {0}
    },
    {
        sipNameNr_QStyleOptionButton,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionButton,
        4, variables_QStyleOptionButton,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QStyleOptionButton,
    0,
    init_QStyleOptionButton,
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
    dealloc_QStyleOptionButton,
    assign_QStyleOptionButton,
    array_QStyleOptionButton,
    copy_QStyleOptionButton,
    release_QStyleOptionButton,
    cast_QStyleOptionButton,
    0,
    0,
    0
},
    0,
    0,
    0
};
