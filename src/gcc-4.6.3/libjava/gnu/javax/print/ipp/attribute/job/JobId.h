
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_job_JobId__
#define __gnu_javax_print_ipp_attribute_job_JobId__

#pragma interface

#include <javax/print/attribute/IntegerSyntax.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace job
            {
                class JobId;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::job::JobId : public ::javax::print::attribute::IntegerSyntax
{

public:
  JobId(jint);
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_ipp_attribute_job_JobId__