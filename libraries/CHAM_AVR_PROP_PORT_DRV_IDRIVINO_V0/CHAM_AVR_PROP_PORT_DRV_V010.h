///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Copyright Nurve Networks LLC 2009
// 
// Filename: CHAM_AVR_PROP_PORT_DRV_V010.h
//
// Original Author: Andre' LaMothe
// 
// Last Modified: 8.20.08
//
// Description: This file contains generic defines, macros, types for all the library modules and system related 
// code and utility functions.
// 
// 
//  
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// INCLUDES ///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// watch for multiple inclusions
#ifndef CHAM_AVR_PROP_PORT_DRV
#define CHAM_AVR_PROP_PORT_DRV

 // support C++ compilers
 #ifdef __cplusplus
 extern "C" {
 #endif 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MACROS /////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DEFINES/////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// TYPES/CLASSES //////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// GLOBALS ////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EXTERNALS //////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PROTOTYPES /////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int PropPort_SetDir(int dirbits);
int PropPort_Read(void);
int PropPort_Write(int data8);

// end support for C++ compilers
 #ifdef __cplusplus
 }
 #endif 
 

// end multiple inclusions 
#endif
