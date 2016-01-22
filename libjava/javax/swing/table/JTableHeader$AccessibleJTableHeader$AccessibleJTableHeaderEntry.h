
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry__
#define __javax_swing_table_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry__

#pragma interface

#include <javax/accessibility/AccessibleContext.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Component;
        class Cursor;
        class Dimension;
        class Font;
        class FontMetrics;
        class Point;
        class Rectangle;
      namespace event
      {
          class FocusListener;
      }
    }
    namespace beans
    {
        class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class Accessible;
        class AccessibleAction;
        class AccessibleComponent;
        class AccessibleContext;
        class AccessibleRole;
        class AccessibleSelection;
        class AccessibleStateSet;
        class AccessibleText;
        class AccessibleValue;
    }
    namespace swing
    {
        class JTable;
      namespace table
      {
          class JTableHeader;
          class JTableHeader$AccessibleJTableHeader;
          class JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry;
      }
    }
  }
}

class javax::swing::table::JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry : public ::javax::accessibility::AccessibleContext
{

public:
  JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry(::javax::swing::table::JTableHeader$AccessibleJTableHeader *, jint, ::javax::swing::table::JTableHeader *, ::javax::swing::JTable *);
public: // actually package-private
  virtual ::java::awt::Component * getColumnHeaderRenderer();
  virtual ::javax::accessibility::AccessibleContext * getAccessibleColumnHeaderRenderer();
public:
  virtual void addFocusListener(::java::awt::event::FocusListener *);
  virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener *);
  virtual jboolean contains(::java::awt::Point *);
  virtual ::javax::accessibility::AccessibleAction * getAccessibleAction();
  virtual ::javax::accessibility::Accessible * getAccessibleAt(::java::awt::Point *);
  virtual ::javax::accessibility::Accessible * getAccessibleChild(jint);
  virtual jint getAccessibleChildrenCount();
  virtual ::javax::accessibility::AccessibleComponent * getAccessibleComponent();
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  virtual ::java::lang::String * getAccessibleDescription();
  virtual jint getAccessibleIndexInParent();
  virtual ::java::lang::String * getAccessibleName();
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
  virtual ::javax::accessibility::AccessibleSelection * getAccessibleSelection();
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
  virtual ::javax::accessibility::AccessibleText * getAccessibleText();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual ::java::awt::Color * getBackground();
  virtual ::java::awt::Rectangle * getBounds();
  virtual ::java::awt::Cursor * getCursor();
  virtual ::java::awt::Font * getFont();
  virtual ::java::awt::FontMetrics * getFontMetrics(::java::awt::Font *);
  virtual ::java::awt::Color * getForeground();
  virtual ::java::util::Locale * getLocale();
  virtual ::java::awt::Point * getLocation();
  virtual ::java::awt::Point * getLocationOnScreen();
  virtual ::java::awt::Dimension * getSize();
  virtual jboolean isEnabled();
  virtual jboolean isFocusTraversable();
  virtual jboolean isShowing();
  virtual jboolean isVisible();
  virtual void removeFocusListener(::java::awt::event::FocusListener *);
  virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener *);
  virtual void requestFocus();
  virtual void setAccessibleDescription(::java::lang::String *);
  virtual void setAccessibleName(::java::lang::String *);
  virtual void setBackground(::java::awt::Color *);
  virtual void setBounds(::java::awt::Rectangle *);
  virtual void setCursor(::java::awt::Cursor *);
  virtual void setEnabled(jboolean);
  virtual void setFont(::java::awt::Font *);
  virtual void setForeground(::java::awt::Color *);
  virtual void setLocation(::java::awt::Point *);
  virtual void setSize(::java::awt::Dimension *);
  virtual void setVisible(jboolean);
private:
  jint __attribute__((aligned(__alignof__( ::javax::accessibility::AccessibleContext)))) columnIndex;
  ::javax::swing::table::JTableHeader * parent;
  ::javax::swing::JTable * table;
public: // actually package-private
  ::javax::swing::table::JTableHeader$AccessibleJTableHeader * this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_table_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry__
