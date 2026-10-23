// ======================================================================
// \title  Echo.hpp
// \brief  hpp file for Echo component implementation class
// ======================================================================

#ifndef Components_Echo_HPP
#define Components_Echo_HPP

#include "PROVESFlightControllerReference/Components/Echo/EchoComponentAc.hpp"

namespace Components {

class Echo final : public EchoComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct Echo object
    Echo(const char* const compName  //!< The component name
    );

    //! Destroy Echo object
    ~Echo();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command ECHO
    //!
    //! Emit the Greeting event ECHO_REPEAT_COUNT times
    void ECHO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace Components

#endif
