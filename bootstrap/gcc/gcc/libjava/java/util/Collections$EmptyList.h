
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections$EmptyList__
#define __java_util_Collections$EmptyList__

#pragma interface

#include <java/util/AbstractList.h>
#include <gcj/array.h>


class java::util::Collections$EmptyList : public ::java::util::AbstractList
{

public: // actually package-private
  Collections$EmptyList();
public:
  jint size();
  ::java::lang::Object * get(jint);
  jboolean contains(::java::lang::Object *);
  jboolean containsAll(::java::util::Collection *);
  jboolean equals(::java::lang::Object *);
  jint hashCode();
  jint indexOf(::java::lang::Object *);
  jint lastIndexOf(::java::lang::Object *);
  jboolean remove(::java::lang::Object *);
  jboolean removeAll(::java::util::Collection *);
  jboolean retainAll(::java::util::Collection *);
  JArray< ::java::lang::Object * > * toArray();
  JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
  ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = 8842843931221139166LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Collections$EmptyList__