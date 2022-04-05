#ifndef RPIDEMOLIB_LEDSINEBLINKER_H
#define RPIDEMOLIB_LEDSINEBLINKER_H

#include <CDPSystem/Base/CDPComponent.h>
#include <LEDPort.h>
#include <Signal/CDPSignal.h>
#include <CDPParameter/CDPParameter.h>
#include <CDPAlarm/CDPAlarm.h>

namespace RPiDemoLib {

class LEDSineBlinker : public CDPComponent
{
public:
    LEDSineBlinker();
    ~LEDSineBlinker() override;

    void Create(const char* fullName) override;
    void CreateModel() override;
    void Configure(const char* componentXML) override;
    void ProcessNull() override;

protected:
    LEDPort LEDSine;
    int counter = 0;
    int increment = 1;
    using CDPComponent::requestedState;
    using CDPComponent::ts;
    using CDPComponent::fs;
};

} // namespace RPiDemoLib

#endif
