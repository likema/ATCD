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

#include "PS_CurrentC.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableServer_Current[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  39,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x53657276), 
  ACE_NTOHL (0x65722f43), 
  ACE_NTOHL (0x75727265), 
  ACE_NTOHL (0x6e743a32), 
  ACE_NTOHL (0x2e330000),  // repository ID = IDL:omg.org/PortableServer/Current:2.3
    8,
  ACE_NTOHL (0x43757272), 
  ACE_NTOHL (0x656e7400),  // name = Current
  };

static CORBA::TypeCode _tc_TAO_tc_PortableServer_Current (
    CORBA::tk_objref,
    sizeof (_oc_PortableServer_Current),
    (char *) &_oc_PortableServer_Current,
    0,
    0
  );

namespace PortableServer
{
  ::CORBA::TypeCode_ptr _tc_Current =
    &_tc_TAO_tc_PortableServer_Current;
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<PortableServer::Current>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<PortableServer::Current>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<PortableServer::Current>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableServer::Current_ptr _tao_elem
  )
{
  PortableServer::Current_ptr _tao_objptr =
    PortableServer::Current::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableServer::Current_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<PortableServer::Current>::insert (
      _tao_any,
      PortableServer::Current::_tao_any_destructor,
      PortableServer::_tc_Current,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    PortableServer::Current_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<PortableServer::Current>::extract (
        _tao_any,
        PortableServer::Current::_tao_any_destructor,
        PortableServer::_tc_Current,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<PortableServer::Current::NoContext>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<PortableServer::Current::NoContext>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const PortableServer::Current::NoContext &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableServer::Current::NoContext>::insert_copy (
      _tao_any,
      PortableServer::Current::NoContext::_tao_any_destructor,
      PortableServer::Current::_tc_NoContext,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    PortableServer::Current::NoContext *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableServer::Current::NoContext>::insert (
      _tao_any,
      PortableServer::Current::NoContext::_tao_any_destructor,
      PortableServer::Current::_tc_NoContext,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    PortableServer::Current::NoContext *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const PortableServer::Current::NoContext *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const PortableServer::Current::NoContext *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<PortableServer::Current::NoContext>::extract (
        _tao_any,
        PortableServer::Current::NoContext::_tao_any_destructor,
        PortableServer::Current::_tc_NoContext,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        PortableServer::Current::NoContext
      >;

  template class
    TAO::Any_Impl_T<
        PortableServer::Current
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        PortableServer::Current::NoContext \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        PortableServer::Current \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
