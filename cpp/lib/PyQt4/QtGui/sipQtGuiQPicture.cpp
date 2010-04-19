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

#line 41 "sip/QtGui/qpicture.sip"
#include <qpicture.h>
#line 39 "sipQtGuiQPicture.cpp"

#line 37 "sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 43 "sipQtGuiQPicture.cpp"
#line 69 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 46 "sipQtGuiQPicture.cpp"
#line 41 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 49 "sipQtGuiQPicture.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 52 "sipQtGuiQPicture.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 55 "sipQtGuiQPicture.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 58 "sipQtGuiQPicture.cpp"
#line 41 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 61 "sipQtGuiQPicture.cpp"
#line 41 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 64 "sipQtGuiQPicture.cpp"
#line 41 "sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 67 "sipQtGuiQPicture.cpp"


class sipQPicture : public QPicture
{
public:
    sipQPicture(int);
    sipQPicture(const QPicture&);
    virtual ~sipQPicture();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtectVirt_metric(bool,QPaintDevice::PaintDeviceMetric) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int devType() const;
    void setData(const char *,unsigned);
    QPaintEngine * paintEngine() const;
    int metric(QPaintDevice::PaintDeviceMetric) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPicture(const sipQPicture &);
    sipQPicture &operator = (const sipQPicture &);

    char sipPyMethods[4];
};

sipQPicture::sipQPicture(int a0): QPicture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPicture::sipQPicture(const QPicture& a0): QPicture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPicture::~sipQPicture()
{
    sipCommonDtor(sipPySelf);
}

int sipQPicture::devType() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_devType);

    if (!meth)
        return QPicture::devType();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

void sipQPicture::setData(const char *a0,unsigned a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setData);

    if (!meth)
    {
        QPicture::setData(a0,a1);
        return;
    }

    extern void sipVH_QtGui_127(sip_gilstate_t,PyObject *,bool*,const char *,unsigned);

    sipVH_QtGui_127(sipGILState,meth,0,a0,a1);
}

QPaintEngine * sipQPicture::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_paintEngine);

    if (!meth)
        return QPicture::paintEngine();

    extern QPaintEngine * sipVH_QtGui_28(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_28(sipGILState,meth,0);
}

int sipQPicture::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_metric);

    if (!meth)
        return QPicture::metric(a0);

    extern int sipVH_QtGui_15(sip_gilstate_t,PyObject *,bool*,QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_15(sipGILState,meth,0,a0);
}

int sipQPicture::sipProtectVirt_metric(bool sipSelfWasArg,QPaintDevice::PaintDeviceMetric a0) const
{
    return (sipSelfWasArg ? QPicture::metric(a0) : metric(a0));
}


extern "C" {static PyObject *meth_QPicture_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPicture_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_isNull);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_devType(PyObject *, PyObject *);}
static PyObject *meth_QPicture_devType(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QPicture::devType() : sipCpp->devType());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_devType);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_size(PyObject *, PyObject *);}
static PyObject *meth_QPicture_size(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_size);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_data(PyObject *, PyObject *);}
static PyObject *meth_QPicture_data(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            const char *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->data();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_data);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_setData(PyObject *, PyObject *);}
static PyObject *meth_QPicture_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        SIP_SSIZE_T a1;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bk",&sipSelf,sipType_QPicture,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QPicture::setData(a0,(unsigned)a1) : sipCpp->setData(a0,(unsigned)a1));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_setData);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_play(PyObject *, PyObject *);}
static PyObject *meth_QPicture_play(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPainter * a0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QPicture,&sipCpp,sipType_QPainter,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->play(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_play);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_load(PyObject *, PyObject *);}
static PyObject *meth_QPicture_load(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QIODevice * a0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8|s",&sipSelf,sipType_QPicture,&sipCpp,sipType_QIODevice,&a0,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|s",&sipSelf,sipType_QPicture,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_load);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_save(PyObject *, PyObject *);}
static PyObject *meth_QPicture_save(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QIODevice * a0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8|s",&sipSelf,sipType_QPicture,&sipCpp,sipType_QIODevice,&a0,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->save(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1 = 0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|s",&sipSelf,sipType_QPicture,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->save(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_save);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QPicture_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->boundingRect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_boundingRect);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_setBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QPicture_setBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QRect * a0;
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QPicture,&sipCpp,sipType_QRect,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBoundingRect(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_setBoundingRect);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_detach(PyObject *, PyObject *);}
static PyObject *meth_QPicture_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->detach();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_detach);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QPicture_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDetached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_isDetached);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_pictureFormat(PyObject *, PyObject *);}
static PyObject *meth_QPicture_pictureFormat(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipType_QString,&a0,&a0State))
        {
            const char *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QPicture::pictureFormat(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_pictureFormat);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_inputFormats(PyObject *, PyObject *);}
