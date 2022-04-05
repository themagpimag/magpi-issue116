#ifndef RPIDEMOLIB_LEDPORT_H
#define RPIDEMOLIB_LEDPORT_H

#include <CDPSystem/Base/CDPPort.h>
#include <CDPSystem/Base/CDPProperty.h>

namespace RPiDemoLib {

class LEDPort : public CDPPort
{
public:
    void Create(const char* shortName, CDPComponent* parent) override;

    CDPProperty<bool> LED1;
    CDPProperty<bool> LED2;
    CDPProperty<bool> LED3;
};

} // namespace RPiDemoLib

#endif
