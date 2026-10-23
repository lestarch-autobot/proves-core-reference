// ======================================================================
// \title  Echo.cpp
// \brief  cpp file for Echo component implementation class
// ======================================================================

#include "PROVESFlightControllerReference/Components/Echo/Echo.hpp"

#include "PROVESFlightControllerReference/Components/Echo/FppConstantsAc.hpp"

namespace Components {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

Echo ::Echo(const char* const compName) : EchoComponentBase(compName) {}

Echo ::~Echo() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void Echo ::ECHO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    for (FwIndexType i = 0; i < Echo_ECHO_REPEAT_COUNT; i++) {
        this->log_ACTIVITY_LO_Greeting();
    }
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace Components
