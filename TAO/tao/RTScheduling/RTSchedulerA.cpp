// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "RTScheduler.h"
#include "tao/Typecode.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_ThreadAction[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  34,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x52545363),
  ACE_NTOHL (0x68656475),
  ACE_NTOHL (0x6c696e67),
  ACE_NTOHL (0x2f546872),
  ACE_NTOHL (0x65616441),
  ACE_NTOHL (0x6374696f),
  ACE_NTOHL (0x6e3a312e),
  ACE_NTOHL (0x30000000),  // repository ID = IDL:RTScheduling/ThreadAction:1.0
    13,
  ACE_NTOHL (0x54687265),
  ACE_NTOHL (0x61644163),
  ACE_NTOHL (0x74696f6e),
  ACE_NTOHL (0x0),  // name = ThreadAction
  };

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_ThreadAction (
    CORBA::tk_objref,
    sizeof (_oc_RTScheduling_ThreadAction),
    (char *) &_oc_RTScheduling_ThreadAction,
    0,
    0
  );

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr _tc_ThreadAction =
    &_tc_TAO_tc_RTScheduling_ThreadAction;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_DistributableThread_DT_State[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  50,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x52545363),
  ACE_NTOHL (0x68656475),
  ACE_NTOHL (0x6c696e67),
  ACE_NTOHL (0x2f446973),
  ACE_NTOHL (0x74726962),
  ACE_NTOHL (0x75746162),
  ACE_NTOHL (0x6c655468),
  ACE_NTOHL (0x72656164),
  ACE_NTOHL (0x2f44545f),
  ACE_NTOHL (0x53746174),
  ACE_NTOHL (0x653a312e),
  ACE_NTOHL (0x30000000),  // repository ID = IDL:RTScheduling/DistributableThread/DT_State:1.0
  9,
  ACE_NTOHL (0x44545f53),
  ACE_NTOHL (0x74617465),
  ACE_NTOHL (0x0),  // name = DT_State
  2, // member count
  7,
  ACE_NTOHL (0x41435449),
  ACE_NTOHL (0x56450000),  // name = ACTIVE
  10,
  ACE_NTOHL (0x43414e43),
  ACE_NTOHL (0x454c4c45),
  ACE_NTOHL (0x44000000),  // name = CANCELLED
  };

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_DistributableThread_DT_State (
    CORBA::tk_enum,
    sizeof (_oc_RTScheduling_DistributableThread_DT_State),
    (char *) &_oc_RTScheduling_DistributableThread_DT_State,
    0,
    0
  );

::CORBA::TypeCode_ptr RTScheduling::DistributableThread::_tc_DT_State =
  &_tc_TAO_tc_RTScheduling_DistributableThread_DT_State;

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_DistributableThread[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  41,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x52545363),
  ACE_NTOHL (0x68656475),
  ACE_NTOHL (0x6c696e67),
  ACE_NTOHL (0x2f446973),
  ACE_NTOHL (0x74726962),
  ACE_NTOHL (0x75746162),
  ACE_NTOHL (0x6c655468),
  ACE_NTOHL (0x72656164),
  ACE_NTOHL (0x3a312e30),
  ACE_NTOHL (0x0),  // repository ID = IDL:RTScheduling/DistributableThread:1.0
    20,
  ACE_NTOHL (0x44697374),
  ACE_NTOHL (0x72696275),
  ACE_NTOHL (0x7461626c),
  ACE_NTOHL (0x65546872),
  ACE_NTOHL (0x65616400),  // name = DistributableThread
  };

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_DistributableThread (
    CORBA::tk_objref,
    sizeof (_oc_RTScheduling_DistributableThread),
    (char *) &_oc_RTScheduling_DistributableThread,
    0,
    0
  );

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr _tc_DistributableThread =
    &_tc_TAO_tc_RTScheduling_DistributableThread;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_Current_IdType[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  36,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x52545363),
  ACE_NTOHL (0x68656475),
  ACE_NTOHL (0x6c696e67),
  ACE_NTOHL (0x2f437572),
  ACE_NTOHL (0x72656e74),
  ACE_NTOHL (0x2f496454),
  ACE_NTOHL (0x7970653a),
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:RTScheduling/Current/IdType:1.0
    7,
  ACE_NTOHL (0x49645479),
  ACE_NTOHL (0x70650000),  // name = IdType
    CORBA::tk_sequence, // typecode kind
  12, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_octet,

    0U,

};

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_Current_IdType (
    CORBA::tk_alias,
    sizeof (_oc_RTScheduling_Current_IdType),
    (char *) &_oc_RTScheduling_Current_IdType,
    0,
    0
  );

