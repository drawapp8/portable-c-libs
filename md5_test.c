
#include "md5.h"
#include <stdio.h>
#include <string.h>

static const char* md5sum(const void* p, size_t len, char* out) {
	int i = 0;
	char one[4] = {0};
	unsigned char res[16] = {0};

	MD5_CTX ctx;
	MD5_Init(&ctx);
	MD5_Update(&ctx, p, len);
	MD5_Final(res, &ctx);

	for(i = 0; i < 16; i++) {
		snprintf(one, 3, "%02x", res[i]);
		strcat(out, one);
	}

	return out;
}

int main(int argc, char* argv[]) {
	char out[17] = {0};
	const char* str = argc > 1 ? argv[1] : "hello";

	printf("%s\n", md5sum(str, strlen(str), out));

	return 0;
}

