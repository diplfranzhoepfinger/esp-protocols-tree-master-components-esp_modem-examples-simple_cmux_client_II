#include <stdio.h>
#include "modem_pwkey.h"

extern void modem_console_main(void);

void app_main(void)
{



    init_modem_pwkey();

    power_down_modem_pwkey();

    // power Up does work now. .
    power_up_modem_pwkey();



    modem_console_main();



}
