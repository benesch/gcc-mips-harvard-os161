
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_MultipleDocumentHandling__
#define __javax_print_attribute_standard_MultipleDocumentHandling__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class EnumSyntax;
        namespace standard
        {
            class MultipleDocumentHandling;
        }
      }
    }
  }
}

class javax::print::attribute::standard::MultipleDocumentHandling : public ::javax::print::attribute::EnumSyntax
{

public: // actually protected
  MultipleDocumentHandling(jint);
public:
  virtual ::java::lang::Class * getCategory();
  virtual ::java::lang::String * getName();
public: // actually protected
  virtual JArray< ::java::lang::String * > * getStringTable();
  virtual JArray< ::javax::print::attribute::EnumSyntax * > * getEnumValueTable();
private:
  static const jlong serialVersionUID = 8098326460746413466LL;
public:
  static ::javax::print::attribute::standard::MultipleDocumentHandling * SINGLE_DOCUMENT;
  static ::javax::print::attribute::standard::MultipleDocumentHandling * SEPARATE_DOCUMENTS_UNCOLLATED_COPIES;
  static ::javax::print::attribute::standard::MultipleDocumentHandling * SEPARATE_DOCUMENTS_COLLATED_COPIES;
  static ::javax::print::attribute::standard::MultipleDocumentHandling * SINGLE_DOCUMENT_NEW_SHEET;
private:
  static JArray< ::java::lang::String * > * stringTable;
  static JArray< ::javax::print::attribute::standard::MultipleDocumentHandling * > * enumValueTable;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_MultipleDocumentHandling__
