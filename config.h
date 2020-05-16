/* slstatus configuration */
/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/* output formats */
static const struct arg args[] = {
        /* function format          argument */
        { cpu_freq,    "[CPU %3s] ", NULL        },
        { ram_free,    "[RAM %2s] ", NULL        },
        { swap_used,   "[Swap %2s] " , NULL        },
        { netspeed_rx,   "[%3s|" , "wlan0"        },
        { netspeed_tx,   "%2s] " , "wlan0"        },
        { run_command, "- %s "     , "sh /home/pi/.local/bin/rpistatus" },
        { uptime,    "-%s-"        , "%F %T"     },
        { datetime,    " %s "        , "%F %T"     },
};
