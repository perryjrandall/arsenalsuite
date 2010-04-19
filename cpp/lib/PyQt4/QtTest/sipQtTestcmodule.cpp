/*
 * Module code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:35 2010
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

#include "sipAPIQtTest.h"


/* Define the strings used by this module. */
const char sipStrings_QtTest[] = {
    'Q', 'T', 'e', 's', 't', ':', ':', 'M', 'o', 'u', 's', 'e', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'Q', 'T', 'e', 's', 't', ':', ':', 'K', 'e', 'y', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'M', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'T', 'e', 's', 't', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'C', 'l', 'i', 'c', 'k', 0,
    'M', 'o', 'u', 's', 'e', 'D', 'C', 'l', 'i', 'c', 'k', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 0,
    'm', 'o', 'u', 's', 'e', 'C', 'l', 'i', 'c', 'k', 0,
    'M', 'o', 'u', 's', 'e', 'C', 'l', 'i', 'c', 'k', 0,
    'M', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 0,
    'k', 'e', 'y', 'C', 'l', 'i', 'c', 'k', 's', 0,
    'M', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 0,
    'k', 'e', 'y', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'C', 'l', 'i', 'c', 'k', 0,
    'q', 'S', 'l', 'e', 'e', 'p', 0,
    'q', 'W', 'a', 'i', 't', 0,
    'Q', 'T', 'e', 's', 't', 0,
};
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QTest__MouseAction, {0}}, sipNameNr_MouseAction, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QTest__KeyAction, {0}}, sipNameNr_KeyAction, 0, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtTest_QTest.super.ctd_base,
    &enumTypes[1].etd_base,
    &enumTypes[0].etd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 0, NULL},
    {"PyQt4.QtGui", 0, NULL},
    {NULL, -1, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtTest = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtTest,
    0,
    0,
    sipStrings_QtTest,
    importsTable,
    NULL,
    3,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtTest;
const sipExportedModuleDef *sipModuleAPI_QtTest_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtTest_QtGui;

sip_qt_metaobject_func sip_QtTest_qt_metaobject;
sip_qt_metacall_func sip_QtTest_qt_metacall;
sip_qt_metacast_func sip_QtTest_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtTest
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtTest
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtTest",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtTest, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtTest), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Import the SIP module and get it's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule("sip");
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>("sip"));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");

    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
    {
        Py_DECREF(sip_sipmod);
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sipAPI_QtTest = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtTest,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        Py_DECREF(sip_sipmod);
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtTest_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtTest_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtTest_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtTest,sipModuleDict) < 0)
    {
        Py_DECREF(sip_sipmod);
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtTest_QtCore = sipModuleAPI_QtTest.em_imports[0].im_module;
    sipModuleAPI_QtTest_QtGui = sipModuleAPI_QtTest.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
