; -------------------------------------------------------------------------------
; Z80
; -------------------------------------------------------------------------------

Z80_RAM			EQU	$A00000			; Z80 RAM start
z80_ram         equ Z80_RAM
Z80_END			EQU	$A02000			; Z80 RAM end
Z80_BUS			EQU	$A11100			; Z80 bus request
z80_bus_request equ Z80_BUS
Z80_RESET		EQU	$A11200			; Z80 reset
z80_reset       equ Z80_RESET

; -------------------------------------------------------------------------------
; I/O
; -------------------------------------------------------------------------------

HW_VERSION		EQU	$A10001			; Hardware version
IO_A_DATA		EQU	$A10003			; I/O port A data port
IO_B_DATA		EQU	$A10005			; I/O port B data port
IO_C_DATA		EQU	$A10007			; I/O port C data port
IO_A_CTRL		EQU	$A10009			; I/O port A control port
IO_B_CTRL		EQU	$A1000B			; I/O port B control port
IO_C_CTRL		EQU	$A1000D			; I/O port C control port