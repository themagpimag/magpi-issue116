/**
RPiDemoLibBuilder header file.
*/

#ifndef RPIDEMOLIB_RPIDEMOLIBBUILDER_H
#define RPIDEMOLIB_RPIDEMOLIBBUILDER_H

#include <CDPSystem/Application/CDPBuilder.h>

namespace RPiDemoLib {

class RPiDemoLibBuilder : public CDPBuilder
{
public:
    RPiDemoLibBuilder(const char* libName);
    CDPComponent* CreateNewComponent(const std::string& type) override;
    CDPBaseObject* CreateNewCDPOperator(const std::string& modelName,const std::string& type,const CDPPropertyBase* inputProperty) override;
    CDPObject* CreateNewObject(const std::string& type) override;
    CDP::StudioAPI::CDPNode* CreateNewCDPNode(const std::string& type) override;
};

}

#endif
