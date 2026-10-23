module Components {
    @ Emits a fixed greeting event a fixed number of times on command
    passive component Echo {

        @ Number of times the greeting event is emitted per ECHO command
        constant ECHO_REPEAT_COUNT = 6

        @ Emit the Greeting event ECHO_REPEAT_COUNT times
        sync command ECHO()

        @ Greeting echoed to the ground
        event Greeting() \
            severity activity low \
            format "Starch is great"

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

        @ Port for emitting events
        event port logOut

        @ Port for emitting text events
        text event port logTextOut

    }
}
