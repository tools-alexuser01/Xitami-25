/*---------------------------------------------------------------------------*
 *  smtpipe.d - LIBERO dialog data definitions for smtpipe.c.                *
 *  Generated by LIBERO 2.4 on 22 Jul, 2004, 16:52.                          *
 *  Schema file used: smtschm.c.                                             *
 *---------------------------------------------------------------------------*/

/*- Symbolic constants and event numbers ------------------------------------*/

#define _LR_STOP                        0xFFFFL
#define _LR_NULL_EVENT                  -2
#define _LR_NULL_STATE                  -1
#define terminate_event                 -1
#define error_event                     0
#define exception_event                 1
#define ok_event                        2
#define shutdown_event                  3
#define timer_event                     4
#define _LR_STATE_after_init            0
#define _LR_STATE_after_waking          1
#define _LR_STATE_defaults              2
#define _LR_defaults_state              2


/*- Function prototypes and macros ------------------------------------------*/

#ifndef MODULE
#define MODULE  static void             /*  Libero dialog modules            */
#endif

MODULE initialise_the_thread        (THREAD *thread);
MODULE load_pipe_definitions        (THREAD *thread);
MODULE create_transfer_pipes        (THREAD *thread);
MODULE sleep_for_a_while            (THREAD *thread);
MODULE terminate_the_thread         (THREAD *thread);
MODULE reload_pipes_if_changed      (THREAD *thread);
MODULE drop_pipe_definitions        (THREAD *thread);

#define the_next_event              _the_next_event
#define the_exception_event         _the_exception_event
#define the_external_event          _the_external_event
#define exception_raised            _exception_raised
#define io_completed                _io_completed


/*- Static areas shared by all threads --------------------------------------*/

static word _LR_nextst [3][5] =
{
    { 0,0,1,0,0 },
    { 0,0,0,0,1 },
    { 2,2,2,2,2 }
};

static word _LR_action [3][5] =
{
    { 2,0,1,0,0 },
    { 0,0,0,0,3 },
    { 5,4,5,4,5 }
};

static word _LR_offset [] =
{
    0,
    0,
    4,
    6,
    9,
    12
};

static word _LR_vector [] =
{
    0,1,2,_LR_STOP,
    3,_LR_STOP,
    4,2,_LR_STOP,
    5,3,_LR_STOP,
    _LR_STOP
};

static HOOK *_LR_module [6] = {
    load_pipe_definitions,
    create_transfer_pipes,
    sleep_for_a_while,
    terminate_the_thread,
    reload_pipes_if_changed,
    drop_pipe_definitions
};

#if (defined (DEBUG))
static char *_LR_mname [6] =
{
     "Load-Pipe-Definitions",
     "Create-Transfer-Pipes",
     "Sleep-For-A-While",
     "Terminate-The-Thread",
     "Reload-Pipes-If-Changed",
     "Drop-Pipe-Definitions"
};

static char *_LR_sname [3] =
{
     "After-Init",
     "After-Waking",
     "Defaults"
};

static char *_LR_ename [5] =
{
     "Error-Event",
     "Exception-Event",
     "Ok-Event",
     "Shutdown-Event",
     "Timer-Event"
};
#else
static char *_LR_mname [6] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5"
};

static char *_LR_sname [3] =
{
     "0",
     "1",
     "2"
};

static char *_LR_ename [5] =
{
     "0",
     "1",
     "2",
     "3",
     "4"
};
#endif