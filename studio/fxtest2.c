/*===========================================================================*
 *                                                                           *
 *  fxtest2.c - Test program 2                                               *
 *                                                                           *
 *  Copyright (c) 1991-2003 iMatix Corporation                               *
 *                                                                           *
 *  ------------------ GPL Licensed Source Code ------------------           *
 *  iMatix makes this software available under the GNU General               *
 *  Public License (GPL) license for open source projects.  For              *
 *  details of the GPL license please see www.gnu.org or read the            *
 *  file license.gpl provided in this package.                               *
 *                                                                           *
 *  This program is free software; you can redistribute it and/or            *
 *  modify it under the terms of the GNU General Public License as           *
 *  published by the Free Software Foundation; either version 2 of           *
 *  the License, or (at your option) any later version.                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public                *
 *  License along with this program in the file 'license.gpl'; if            *
 *  not, write to the Free Software Foundation, Inc., 59 Temple              *
 *  Place - Suite 330, Boston, MA 02111-1307, USA.                           *
 *                                                                           *
 *  You can also license this software under iMatix's General Terms          *
 *  of Business (GTB) for commercial projects.  If you have not              *
 *  explicitly licensed this software under the iMatix GTB you may           *
 *  only use it under the terms of the GNU General Public License.           *
 *                                                                           *
 *  For more information, send an email to info@imatix.com.                  *
 *  --------------------------------------------------------------           *
 *===========================================================================*/
/*===========================================================================*
 *                                                                           *
 *  fxtest2.c   description...                                               *
 *                                                                           *
 *  Written:    97/01/28    Pieter Hintjens <ph@imatix.com>                  *
 *  Revised:    97/06/05                                                     *
 *                                                                           *
 *  Skeleton generated by LIBERO 2.21 on 28 Jan, 1997, 23:49.                *
 *===========================================================================*/

#include "fxtest2.d"                    /*  Include dialog data              */
#include "fxtest2.h"                    /*  Form definition file             */

/*- Function prototypes -----------------------------------------------------*/

/*- Global variables used in this source file only --------------------------*/

static struct {
    int filler;
} cb;

static FXTEST2_DATA *form_data;         /*  Form data block                  */


/********************************   M A I N   ********************************/

int fxtest2_program (SESSION *p_session)
{
    session = p_session;                /*  Localise session block           */
    /*  - - - - - - - - - - - - - - - - - - Do nothing else here - - - - - - */
#   include "fxtest2.i"                 /*  Include dialog interpreter       */
}


/*************************   INITIALISE THE PROGRAM   ************************/

MODULE initialise_the_program (void)
{
    session-> form-> ssl_protocol = TRUE;
    strcpy (form_data-> params, parent_args);
    the_next_event = ok_event;
}


/**************************   CALL PROGRAM TEST 3   **************************/

MODULE call_program_test_3 (void)
{
    strcpy (child_args, form_data-> params);
    request_program_call ("fxtest3");
}


/**************************   AFTER CALLING TEST 3   *************************/

MODULE after_calling_test_3 (void)
{
    strcpy (form_data-> params, child_args);
}


/*************************   TERMINATE THE PROGRAM    ************************/

MODULE terminate_the_program (void)
{
    session-> form-> ssl_protocol = FALSE;
    strcpy (parent_args, form_data-> params);
    the_next_event = terminate_event;
}

/***************************   AFTER SHOWING FORM   **************************/

MODULE after_showing_form (void)
{
}


/**************************   BEFORE SHOWING FORM   **************************/

MODULE before_showing_form (void)
{
}


/****************************   GET FIELD VALUE   ****************************/

MODULE get_field_value (void)
{
    coprintf ("file name: %s", fxget_text (FXTEST2_FIELD_3));
    coprintf ("tmp file name: %s", fxget_text (FXTEST2_FIELD_3_TMP));
}

/**************************   CALL REQUEST FAILED   **************************/

MODULE call_request_failed (void)
{
}


/***************************   AFTER RETURN CALL   ***************************/

MODULE after_return_call (void)
{
}


/**************************   BEFORE REQUEST CALL   **************************/

MODULE before_request_call (void)
{
}