static PyObject *meth_QPicture_inputFormats(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QList<QByteArray> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(QPicture::inputFormats());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_inputFormats);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_outputFormats(PyObject *, PyObject *);}
static PyObject *meth_QPicture_outputFormats(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QList<QByteArray> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(QPicture::outputFormats());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_outputFormats);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_inputFormatList(PyObject *, PyObject *);}
static PyObject *meth_QPicture_inputFormatList(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QPicture::inputFormatList());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_inputFormatList);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_outputFormatList(PyObject *, PyObject *);}
static PyObject *meth_QPicture_outputFormatList(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QPicture::outputFormatList());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_outputFormatList);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_paintEngine(PyObject *, PyObject *);}
static PyObject *meth_QPicture_paintEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QPicture,&sipCpp))
        {
            QPaintEngine *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QPicture::paintEngine() : sipCpp->paintEngine());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QPaintEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_paintEngine);

    return NULL;
}


extern "C" {static PyObject *meth_QPicture_metric(PyObject *, PyObject *);}
static PyObject *meth_QPicture_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPaintDevice::PaintDeviceMetric a0;
        sipQPicture *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pE",&sipSelf,sipType_QPicture,&sipCpp,sipType_QPaintDevice_PaintDeviceMetric,&a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_metric(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QPicture,sipName_metric);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPicture(void *, const sipTypeDef *);}
static void *cast_QPicture(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPicture)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QPaintDevice)->ctd_cast((QPaintDevice *)(QPicture *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPicture(void *, int);}
static void release_QPicture(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPicture *>(sipCppV);
    else
        delete reinterpret_cast<QPicture *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPicture(sipSimpleWrapper *);}
static void dealloc_QPicture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPicture *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPicture(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QPicture(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QPicture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQPicture *sipCpp = 0;

    if (!sipCpp)
    {
        int a0 = -1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPicture(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QPicture * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QPicture,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPicture(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPicture[] = {{318, 255, 1}};


static PyMethodDef methods_QPicture[] = {
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QPicture_boundingRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QPicture_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_detach), meth_QPicture_detach, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_devType), meth_QPicture_devType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inputFormatList), meth_QPicture_inputFormatList, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inputFormats), meth_QPicture_inputFormats, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QPicture_isDetached, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPicture_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load), meth_QPicture_load, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metric), meth_QPicture_metric, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_outputFormatList), meth_QPicture_outputFormatList, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_outputFormats), meth_QPicture_outputFormats, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_paintEngine), meth_QPicture_paintEngine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pictureFormat), meth_QPicture_pictureFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_play), meth_QPicture_play, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_save), meth_QPicture_save, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setBoundingRect), meth_QPicture_setBoundingRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setData), meth_QPicture_setData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QPicture_size, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPicture = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPicture,
        {0}
    },
    {
        sipNameNr_QPicture,
        {0, 0, 1},
        19, methods_QPicture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QPicture,
    0,
    init_QPicture,
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
    dealloc_QPicture,
    0,
    0,
    0,
    release_QPicture,
    cast_QPicture,
    0,
    0,
    0
},
    0,
    0,
    0
};
