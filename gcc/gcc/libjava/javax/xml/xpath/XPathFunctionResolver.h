
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_xpath_XPathFunctionResolver__
#define __javax_xml_xpath_XPathFunctionResolver__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class QName;
      }
      namespace xpath
      {
          class XPathFunction;
          class XPathFunctionResolver;
      }
    }
  }
}

class javax::xml::xpath::XPathFunctionResolver : public ::java::lang::Object
{

public:
  virtual ::javax::xml::xpath::XPathFunction * resolveFunction(::javax::xml::namespace::QName *, jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_xpath_XPathFunctionResolver__