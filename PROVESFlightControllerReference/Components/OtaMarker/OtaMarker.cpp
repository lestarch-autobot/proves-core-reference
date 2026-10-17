// ======================================================================
// \title  OtaMarker.cpp
// \brief  cpp file for OtaMarker component implementation class
// ======================================================================

#include "PROVESFlightControllerReference/Components/OtaMarker/OtaMarker.hpp"

namespace Components {

OtaMarker::OtaMarker(const char* const compName) : OtaMarkerComponentBase(compName), m_count(0) {}

OtaMarker::~OtaMarker() {}

void OtaMarker::MARK_cmdHandler(FwOpcodeType opCode, U32 cmdSeq, U32 tag) {
    this->m_count++;
    this->tlmWrite_LastMark(tag);
    this->tlmWrite_MarkCount(this->m_count);
    this->log_ACTIVITY_HI_MarkSet(tag, this->m_count);
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace Components
