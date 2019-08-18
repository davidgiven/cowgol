# Definitions of various registers.
A           = 0
L           = 1
Q           = 2
Z           = 5
ZERO        = 7

ARUPT       = 10
LRUPT       = 11
QRUPT       = 12
TIME3       = 26

CYL         = 22

RHCP        = 42

NEWJOB      = 67 # Location check by Night Watchman
            SETLOC 070
CLOCK       ERASE
KEY         ERASE
DIVA        ERASE
DIVL        ERASE
DIVAA       ERASE
DIVAL       ERASE
COWDATA     ERASE # Cowgol owns everything from here up

            SETLOC 4000
GOJAM
            # Come here at power-up or GOJAM
            INHINT                # Disable interrupts for a moment.
            # Set up the TIME3 interrupt, T3RUPT.  TIME3 is a 15-bit
            # register at address 026, which automatically increments every
            # 10 ms, and a T3RUPT interrupt occurs when the timer
            # overflows.  Thus if it is initially loaded with 037774,
            # and overflows when it hits 040000, then it will
            # interrupt after 40 ms.
            CA        O37774
            TS        TIME3
            TCF       STARTUP    # Go to your "real" code.

            RESUME    # T6RUPT
            NOOP
            NOOP
            NOOP

            RESUME    # T5RUPT
            NOOP
            NOOP
            NOOP

TIMER3      DXCH      ARUPT       # T3RUPT
            EXTEND                # Back up A, L, and Q registers
            QXCH      QRUPT
            TCF       T3RUPT

            RESUME    # T4RUPT
            NOOP
            NOOP
            NOOP

            EXTEND    # KEYRUPT1
            DIM KEY
            RESUME    # KEYRUPT1
            NOOP

            RESUME    # KEYRUPT2
            NOOP
            NOOP
            NOOP

            RESUME    # UPRUPT
            NOOP
            NOOP
            NOOP

            RESUME    # DOWNRUPT
            NOOP
            NOOP
            NOOP

            RESUME    # RADAR RUPT
            NOOP
            NOOP
            NOOP

            RESUME    # RUPT10
            NOOP
            NOOP
            NOOP

# The interrupt-service routine for the TIME3 interrupt every 40 ms.
T3RUPT      CAF     O37774      # Schedule another TIME3 interrupt in 40 ms.
            TS      TIME3

            CS      NEWJOB
            EXTEND
            DIM CLOCK

            DXCH    ARUPT       # Restore A, L, and Q, and exit the interrupt
            EXTEND
            QXCH    QRUPT
            RESUME

STARTUP     RELINT

            TC MAIN

EXIT        CS      NEWJOB      # Tickle the Night Watchman
            TCF     EXIT

# Define any constants that are needed.
O37774      OCT     37774

MAIN
$cow.code.agc

dskydigit   INDEX A
            CAF DIGPATTS
            RETURN

DIGPATTS    DEC 21
            DEC 3
            DEC 25
            DEC 27
            DEC 15
            DEC 30
            DEC 28
            DEC 19
            DEC 29
            DEC 31

# Computes A = A/L.
DIV         TS DIVA
            TS DIVAA
            CAE L
            TS DIVL
            TS DIVAL

            CCS DIVA
            TCF DIVAPOS
            TCF DIVAPOS
            NOOP
            NOOP

            CAE ZERO
            EXTEND
            SU DIVA
            XCH DIVAA

DIVAPOS     CCS DIVL
            TCF DIVLPOS
            TCF DIVLPOS
            NOOP
            NOOP

            CAE ZERO
            EXTEND
            SU DIVL
            XCH DIVAL

DIVLPOS     CAE DIVAA
            EXTEND
            SU DIVAL
            CCS A
            TCF DIVSAFE
            TCF DIVEQUAL
            TCF DIVZERO
            TCF DIVEQUAL

DIVZERO     CAE ZERO
            RETURN

DIVSAFE     LXCH DIVA
            CAE ZERO
            EXTEND
            DV DIVA
            RETURN

DIVEQUAL    CAE DIVA
            EXTEND
            SU DIVL
            EXTEND
            BZF DIVPONE
            CAF CNONE
            RETURN

DIVPONE     CAF CPONE
            RETURN

CPONE       DEC 1
CNONE       DEC -1

