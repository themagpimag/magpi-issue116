CDPVERSION = 4.10
TYPE = library
PROJECTNAME = RPiDemoLib

DEPS += \

HEADERS += \
    LEDPort.h \
    LEDSineBlinker.h \
    rpidemolib.h \
    RPiDemoLibBuilder.h

SOURCES += \
    LEDPort.cpp \
    LEDSineBlinker.cpp \
    RPiDemoLibBuilder.cpp

DISTFILES += $$files(*.xml, true) \
    Templates/Models/RPiDemoLib.LEDPort.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker.RAND1.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker.RAND2.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker.RAND3.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker1.RAND1.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker1.RAND2.xml \
    Templates/Models/RPiDemoLib.LEDRandBlinker1.RAND3.xml \
    Templates/Models/RPiDemoLib.LEDScanBlinker.xml \
    Templates/Models/RPiDemoLib.LEDSineBlinker.xml

load(cdp)
