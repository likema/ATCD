// -*- C++ -*-

//=============================================================================
/**
 *  @file LifespanStrategyTransientFactoryImpl.h
 *
 *  $Id$
 *
 *  @author  Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_PORTABLESERVER_LIFEPSPANSTRATEGYTRANSIENTFACTORYIMPL_H
#define TAO_PORTABLESERVER_LIFEPSPANSTRATEGYTRANSIENTFACTORYIMPL_H
#include /**/ "ace/pre.h"

#include "portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Service_Config.h"
#include "LifespanStrategyFactory.h"

namespace TAO
{
  namespace Portable_Server
  {
    class TAO_PortableServer_Export LifespanStrategyTransientFactoryImpl
      : public virtual LifespanStrategyFactory
    {
    public:
      virtual ~LifespanStrategyTransientFactoryImpl (void);

      /// Create a new strategy
      virtual LifespanStrategy* create (
        ::PortableServer::LifespanPolicyValue value);

      /// Cleanup the given strategy instance
      virtual void destroy (
        LifespanStrategy *strategy
        ACE_ENV_ARG_DECL);
    };

    ACE_STATIC_SVC_DECLARE_EXPORT (TAO_PortableServer, LifespanStrategyTransientFactoryImpl)
    ACE_FACTORY_DECLARE (TAO_PortableServer, LifespanStrategyTransientFactoryImpl)
  }
}

#include /**/ "ace/post.h"
#endif /* TAO_PORTABLESERVER_LIFEPSPANSTRATEGYTRANSIENTFACTORYIMPL_H */
