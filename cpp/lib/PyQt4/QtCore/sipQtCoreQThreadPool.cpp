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

#line 39 "sip/QtCore/qthreadpool.sip"
#include <qthreadpool.h>
#line 39 "sipQtCoreQThreadPool.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtCoreQThreadPool.cpp"
#line 39 "sip/QtCore/qrunnable.sip"
#include <qrunnable.h>
#line 46 "sipQtCoreQThreadPool.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtCoreQThreadPool.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtCoreQThreadPool.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtCoreQThreadPool.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "sipQtCoreQThreadPool.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 61 "sipQtCoreQThreadPool.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 64 "sipQtCoreQThreadPool.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtCoreQThreadPool.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtCoreQThreadPool.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 73 "sipQtCoreQThreadPool.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 76 "sipQtCoreQThreadPool.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 79 "sipQtCoreQThreadPool.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 82 "sipQtCoreQThreadPool.cpp"


class sipQThreadPool : public QThreadPool
{
public:
    sipQThreadPool(QObject *);
    virtual ~sipQThreadPool();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQThreadPool(const sipQThreadPool &);
    sipQThreadPool &operator = (const sipQThreadPool &);

    char sipPyMethods[7];
};

sipQThreadPool::sipQThreadPool(QObject *a0): QThreadPool(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQThreadPool::~sipQThreadPool()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQThreadPool::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QThreadPool);
}

int sipQThreadPool::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QThreadPool::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QThreadPool,_c,_id,_a);

    return _id;
}

void *sipQThreadPool::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast && sip_QtCore_qt_metacast(sipPySelf,sipType_QThreadPool,_clname)) ? this : QThreadPool::qt_metacast(_clname);
}

bool sipQThreadPool::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_QtCore_12(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return sipVH_QtCore_12(sipGILState,meth,0,a0);
}

bool sipQThreadPool::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_QtCore_20(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return sipVH_QtCore_20(sipGILState,meth,0,a0,a1);
}

void sipQThreadPool::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    sipVH_QtCore_3(sipGILState,meth,0,a0);
}

void sipQThreadPool::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_19(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    sipVH_QtCore_19(sipGILState,meth,0,a0);
}

void sipQThreadPool::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_18(sip_gilstate_t,PyObject *,bool*,QEvent *);

    sipVH_QtCore_18(sipGILState,meth,0,a0);
}

void sipQThreadPool::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,bool*,const char *);

    sipVH_QtCore_17(sipGILState,meth,0,a0);
}

void sipQThreadPool::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,bool*,const char *);

    sipVH_QtCore_17(sipGILState,meth,0,a0);
}

int sipQThreadPool::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQThreadPool::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQThreadPool::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQThreadPool::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQThreadPool::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQThreadPool::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QThreadPool_receivers(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QThreadPool,&sipCpp,&a0))
        {
            int sipRes = 0;

#line 480 "sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
#line 335 "sipQtCoreQThreadPool.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QThreadPool,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QThreadPool,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QThreadPool,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QThreadPool,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QThreadPool,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_globalInstance(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_globalInstance(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QThreadPool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QThreadPool::globalInstance();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QThreadPool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_globalInstance);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_start(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_start(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QRunnable * a0;
        PyObject *a0Wrapper;
        int a1 = 0;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B@J8|i",&sipSelf,sipType_QThreadPool,&sipCpp,&a0Wrapper,sipType_QRunnable,&a0,&a1))
        {
#line 48 "sip/QtCore/qthreadpool.sip"
        // We have to handle the object ownership manually.
        Py_BEGIN_ALLOW_THREADS
        sipCpp->start(a0, a1);
        Py_END_ALLOW_THREADS
        
        if (a0->autoDelete())
            sipTransferTo(a0Wrapper, sipSelf);
#line 534 "sipQtCoreQThreadPool.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_start);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_tryStart(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_tryStart(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QRunnable * a0;
        PyObject *a0Wrapper;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B@J8",&sipSelf,sipType_QThreadPool,&sipCpp,&a0Wrapper,sipType_QRunnable,&a0))
        {
            bool sipRes = 0;

#line 59 "sip/QtCore/qthreadpool.sip"
        // We have to handle the object ownership manually.
        Py_BEGIN_ALLOW_THREADS
        sipRes = sipCpp->tryStart(a0);
        Py_END_ALLOW_THREADS
        
        if (a0->autoDelete())
            sipTransferTo(a0Wrapper, sipSelf);
#line 570 "sipQtCoreQThreadPool.cpp"

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_tryStart);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_expiryTimeout(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_expiryTimeout(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QThreadPool,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->expiryTimeout();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_expiryTimeout);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_setExpiryTimeout(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_setExpiryTimeout(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QThreadPool,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setExpiryTimeout(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_setExpiryTimeout);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_maxThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_maxThreadCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QThreadPool,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxThreadCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_maxThreadCount);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_setMaxThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_setMaxThreadCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QThreadPool,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaxThreadCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_setMaxThreadCount);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_activeThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_activeThreadCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QThreadPool,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->activeThreadCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_activeThreadCount);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_reserveThread(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_reserveThread(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QThreadPool,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reserveThread();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_reserveThread);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_releaseThread(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_releaseThread(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QThreadPool,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->releaseThread();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_releaseThread);

    return NULL;
}


extern "C" {static PyObject *meth_QThreadPool_waitForDone(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_waitForDone(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QThreadPool,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->waitForDone();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QThreadPool,sipName_waitForDone);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QThreadPool(void *, const sipTypeDef *);}
static void *cast_QThreadPool(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QThreadPool)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QThreadPool *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QThreadPool(void *, int);}
static void release_QThreadPool(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQThreadPool *>(sipCppV);
    else
        delete reinterpret_cast<QThreadPool *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QThreadPool(sipSimpleWrapper *);}
static void dealloc_QThreadPool(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQThreadPool *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QThreadPool(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QThreadPool(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QThreadPool(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQThreadPool *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQThreadPool(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QThreadPool[] = {{111, 255, 1}};


static PyMethodDef methods_QThreadPool[] = {
    {SIP_MLNAME_CAST(sipName_activeThreadCount), meth_QThreadPool_activeThreadCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QThreadPool_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QThreadPool_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QThreadPool_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QThreadPool_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expiryTimeout), meth_QThreadPool_expiryTimeout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalInstance), meth_QThreadPool_globalInstance, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maxThreadCount), meth_QThreadPool_maxThreadCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QThreadPool_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_releaseThread), meth_QThreadPool_releaseThread, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_reserveThread), meth_QThreadPool_reserveThread, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setExpiryTimeout), meth_QThreadPool_setExpiryTimeout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMaxThreadCount), meth_QThreadPool_setMaxThreadCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_start), meth_QThreadPool_start, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QThreadPool_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tryStart), meth_QThreadPool_tryStart, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_waitForDone), meth_QThreadPool_waitForDone, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QThreadPool = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QThreadPool,
        {0}
    },
    {
        sipNameNr_QThreadPool,
        {0, 0, 1},
        17, methods_QThreadPool,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QThreadPool,
    0,
    init_QThreadPool,
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
    dealloc_QThreadPool,
    0,
    0,
    0,
    release_QThreadPool,
    cast_QThreadPool,
    0,
    0,
    0
},
    &QThreadPool::staticMetaObject,
    0,
    0
};