::CORBA::TypeCode_ptr RTScheduling::Current::_tc_IdType =
  &_tc_TAO_tc_RTScheduling_Current_IdType;

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_Current_NameList[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  38,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x52545363),
  ACE_NTOHL (0x68656475), 
  ACE_NTOHL (0x6c696e67), 
  ACE_NTOHL (0x2f437572), 
  ACE_NTOHL (0x72656e74), 
  ACE_NTOHL (0x2f4e616d), 
  ACE_NTOHL (0x654c6973), 
  ACE_NTOHL (0x743a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:RTScheduling/Current/NameList:1.0
    9,
  ACE_NTOHL (0x4e616d65), 
  ACE_NTOHL (0x4c697374), 
  ACE_NTOHL (0x0),  // name = NameList
    CORBA::tk_sequence, // typecode kind
  16, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_string, 
    0U, // string length
    0U,

};

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_Current_NameList (
    CORBA::tk_alias,
    sizeof (_oc_RTScheduling_Current_NameList),
    (char *) &_oc_RTScheduling_Current_NameList,
    0,
    0
  );

::CORBA::TypeCode_ptr RTScheduling::Current::_tc_NameList =
  &_tc_TAO_tc_RTScheduling_Current_NameList;

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_Current[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  29,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x52545363), 
  ACE_NTOHL (0x68656475), 
  ACE_NTOHL (0x6c696e67), 
  ACE_NTOHL (0x2f437572), 
  ACE_NTOHL (0x72656e74), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:RTScheduling/Current:1.0
    8,
  ACE_NTOHL (0x43757272), 
  ACE_NTOHL (0x656e7400),  // name = Current
  };

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_Current (
    CORBA::tk_objref,
    sizeof (_oc_RTScheduling_Current),
    (char *) &_oc_RTScheduling_Current,
    0,
    0
  );

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr _tc_Current =
    &_tc_TAO_tc_RTScheduling_Current;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_ResourceManager[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x52545363), 
  ACE_NTOHL (0x68656475), 
  ACE_NTOHL (0x6c696e67), 
  ACE_NTOHL (0x2f526573), 
  ACE_NTOHL (0x6f757263), 
  ACE_NTOHL (0x654d616e), 
  ACE_NTOHL (0x61676572), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:RTScheduling/ResourceManager:1.0
    16,
  ACE_NTOHL (0x5265736f), 
  ACE_NTOHL (0x75726365), 
  ACE_NTOHL (0x4d616e61), 
  ACE_NTOHL (0x67657200),  // name = ResourceManager
  };

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_ResourceManager (
    CORBA::tk_objref,
    sizeof (_oc_RTScheduling_ResourceManager),
    (char *) &_oc_RTScheduling_ResourceManager,
    0,
    0
  );

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr _tc_ResourceManager =
    &_tc_TAO_tc_RTScheduling_ResourceManager;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_RTScheduling_Scheduler[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  31,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x52545363), 
  ACE_NTOHL (0x68656475), 
  ACE_NTOHL (0x6c696e67), 
  ACE_NTOHL (0x2f536368), 
  ACE_NTOHL (0x6564756c), 
  ACE_NTOHL (0x65723a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:RTScheduling/Scheduler:1.0
    10,
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c65), 
  ACE_NTOHL (0x72000000),  // name = Scheduler
  };

static CORBA::TypeCode _tc_TAO_tc_RTScheduling_Scheduler (
    CORBA::tk_objref,
    sizeof (_oc_RTScheduling_Scheduler),
    (char *) &_oc_RTScheduling_Scheduler,
    0,
    0
  );

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr _tc_Scheduler =
    &_tc_TAO_tc_RTScheduling_Scheduler;
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
