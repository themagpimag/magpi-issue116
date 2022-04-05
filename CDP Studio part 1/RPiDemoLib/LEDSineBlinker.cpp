#include "LEDSineBlinker.h"

using namespace RPiDemoLib;
/*!
  \class RPiDemoLib::LEDSineBlinker
  \inmodule RPiDemoLib

  \section1 Usage

  Add documentation for LEDSineBlinker here.
*/

/*!
  \internal
  \brief Component constructor. The first function to be called. Can be used to initialize member variables, etc.
*/
LEDSineBlinker::LEDSineBlinker()
{
}


/*!
  \internal
  \brief Component destructor. The last function to be called. Typically used to clean up when stopping, like freeing
  allocated memory, etc.
*/
LEDSineBlinker::~LEDSineBlinker()
{
}

/*!
  \internal
  \brief Creates the component instance and other related CDP objects. Called after constructor

  Note, that this function is normally filled automatically by the code generator.
*/
void LEDSineBlinker::Create(const char* fullName)
{
    CDPComponent::Create(fullName);
    LEDSine.Create("LEDSine",this);
}

/*!
  \internal
  \brief Creates a model instance for this class and fills model data. Registers messages, states and state transitions.

  Note, that this function is normally filled automatically by the code generator.
*/
void LEDSineBlinker::CreateModel()
{
    CDPComponent::CreateModel();

    RegisterStateProcess("Null", (CDPCOMPONENT_STATEPROCESS)&LEDSineBlinker::ProcessNull, "Initial Null state");
}

/*!
  \internal
  \brief Configures the component by reading the configuration. Called after Create()/CreateModel().

  Note, that this function is normally filled automatically by the code generator.
*/
void LEDSineBlinker::Configure(const char* componentXML)
{
    CDPComponent::Configure(componentXML);
}

/*!
 \brief Component Null state processing function

 Write your component's processing code here. When the component is simple, all the processing code may reside here.
 This function gets called periodically. The period is changed by setting the "fs" (frequency) Property when you use
 the component in a project.
 Functions called ProcessSTATENAME(), like ProcessNull(), are state processing functions and are only called when
 components are in given state. The default component state is "Null".
 Note, that state processing functions are not allowed to block (i.e. read files, sleep, communicate with network in
 blocking mode etc.) For blocking code use the 'Threaded Component Model' wizard instead.

 Please consult CDP Studio "Code Mode Manual" for more information and examples.
*/
void LEDSineBlinker::ProcessNull()
{
    LEDSine.LED1 = (counter==0);
    LEDSine.LED2 = (counter==1);
    LEDSine.LED3 = (counter==2);
    counter += increment;
    if (counter==0 || counter == 2)
        increment*=-1;
}
