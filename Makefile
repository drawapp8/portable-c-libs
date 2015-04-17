all:
	gcc -g md5.c  md5_test.c -o md5sum
	gcc -g base64.c  base64_test.c -o b64ecnode

clean:
	rm -f md5sum b64ecnode
