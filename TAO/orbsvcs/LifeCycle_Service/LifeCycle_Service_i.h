// $Id$

// ============================================================================
//
// = FILENAME
//    LifeCycle_Service_i.h
//
// = DESCRIPTION
//    A Life Cycle Service for the Quoter example.
//
// = AUTHOR
//    Michael Kircher (mk1@cs.wustl.edu)
//
// ============================================================================

#include "orbsvcs/LifeCycleServiceS.h"
#include "Factory_Trader.h"
#include "Criteria_Evaluator.h"

#ifndef LIFECYCLE_SERVICE_IMPL_H
#define LIFECYCLE_SERVICE_IMPL_H

class Life_Cycle_Service_i : public POA_LifeCycleService::Life_Cycle_Service
{
  // = TILE
  //   A CosLifeCycle conforming Generic Factory.

public:
  Life_Cycle_Service_i (void);
  ~Life_Cycle_Service_i (void);

  CORBA::Boolean supports (const CosLifeCycle::Key &factory_key,
                           CORBA::Environment &_env_there)
      ACE_THROW_SPEC ((CORBA::SystemException));
  // Returns true if the Generic Factory is able to forward a request
  // for creating an object described by the <factory_key>.

  CORBA::Object_ptr create_object (const CosLifeCycle::Key &factory_key,
                                   const CosLifeCycle::Criteria &the_criteria,
                                   CORBA::Environment &_env_there)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       CosLifeCycle::NoFactory,
                       CosLifeCycle::InvalidCriteria,
                       CosLifeCycle::CannotMeetCriteria));
  // Returns an object reference to a newly created object, though the
  // Generic Factory itself cannot create objects, it will forward the
  // request to a more concrete Factory.

  void register_factory (const char * name,
                         const char * location,
                         const char * description,
                         CORBA::Object_ptr object,
                         CORBA::Environment &_env_there)
      ACE_THROW_SPEC (( CORBA::SystemException));

  // Registers a factory with specified properties

private:
  Factory_Trader *factory_trader_ptr_;
};

#endif /* LIFECYCLE_SERVICE_IMPL_H */








