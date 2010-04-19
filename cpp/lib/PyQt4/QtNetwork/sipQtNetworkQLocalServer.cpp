/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:27 2010
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

#include "sipAPIQtNetwork.h"

#line 39 "sip/QtNetwork/qlocalserver.sip"
#include <qlocalserver.h>
#line 39 "sipQtNetworkQLocalServer.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtNetworkQLocalServer.cpp"
#line 39 "sip/QtNetwork/qlocalsocket.sip"
#include <QtGlobal>
#line 46 "sipQtNetworkQLocalServer.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtNetworkQLocalServer.cpp"
#line 37 "sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 52 "sipQtNetworkQLocalServer.cpp"
#line 68 "sip/QtNetwork/qlocalsocket.sip"
#include <qlocalsocket.h>
#line 55 "sipQtNetworkQLocalServer.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtNetworkQLocalServer.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtNetworkQLocalServer.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 64 "sipQtNetworkQLocalServer.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 67 "sipQtNetworkQLocalServer.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtNetworkQLocalServer.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 73 "sipQtNetworkQLocalServer.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 76 "sipQtNetworkQLocalServer.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 79 "sipQtNetworkQLocalServer.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 82 "sipQtNetworkQLocalServer.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 85 "sipQtNetworkQLocalServer.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 88 "sipQtNetworkQLocalServer.cpp"


class sipQLocalServer : public QLocalServer
{
public:
    sipQLocalServer(QObject *);
    virtual ~sipQLocalServer();

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
    void sipProtectVirt_incomingConnection(bool,quintptr);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool hasPendingConnections() const;
    QLocalSocket * nextPendingConnection();
    void incomingConnection(quintptr);
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
    sipQLocalServer(const sipQLocalServer &);
    sipQLocalServer &operator = (const sipQLocalServer &);

    char sipPyMethods[10];
};

sipQLocalServer::sipQLocalServer(QObject *a0): QLocalServer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLocalServer::~sipQLocalServer()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQLocalServer::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QLocalServer);
}

int sipQLocalServer::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QLocalServer::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QLocalServer,_c,_id,_a);

    return _id;
}

void *sipQLocalServer::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast && sip_QtNetwork_qt_metacast(sipPySelf,sipType_QLocalServer,_clname)) ? this : QLocalServer::qt_metacast(_clname);
}

bool sipQLocalServer::hasPendingConnections() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_hasPendingConnections);

    if (!meth)
        return QLocalServer::hasPendingConnections();

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

QLocalSocket * sipQLocalServer::nextPendingConnection()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_nextPendingConnection);

    if (!meth)
        return QLocalServer::nextPendingConnection();

    extern QLocalSocket * sipVH_QtNetwork_16(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtNetwork_16(sipGILState,meth,0);
}

void sipQLocalServer::incomingConnection(quintptr a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_incomingConnection);

    if (!meth)
    {
        QLocalServer::incomingConnection(a0);
        return;
    }

    extern void sipVH_QtNetwork_15(sip_gilstate_t,PyObject *,bool*,quintptr);

    sipVH_QtNetwork_15(sipGILState,meth,0,a0);
}

bool sipQLocalServer::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQLocalServer::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQLocalServer::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQLocalServer::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQLocalServer::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQLocalServer::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQLocalServer::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQLocalServer::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQLocalServer::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQLocalServer::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQLocalServer::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQLocalServer::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQLocalServer::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

void sipQLocalServer::sipProtectVirt_incomingConnection(bool sipSelfWasArg,quintptr a0)
{
    (sipSelfWasArg ? QLocalServer::incomingConnection(a0) : incomingConnection(a0));
}


