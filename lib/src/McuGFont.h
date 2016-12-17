/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuGFont.h
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : GFont
**     Version     : Component 01.123, Driver 01.00, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-12-17, 17:32, # CodeGen: 110
**     Abstract    :
**
**     Settings    :
**          Component name                                 : McuGFont
**          Overwrite Bounding Box Height                  : Disabled
**          Name                                           : Helv
**          Size                                           : 8
**          Style                                          : normal
**     Contents    :
**         GetFontChar           - PGFONT_CharInfo McuGFont_GetFontChar(byte ch);
**         GetBoxHeight          - byte McuGFont_GetBoxHeight(void);
**         GetFont               - PGFONT_Callbacks McuGFont_GetFont(void);
**         GetUnderlineBoxHeight - byte McuGFont_GetUnderlineBoxHeight(void);
**         GetLineSpaceHeight    - byte McuGFont_GetLineSpaceHeight(void);
**
**     License   :  Open Source (LGPL)
**     Copyright : (c) Copyright Erich Styger, 2011, all rights reserved.
**     This an open source software in the form of a Processor Expert Embedded Component.
**     This is a free software and is opened for education,  research  and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file McuGFont.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup McuGFont_module McuGFont module documentation
**  @{
*/         


#ifndef __McuGFont_H
#define __McuGFont_H

/* MODULE McuGFont. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */

#include "Cpu.h"


#ifndef __BWUserType_PConstByte
#define __BWUserType_PConstByte
  typedef const byte *PConstByte;      /* Pointer to a constant byte. */
#endif
#ifndef __BWUserType_GFONT_CharInfo
#define __BWUserType_GFONT_CharInfo
  typedef struct {                     /* A descriptor describing the font. */
    signed char dwidth;                /* position of next char. relative to the current */
    byte width;                        /* width of character in pixels */
    byte height;                       /* height of character in pixels */
    signed char offsetX;               /* horizontal offset to left edge of bounding box */
    signed char offsetY;               /* vertical offset to bottom edge of bounding box */
    PConstByte CharBMP;                /* pointer to character bitmap defined above */
  } GFONT_CharInfo;
#endif
#ifndef __BWUserType_PGFONT_CharInfo
#define __BWUserType_PGFONT_CharInfo
  typedef GFONT_CharInfo* PGFONT_CharInfo ; /* A pointer to GFONT_CharInfo */
#endif
#ifndef __BWUserType_CallbackGetFontChar
#define __BWUserType_CallbackGetFontChar
  typedef PGFONT_CharInfo (*CallbackGetFontChar)(byte ch); /* Callback used to get the font information for a single character. */
#endif
#ifndef __BWUserType_GFONT_Callbacks
#define __BWUserType_GFONT_Callbacks
  typedef struct {                     /* Structure with font relevant callbacks. */
    CallbackGetFontChar GetFontChar;   /* Callback for retrieving a font character. */
    byte boundingBoxHeight;            /* Height of the bounding box. This includes the height of the underline box height. */
    byte underlineBoxHeight;           /* Height of the underline box height. */
    byte lineSpaceBoxHeight;           /* Height of the space between lines */
  } GFONT_Callbacks;
#endif
#ifndef __BWUserType_PGFONT_Callbacks
#define __BWUserType_PGFONT_Callbacks
  typedef GFONT_Callbacks* PGFONT_Callbacks ; /* Pointer to struct for font callbacks. */
#endif



PGFONT_CharInfo McuGFont_GetFontChar(byte ch);
/*
** ===================================================================
**     Method      :  McuGFont_GetFontChar (component GFont)
**     Description :
**         Returns for a given character the corresponding font bitmap.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ch              - The character for that a bitmap is required.
**     Returns     :
**         ---             - Character font bitmap
** ===================================================================
*/

byte McuGFont_GetBoxHeight(void);
/*
** ===================================================================
**     Method      :  McuGFont_GetBoxHeight (component GFont)
**     Description :
**         Function to get the height of the bounding box.
**     Parameters  : None
**     Returns     :
**         ---             - Height of bounding box
** ===================================================================
*/

PGFONT_Callbacks McuGFont_GetFont(void);
/*
** ===================================================================
**     Method      :  McuGFont_GetFont (component GFont)
**     Description :
**         Returns callbacks for fonts to be used by the font driver.
**     Parameters  : None
**     Returns     :
**         ---             - Font callbacks.
** ===================================================================
*/

#define McuGFont_GetLineSpaceHeight() \
  2

/*
** ===================================================================
**     Method      :  McuGFont_GetLineSpaceHeight (component GFont)
**     Description :
**         Returns the size of the line space height
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

#define McuGFont_GetUnderlineBoxHeight() \
  2

/*
** ===================================================================
**     Method      :  McuGFont_GetUnderlineBoxHeight (component GFont)
**     Description :
**         Returns the size of the underline box height
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

/* END McuGFont. */

#endif
/* ifndef __McuGFont_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
