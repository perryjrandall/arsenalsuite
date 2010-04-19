/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:32 2010
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

#include "sipAPIQtSql.h"

#line 37 "sip/QtSql/qsqlfield.sip"
#include <qsqlfield.h>
#line 39 "sipQtSqlQSqlField.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtSqlQSqlField.cpp"
#line 131 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtSqlQSqlField.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 49 "sipQtSqlQSqlField.cpp"


extern "C" {static PyObject *meth_QSqlField_setValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QVariant * a0;
        int a0State = 0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlField,&sipCpp,sipType_QVariant,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setValue);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_value(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_value(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->value());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_value);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setName(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlField,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setName(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setName);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_name(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_isNull);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setReadOnly(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setReadOnly(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setReadOnly(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setReadOnly);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_isReadOnly(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isReadOnly(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isReadOnly();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_isReadOnly);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_clear(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_clear);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_type(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_type(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_type);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_isAutoValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isAutoValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAutoValue();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_isAutoValue);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setType(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QVariant::Type a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QSqlField,&sipCpp,sipType_QVariant_Type,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setType);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setRequiredStatus(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setRequiredStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField::RequiredStatus a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QSqlField,&sipCpp,sipType_QSqlField_RequiredStatus,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRequiredStatus(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setRequiredStatus);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setRequired(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setRequired(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRequired(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setRequired);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setLength(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setLength(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLength(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setLength);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setPrecision(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setPrecision(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPrecision(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QVariant * a0;
        int a0State = 0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlField,&sipCpp,sipType_QVariant,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDefaultValue(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setDefaultValue);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setSqlType(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setSqlType(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSqlType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setSqlType);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGenerated(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setGenerated);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_setAutoValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setAutoValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipType_QSqlField,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAutoValue(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_setAutoValue);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_requiredStatus(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_requiredStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            QSqlField::RequiredStatus sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->requiredStatus();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSqlField_RequiredStatus);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_requiredStatus);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_length(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_length(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_length);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_precision(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_precision(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->precision();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_precision);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_defaultValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_defaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->defaultValue());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_defaultValue);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_typeID(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_typeID(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->typeID();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_typeID);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_isGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isGenerated();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_isGenerated);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlField_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlField,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlField,sipName_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_QSqlField___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSqlField___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlField *sipCpp = reinterpret_cast<QSqlField *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlField));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QSqlField * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QSqlField,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlField::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtSql,ne_slot,sipType_QSqlField,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSqlField___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSqlField___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlField *sipCpp = reinterpret_cast<QSqlField *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlField));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QSqlField * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QSqlField,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlField::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtSql,eq_slot,sipType_QSqlField,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSqlField(void *, const sipTypeDef *);}
static void *cast_QSqlField(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSqlField)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlField(void *, int);}
static void release_QSqlField(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSqlField *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSqlField(sipSimpleWrapper *);}
static void dealloc_QSqlField(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSqlField(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QSqlField(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QSqlField(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QSqlField *sipCpp = 0;

    if (!sipCpp)
    {
        const QString& a0def = QString();
        const QString * a0 = &a0def;
        int a0State = 0;
        QVariant::Type a1 = QVariant::Invalid;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|J1E",sipType_QString,&a0,&a0State,sipType_QVariant_Type,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlField(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
        }
    }

    if (!sipCpp)
    {
        const QSqlField * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QSqlField,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlField(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSqlField[] = {
    {(void *)slot_QSqlField___ne__, ne_slot},
    {(void *)slot_QSqlField___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSqlField[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QSqlField_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_defaultValue), meth_QSqlField_defaultValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isAutoValue), meth_QSqlField_isAutoValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isGenerated), meth_QSqlField_isGenerated, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSqlField_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isReadOnly), meth_QSqlField_isReadOnly, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSqlField_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_length), meth_QSqlField_length, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QSqlField_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_precision), meth_QSqlField_precision, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_requiredStatus), meth_QSqlField_requiredStatus, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAutoValue), meth_QSqlField_setAutoValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDefaultValue), meth_QSqlField_setDefaultValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGenerated), meth_QSqlField_setGenerated, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setLength), meth_QSqlField_setLength, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setName), meth_QSqlField_setName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPrecision), meth_QSqlField_setPrecision, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setReadOnly), meth_QSqlField_setReadOnly, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setRequired), meth_QSqlField_setRequired, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setRequiredStatus), meth_QSqlField_setRequiredStatus, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setSqlType), meth_QSqlField_setSqlType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setType), meth_QSqlField_setType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QSqlField_setValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QSqlField_type, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_typeID), meth_QSqlField_typeID, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_value), meth_QSqlField_value, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSqlField[] = {
    {sipName_Optional, QSqlField::Optional, 15},
    {sipName_Required, QSqlField::Required, 15},
    {sipName_Unknown, QSqlField::Unknown, 15},
};


pyqt4ClassTypeDef sipTypeDef_QtSql_QSqlField = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSqlField,
        {0}
    },
    {
        sipNameNr_QSqlField,
        {0, 0, 1},
        26, methods_QSqlField,
        3, enummembers_QSqlField,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSqlField,
    init_QSqlField,
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
    dealloc_QSqlField,
    0,
    0,
    0,
    release_QSqlField,
    cast_QSqlField,
    0,
    0,
    0
},
    0,
    0,
    0
};
