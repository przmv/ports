#!/bin/sh
#
# /etc/rc.d/btpd: start/stop btpd daemon

# general config
. /etc/btpd.conf

case "$1" in
start)
	/usr/bin/btpd $BTPD_ARGS &> /dev/null
	;;
stop)
	/usr/bin/btcli kill &> /dev/null
	;;
restart)
	$0 stop
	sleep 1
	$0 start
	;;
*)
	echo "usage: $0 {start|stop|restart}"
	;;
esac

# End of file
