/* $Id$
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 * 
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */

#include "pdl.hpp"


namespace Package
{
  // PackageDescriptorsList
  // 

  PackageDescriptorsList::
  PackageDescriptorsList ()
  :
  regulator__ ()
  {
  }

  PackageDescriptorsList::
  PackageDescriptorsList (::Package::PackageDescriptorsList const& s)
  :
  regulator__ ()
  {
    desc_.reserve (s.desc_.size ());
    {
      for (desc_const_iterator i (s.desc_.begin ());
      i != s.desc_.end ();
      ++i) add_desc (*i);
    }
  }

  ::Package::PackageDescriptorsList& PackageDescriptorsList::
  operator= (::Package::PackageDescriptorsList const& s)
  {
    desc_.clear ();
    desc_.reserve (s.desc_.size ());
    {
      for (desc_const_iterator i (s.desc_.begin ());
      i != s.desc_.end ();
      ++i) add_desc (*i);
    }

    return *this;
  }


  // PackageDescriptorsList
  // 
  PackageDescriptorsList::desc_iterator PackageDescriptorsList::
  begin_desc ()
  {
    return desc_.begin ();
  }

  PackageDescriptorsList::desc_iterator PackageDescriptorsList::
  end_desc ()
  {
    return desc_.end ();
  }

  PackageDescriptorsList::desc_const_iterator PackageDescriptorsList::
  begin_desc () const
  {
    return desc_.begin ();
  }

  PackageDescriptorsList::desc_const_iterator PackageDescriptorsList::
  end_desc () const
  {
    return desc_.end ();
  }

  void PackageDescriptorsList::
  add_desc (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (desc_.capacity () < desc_.size () + 1)
    {
      ::std::vector< ::XMLSchema::string< ACE_TCHAR > > v;
      v.reserve (desc_.size () + 1);

      while (desc_.size ())
      {
        //@@ VC6
        ::XMLSchema::string< ACE_TCHAR >& t = desc_.back ();
        t.container (0);
        v.push_back (t);
        v.back ().container (this);
        desc_.pop_back ();
      }

      desc_.swap (v);
    }

    desc_.push_back (e);
    desc_.back ().container (this);
  }
}

namespace Package
{
  // PackageDescriptorsList
  //

  PackageDescriptorsList::
  PackageDescriptorsList (::XSCRT::XML::Element< ACE_TCHAR > const& e)
  :Base__ (e), regulator__ ()
  {

    ::XSCRT::Parser< ACE_TCHAR > p (e);

    while (p.more_elements ())
    {
      ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
      ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

      if (n == "desc")
      {
        ::XMLSchema::string< ACE_TCHAR > t (e);
        add_desc (t);
      }

      else 
      {
      }
    }
  }
}

namespace Package
{
  ::Package::PackageDescriptorsList
  packageDescriptorsList (xercesc::DOMDocument const* d)
  {
    ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
    if (e.name () == "packageDescriptorsList")
    {
      ::Package::PackageDescriptorsList r (e);
      return r;
    }

    else
    {
      throw 1;
    }
  }
}

