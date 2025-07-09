; -------------------------------------------------------------------------------
; Work RAM
; -------------------------------------------------------------------------------

RAM_START		EQU	$FF0000			; Work RAM start
RAM_END			EQU	$1000000		; Work RAM end

; ---------- ram names -------------
	rsset	RAM_START
M68K_RAM           equ RAM_START
                   rs.b $F13C
SC_Ctrl1           rs.b 1 ; $FFF13C
                   rs.b $4C5
Ctrl1_Held_2       rs.b 1 ; $FFF602  (Standard Genesis Funtion)
Ctrl1_Press_2      rs.b 1 ; $FFF603  (Standard Genesis Funtion)
Ctrl1_Held         rs.b 1 ; $FFF604  (Standard Genesis Funtion)             
Ctrl1_Press        rs.b 1 ; $FFF605  (Standard Genesis Funtion)
Ctrl2_Held         rs.b 1 ; $FFF606  (Standard Genesis Funtion)
Ctrl2_Press        rs.b 1 ; $FFF607  (Standard Genesis Funtion)
                   rs.b $5F8
Puyo_SystemStack   rs.b 1 ; $FFFC00  
                   rs.b $1FF
S1_SystemStack     rs.b 1
S2_SystemStack     equ S1_SystemStack                      
                   rs.b $1DF             
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



