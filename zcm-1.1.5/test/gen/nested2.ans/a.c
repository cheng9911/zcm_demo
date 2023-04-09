// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "a.h"

static int __a_hash_computed;
static uint64_t __a_hash;

uint64_t __a_hash_recursive(const __zcm_hash_ptr *p)
{
    const __zcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __a_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__a_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xd21b643a1f224c57LL
         + __int32_t_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __a_get_hash(void)
{
    if (!__a_hash_computed) {
        __a_hash = (int64_t)__a_hash_recursive(NULL);
        __a_hash_computed = 1;
    }

    return __a_hash;
}

int __a_encode_array(void *buf, int offset, int maxlen, const a *p, int elements)
{
    int pos = 0, element;
    int thislen;

    for (element = 0; element < elements; element++) {

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].val), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int a_encode(void *buf, int offset, int maxlen, const a *p)
{
    int pos = 0, thislen;
    int64_t hash = __a_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __a_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int __a_encoded_array_size(const a *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {

        size += __int32_t_encoded_array_size(&(p[element].val), 1);

    }
    return size;
}

int a_encoded_size(const a *p)
{
    return 8 + __a_encoded_array_size(p, 1);
}

int __a_decode_array(const void *buf, int offset, int maxlen, a *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].val), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __a_decode_array_cleanup(a *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int32_t_decode_array_cleanup(&(p[element].val), 1);

    }
    return 0;
}

int a_decode(const void *buf, int offset, int maxlen, a *p)
{
    int pos = 0, thislen;
    int64_t hash = __a_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __a_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int a_decode_cleanup(a *p)
{
    return __a_decode_array_cleanup(p, 1);
}

int __a_clone_array(const a *p, a *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int32_t_clone_array(&(p[element].val), &(q[element].val), 1);

    }
    return 0;
}

a *a_copy(const a *p)
{
    a *q = (a*) malloc(sizeof(a));
    __a_clone_array(p, q, 1);
    return q;
}

void a_destroy(a *p)
{
    __a_decode_array_cleanup(p, 1);
    free(p);
}

int a_publish(zcm_t *lc, const char *channel, const a *p)
{
      int max_data_size = a_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = a_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (lc, channel, (char *)buf, (size_t)data_size);
      free (buf);
      return status;
}

struct _a_subscription_t {
    a_handler_t user_handler;
    void *userdata;
    zcm_sub_t *z_sub;
};
static
void a_handler_stub (const zcm_recv_buf_t *rbuf,
                            const char *channel, void *userdata)
{
    int status;
    a p;
    memset(&p, 0, sizeof(a));
    status = a_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding a!!!\n", status);
        return;
    }

    a_subscription_t *h = (a_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    a_decode_cleanup (&p);
}

a_subscription_t* a_subscribe (zcm_t *zcm,
                    const char *channel,
                    a_handler_t f, void *userdata)
{
    a_subscription_t *n = (a_subscription_t*)
                       malloc(sizeof(a_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              a_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg a ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int a_unsubscribe(zcm_t *zcm, a_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe a_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