extern "C" {static PyObject *meth_QLocalServer_receivers(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QLocalServer,&sipCpp,&a0))
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
#line 398 "sipQtNetworkQLocalServer.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QLocalServer,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QLocalServer,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QLocalServer,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QLocalServer,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QLocalServer,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_close(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_close(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->close();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_close);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_errorString(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_errorString);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_hasPendingConnections(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_hasPendingConnections(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLocalServer::hasPendingConnections() : sipCpp->hasPendingConnections());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_hasPendingConnections);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_isListening(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_isListening(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isListening();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_isListening);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_listen(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_listen(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QLocalServer,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->listen(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_listen);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_maxPendingConnections(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_maxPendingConnections(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxPendingConnections();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_maxPendingConnections);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_nextPendingConnection(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_nextPendingConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            QLocalSocket *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLocalServer::nextPendingConnection() : sipCpp->nextPendingConnection());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QLocalSocket,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_nextPendingConnection);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_serverName(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_serverName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->serverName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_serverName);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_fullServerName(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_fullServerName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fullServerName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_fullServerName);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_serverError(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_serverError(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QLocalServer,&sipCpp))
        {
            QAbstractSocket::SocketError sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->serverError();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAbstractSocket_SocketError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_serverError);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_setMaxPendingConnections(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_setMaxPendingConnections(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QLocalServer,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaxPendingConnections(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_setMaxPendingConnections);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_waitForNewConnection(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_waitForNewConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0 = 0;
        bool a1;
        QLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|i",&sipSelf,sipType_QLocalServer,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForNewConnection(a0,&a1);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(bb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_waitForNewConnection);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_removeServer(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_removeServer(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLocalServer::removeServer(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_removeServer);

    return NULL;
}


extern "C" {static PyObject *meth_QLocalServer_incomingConnection(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_incomingConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        quintptr * a0;
        int a0State = 0;
        sipQLocalServer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ1",&sipSelf,sipType_QLocalServer,&sipCpp,sipType_quintptr,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_incomingConnection(sipSelfWasArg,*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_quintptr,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QLocalServer,sipName_incomingConnection);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLocalServer(void *, const sipTypeDef *);}
static void *cast_QLocalServer(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QLocalServer)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QLocalServer *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLocalServer(void *, int);}
static void release_QLocalServer(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQLocalServer *>(sipCppV);
    else
        delete reinterpret_cast<QLocalServer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QLocalServer(sipSimpleWrapper *);}
static void dealloc_QLocalServer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQLocalServer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QLocalServer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QLocalServer(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QLocalServer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQLocalServer *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLocalServer(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QLocalServer[] = {{111, 0, 1}};


static PyMethodDef methods_QLocalServer[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QLocalServer_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_close), meth_QLocalServer_close, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QLocalServer_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QLocalServer_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QLocalServer_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QLocalServer_errorString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fullServerName), meth_QLocalServer_fullServerName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasPendingConnections), meth_QLocalServer_hasPendingConnections, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_incomingConnection), meth_QLocalServer_incomingConnection, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isListening), meth_QLocalServer_isListening, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_listen), meth_QLocalServer_listen, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maxPendingConnections), meth_QLocalServer_maxPendingConnections, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_nextPendingConnection), meth_QLocalServer_nextPendingConnection, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QLocalServer_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeServer), meth_QLocalServer_removeServer, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_serverError), meth_QLocalServer_serverError, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_serverName), meth_QLocalServer_serverName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMaxPendingConnections), meth_QLocalServer_setMaxPendingConnections, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QLocalServer_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_waitForNewConnection), meth_QLocalServer_waitForNewConnection, METH_VARARGS, NULL}
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QLocalServer[] = {
    {"newConnection()", 0},
    {0, 0}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QLocalServer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QLocalServer,
        {0}
    },
    {
        sipNameNr_QLocalServer,
        {0, 0, 1},
        20, methods_QLocalServer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QLocalServer,
    0,
    init_QLocalServer,
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
    dealloc_QLocalServer,
    0,
    0,
    0,
    release_QLocalServer,
    cast_QLocalServer,
    0,
    0,
    0
},
    &QLocalServer::staticMetaObject,
    0,
    pyqt4_signals_QLocalServer
};
