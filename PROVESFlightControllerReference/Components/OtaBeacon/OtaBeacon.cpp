// ======================================================================
// \title  OtaBeacon.cpp
// \brief  cpp file for OtaBeacon component implementation class
// ======================================================================

#include "PROVESFlightControllerReference/Components/OtaBeacon/OtaBeacon.hpp"

namespace Components {

OtaBeacon ::OtaBeacon(const char* const compName) : OtaBeaconComponentBase(compName) {}

OtaBeacon ::~OtaBeacon() {}

void OtaBeacon ::PING_cmdHandler(FwOpcodeType opCode, U32 cmdSeq, U32 value) {
    this->tlmWrite_LastPing(value);
    this->log_ACTIVITY_LO_Pinged(value);
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace Components
