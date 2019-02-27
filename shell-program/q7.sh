#!/bin/bash

# TOP 10 Processes in Descending Order
ps -e |head -11


# -----------------------------------
# OUTPUT :

#  PID TTY          TIME CMD
#     1 ?        00:00:08 systemd
#     2 ?        00:00:00 kthreadd
#     4 ?        00:00:00 kworker/0:0H
#     6 ?        00:00:00 mm_percpu_wq
#     7 ?        00:00:00 ksoftirqd/0
#     8 ?        00:00:09 rcu_sched
#     9 ?        00:00:00 rcu_bh
#    10 ?        00:00:00 migration/0
#    11 ?        00:00:00 watchdog/0
#    12 ?        00:00:00 cpuhp/0
