#!/bin/bash
if [[ $# -eq 0 ]]
then
    echo "Monitoring RPC client traffice to 127:0.0.1:5556"
    IP=127.0.0.1
    PORT=5556
else
    if [[ $# -eq 2 ]]
    then
        IP=$1
        PORT=$2
    fi
fi
sudo tcpdump -i lo0 -A '(tcp) and (dst port '$PORT') and (dst host '$IP')'
