remote: rpc rprintmsg msg_server

rpc: msg.x
	rpcgen -C msg.x

rprintmsg: msg_clnt.c msg.h msg_xdr.c rprintmsg.c
	gcc rprintmsg.c msg_xdr.c msg_clnt.c -o rprintmsg # -lnsl (nsl not needed on mac)

msg_server: msg_proc.c msg_svc.c msg_xdr.c msg.h
	gcc msg_proc.c msg_xdr.c msg_svc.c -o msg_server # -lnsl (nsl not needed on mac)

clean:
	rm rprintmsg msg_server msg_xdr.c msg_svc.c msg.h *~

