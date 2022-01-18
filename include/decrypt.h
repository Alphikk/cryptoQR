#ifndef DECRYPT_H
#define DECRYPT_H

#ifdef __cplusplus

extern "C" {

#endif

#include <openssl/evp.h>
#include <openssl/conf.h>
#include <openssl/err.h>

#include "general.h"

int __decrypt_aes( uint8_t *ciphertext,
                uint64_t ciphertext_len,
                uint8_t *key,
                uint8_t *iv,
                uint8_t *plaintext,
                uint64_t * plaintext_len);

#ifdef __cplusplus
}

#endif

#endif
