; -------------------------------------------------------------------------------
; Work RAM
; -------------------------------------------------------------------------------

RAM_START		EQU	$FF0000			; Work RAM start
RAM_END			EQU	$1000000		; Work RAM end

; ---------- ram names -------------
	rsset	RAM_START
M68K_RAM           equ RAM_START
                   rs.b $FFE0
Menu_Text_Index    rs.b 1 ; $FFFFE0
SC_SystemStack     equ Menu_Text_Index 
                   rs.b 7
SC_GameIndex       rs.b 1 ; $FFFFE8
                   rs.b $B
HBLANK             rs.b 1 ; $FFFFF4
                   rs.b 5
VBLANK             rs.b 1 ; $FFFFFA
                   rs.b 4
                   rs.b 1
M68K_RAM_END       equ RAM_END-1                   
; ----------------------------------



