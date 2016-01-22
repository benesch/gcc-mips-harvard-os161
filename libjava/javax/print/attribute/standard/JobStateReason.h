
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobStateReason__
#define __javax_print_attribute_standard_JobStateReason__

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
            class JobStateReason;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobStateReason : public ::javax::print::attribute::EnumSyntax
{

public: // actually protected
  JobStateReason(jint);
public:
  virtual ::java::lang::Class * getCategory();
  virtual ::java::lang::String * getName();
public: // actually protected
  virtual JArray< ::java::lang::String * > * getStringTable();
  virtual JArray< ::javax::print::attribute::EnumSyntax * > * getEnumValueTable();
private:
  static const jlong serialVersionUID = -8765894420449009168LL;
public:
  static ::javax::print::attribute::standard::JobStateReason * JOB_INCOMING;
  static ::javax::print::attribute::standard::JobStateReason * JOB_DATA_INSUFFICIENT;
  static ::javax::print::attribute::standard::JobStateReason * DOCUMENT_ACCESS_ERROR;
  static ::javax::print::attribute::standard::JobStateReason * SUBMISSION_INTERRUPTED;
  static ::javax::print::attribute::standard::JobStateReason * JOB_OUTGOING;
  static ::javax::print::attribute::standard::JobStateReason * JOB_HOLD_UNTIL_SPECIFIED;
  static ::javax::print::attribute::standard::JobStateReason * RESOURCES_ARE_NOT_READY;
  static ::javax::print::attribute::standard::JobStateReason * PRINTER_STOPPED_PARTLY;
  static ::javax::print::attribute::standard::JobStateReason * PRINTER_STOPPED;
  static ::javax::print::attribute::standard::JobStateReason * JOB_INTERPRETING;
  static ::javax::print::attribute::standard::JobStateReason * JOB_QUEUED;
  static ::javax::print::attribute::standard::JobStateReason * JOB_TRANSFORMING;
  static ::javax::print::attribute::standard::JobStateReason * JOB_QUEUED_FOR_MARKER;
  static ::javax::print::attribute::standard::JobStateReason * JOB_PRINTING;
  static ::javax::print::attribute::standard::JobStateReason * JOB_CANCELED_BY_USER;
  static ::javax::print::attribute::standard::JobStateReason * JOB_CANCELED_BY_OPERATOR;
  static ::javax::print::attribute::standard::JobStateReason * JOB_CANCELED_AT_DEVICE;
  static ::javax::print::attribute::standard::JobStateReason * ABORTED_BY_SYSTEM;
  static ::javax::print::attribute::standard::JobStateReason * UNSUPPORTED_COMPRESSION;
  static ::javax::print::attribute::standard::JobStateReason * COMPRESSION_ERROR;
  static ::javax::print::attribute::standard::JobStateReason * UNSUPPORTED_DOCUMENT_FORMAT;
  static ::javax::print::attribute::standard::JobStateReason * DOCUMENT_FORMAT_ERROR;
  static ::javax::print::attribute::standard::JobStateReason * PROCESSING_TO_STOP_POINT;
  static ::javax::print::attribute::standard::JobStateReason * SERVICE_OFF_LINE;
  static ::javax::print::attribute::standard::JobStateReason * JOB_COMPLETED_SUCCESSFULLY;
  static ::javax::print::attribute::standard::JobStateReason * JOB_COMPLETED_WITH_WARNINGS;
  static ::javax::print::attribute::standard::JobStateReason * JOB_COMPLETED_WITH_ERRORS;
  static ::javax::print::attribute::standard::JobStateReason * JOB_RESTARTABLE;
  static ::javax::print::attribute::standard::JobStateReason * QUEUED_IN_DEVICE;
private:
  static JArray< ::java::lang::String * > * stringTable;
  static JArray< ::javax::print::attribute::standard::JobStateReason * > * enumValueTable;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_JobStateReason__
