// -*- C++ -*-

#include "Test_i.h"

ACE_RCSID (DLL_ORB,
           Test_i,
           "$Id$")

Test_i::Test_i (void)
  : orb_ ()
{
}

void
Test_i::invoke_me (CORBA::Environment & /* ACE_TRY_ENV */)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  ACE_DEBUG ((LM_INFO,
              "(%P|%t) Test method invoked.\n"));
}

void
Test_i::shutdown (CORBA::Environment &ACE_TRY_ENV)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  ACE_DEBUG ((LM_INFO,
              "Server is shutting down.\n"));

  if (!CORBA::is_nil (this->orb_.in ()))
    this->orb_->shutdown (1, ACE_TRY_ENV);
}

void
Test_i::orb (CORBA::ORB_ptr orb)
{
  this->orb_ = CORBA::ORB::_duplicate (orb);
}
