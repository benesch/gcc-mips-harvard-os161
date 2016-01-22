
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_TextArea__
#define __java_awt_TextArea__

#pragma interface

#include <java/awt/TextComponent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Dimension;
        class TextArea;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
  }
}

class java::awt::TextArea : public ::java::awt::TextComponent
{

public:
  TextArea();
  TextArea(::java::lang::String *);
  TextArea(jint, jint);
  TextArea(::java::lang::String *, jint, jint);
  TextArea(::java::lang::String *, jint, jint, jint);
  virtual jint getColumns();
  virtual void setColumns(jint);
  virtual jint getRows();
  virtual void setRows(jint);
  virtual ::java::awt::Dimension * getMinimumSize();
  virtual ::java::awt::Dimension * getMinimumSize(jint, jint);
  virtual ::java::awt::Dimension * minimumSize();
  virtual ::java::awt::Dimension * minimumSize(jint, jint);
  virtual ::java::awt::Dimension * getPreferredSize();
  virtual ::java::awt::Dimension * getPreferredSize(jint, jint);
  virtual ::java::awt::Dimension * preferredSize();
  virtual ::java::awt::Dimension * preferredSize(jint, jint);
  virtual jint getScrollbarVisibility();
  virtual void addNotify();
  virtual void append(::java::lang::String *);
  virtual void appendText(::java::lang::String *);
  virtual void insert(::java::lang::String *, jint);
  virtual void insertText(::java::lang::String *, jint);
  virtual void replaceRange(::java::lang::String *, jint, jint);
  virtual void replaceText(::java::lang::String *, jint, jint);
public: // actually protected
  virtual ::java::lang::String * paramString();
public: // actually package-private
  virtual ::java::lang::String * generateName();
private:
  static jlong getUniqueLong();
public:
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  static const jint SCROLLBARS_BOTH = 0;
  static const jint SCROLLBARS_VERTICAL_ONLY = 1;
  static const jint SCROLLBARS_HORIZONTAL_ONLY = 2;
  static const jint SCROLLBARS_NONE = 3;
private:
  static const jlong serialVersionUID = 3692302836626095722LL;
  jint __attribute__((aligned(__alignof__( ::java::awt::TextComponent)))) columns;
  jint rows;
  jint scrollbarVisibility;
  static jlong next_text_number;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_TextArea__