/*
cdecode.h - c header for a base64 decoding algorithm

This is part of the libb64 project, and has been placed in the public domain.
For details, see http://sourceforge.net/projects/libb64
*/

#ifndef BASE64__H
#define BASE64__H

#ifdef __cplusplus
extern "C" {
#endif/*__cplusplus*/

int b64_decode(char const *src, unsigned char *target, size_t targsize);
int b64_encode(unsigned char const *src, size_t srclength, char *target, size_t targsize);

#ifdef __cplusplus
}
#endif/*__cplusplus*/
#endif /* BASE64__H */
