#include "contiki.h"

#include "wolfssl/wolfcrypt/types.h"

// TODO: INCLUDE THE CORRECT HEADERS HERE:

#include <stdio.h> /* For printf() */
/*---------------------------------------------------------------------------*/
PROCESS(wolfcrypt_process, "Wolfcrypt process");
AUTOSTART_PROCESSES(&wolfcrypt_process);
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(wolfcrypt_process, ev, data) {
  static struct etimer timer;

  PROCESS_BEGIN();

  /* Setup a periodic timer that expires after 10 seconds. */
  etimer_set(&timer, CLOCK_SECOND);

  while (1) {
    // ADD WOLFCRYPT METHODS HERE:

    /* Wait for the periodic timer to expire and then restart the timer. */
    PROCESS_WAIT_EVENT_UNTIL(etimer_expired(&timer));
    etimer_reset(&timer);
  }

  PROCESS_END();
}
/*---------------------------------------------------------------------------*/
