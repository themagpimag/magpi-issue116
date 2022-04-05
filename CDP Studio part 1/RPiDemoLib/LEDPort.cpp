#include "LEDPort.h"

using namespace RPiDemoLib;
/*!
  \class RPiDemoLib::LEDPort
  \inmodule RPiDemoLib

  \section1 Usage

  Add documentation for LEDPort here.
*/

/*!
  \internal
  \brief Creates the instance. Called after constructor.
*/
void LEDPort::Create(const char* shortName, CDPComponent* parent)
{
    CDPPort::Create(shortName, parent);
    LED1.Create("LED1",this,CDPPropertyBase::e_Attribute,(CDPOBJECT_SETPROPERTY_HANDLER)nullptr,(CDPOBJECT_VALIDATEPROPERTY_HANDLER)nullptr);
    LED2.Create("LED2",this,CDPPropertyBase::e_Attribute,(CDPOBJECT_SETPROPERTY_HANDLER)nullptr,(CDPOBJECT_VALIDATEPROPERTY_HANDLER)nullptr);
    LED3.Create("LED3",this,CDPPropertyBase::e_Attribute,(CDPOBJECT_SETPROPERTY_HANDLER)nullptr,(CDPOBJECT_VALIDATEPROPERTY_HANDLER)nullptr);
}
