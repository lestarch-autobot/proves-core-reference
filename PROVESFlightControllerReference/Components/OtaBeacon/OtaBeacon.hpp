// ======================================================================
// \title  OtaBeacon.hpp
// \brief  hpp file for OtaBeacon component implementation class
// ======================================================================

#ifndef Components_OtaBeacon_HPP
#define Components_OtaBeacon_HPP

#include "PROVESFlightControllerReference/Components/OtaBeacon/OtaBeaconComponentAc.hpp"

namespace Components {

class OtaBeacon : public OtaBeaconComponentBase {
  public:
    //! Construct OtaBeacon object
    explicit OtaBeacon(const char* const compName  //!< The component name
    );

    //! Destroy OtaBeacon object
    ~OtaBeacon();

  private:
    //! Handler implementation for command PING
    void PING_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq,           //!< The command sequence number
                         U32 value             //!< Value to echo
                         ) override;
};

}  // namespace Components

#endif
