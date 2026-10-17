module Components {
    @ Ground-settable marker used to prove that an OTA patch delivered a new component (see MARK / MarkCount)
    passive component OtaMarker {
        @ Record a marker value; emits MarkSet and updates LastMark / MarkCount
        sync command MARK(
            tag: U32 @< Marker value to record
        )

        @ A marker value was recorded
        event MarkSet(
            tag: U32 @< Marker value recorded
            count: U32 @< Number of MARK commands accepted since boot
        ) severity activity high format "OTA marker {} set (count {})"

        @ Last marker value recorded by MARK
        telemetry LastMark: U32

        @ Number of MARK commands accepted since boot
        telemetry MarkCount: U32

        ###############################################################################
        # Standard AC Ports: Required for Channels, Events, Commands, and Parameters  #
        ###############################################################################
        @ Port for requesting the current time
        time get port timeCaller

        @ Port for sending command registrations
        command reg port cmdRegOut

        @ Port for receiving commands
        command recv port cmdIn

        @ Port for sending command responses
        command resp port cmdResponseOut

        @ Port for sending events
        event port logOut

        @ Port for sending text events
        text event port logTextOut

        @ Port for sending telemetry
        telemetry port tlmOut
    }
}
