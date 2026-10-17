// ======================================================================
// \title  OtaMarker.hpp
// \brief  hpp file for OtaMarker component implementation class
// ======================================================================

#ifndef Components_OtaMarker_HPP
#define Components_OtaMarker_HPP

#include "PROVESFlightControllerReference/Components/OtaMarker/OtaMarkerComponentAc.hpp"

namespace Components {

class OtaMarker final : public OtaMarkerComponentBase {
  public:
    OtaMarker(const char* const compName  //!< The component name
    );

    ~OtaMarker();

  private:
    //! Handler implementation for command MARK
    void MARK_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq,           //!< The command sequence number
                         U32 tag               //!< Marker value to record
                         ) override;

    U32 m_count;  //!< Number of MARK commands accepted since boot
};

}  // namespace Components

#endif
