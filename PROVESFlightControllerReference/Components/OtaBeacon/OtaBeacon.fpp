module Components {
    @ Demonstration component added to exercise a delta (SPatch) OTA update
    passive component OtaBeacon {
        @ Echo a counter value back as an event and telemetry
        sync command PING(
            value: U32 @< Value to echo
        )

        @ Last value received by PING
        telemetry LastPing: U32

        @ Event logged when PING is received
        event Pinged(value: U32) \
            severity activity low \
            format "OtaBeacon ping {}"

        ###############################################################################
        # Standard AC Ports: Required for Channels, Events, Commands, and Parameters  #
        ###############################################################################
        command recv port cmdIn
        command reg port cmdRegOut
        command resp port cmdResponseOut
        event port logOut
        text event port logTextOut
        time get port timeCaller
        telemetry port tlmOut
    }
}
