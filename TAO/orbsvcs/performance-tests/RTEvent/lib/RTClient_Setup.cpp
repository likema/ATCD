/**
 * @file RTClient_Setup.cpp
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

#include "RTClient_Setup.h"
#include "RIR_Narrow.h"
#include "tao/RTCORBA/RTCORBA.h"

#include "ace/Log_Msg.h"

#if !defined(__ACE_INLINE__)
#include "RTClient_Setup.inl"
#endif /* __ACE_INLINE__ */

RTClient_Setup::RTClient_Setup (int use_rt_corba,
                                CORBA::ORB_ptr orb,
                                const RT_Class &rt_class,
                                int nthreads)
  : use_rt_corba_ (use_rt_corba)
  , syncscope_setup_ (orb)
{
  if (use_rt_corba)
    {
      this->rtcorba_setup_.reset (new RTCORBA_Setup (orb, rt_class, nthreads));
    }
}
