TYPE = application
PROJECTNAME = RPiApp

DEPS += cdp_wasm gpiopinio rpidemolib

HEADERS += Libraries.h
SOURCES += CDPMain.cpp

DISTFILES += \
    $$files(*.xml, true) \
    $$files(*.lic, true) \
    $$files(Application/www/*.*, true) \
    Application/index.html \
    Application/www/wasm/index.html \
    Application/www/wasm/logo.svg

load(cdp)

ID = 227380517647797 # do not change

FORMS += \
    Application/www/wasm/mainwidget.ui
