// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#ifndef ZCM_EMBEDDED
#include <stdio.h>
#endif
#include "types/unpackaged_t.h"

static int __unpackaged_t_hash_computed = 0;
static uint64_t __unpackaged_t_hash;

uint64_t __unpackaged_t_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __unpackaged_t_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__unpackaged_t_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xc6ee746a491f75dbLL
         + __int64_t_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __unpackaged_t_get_hash(void)
{
    if (!__unpackaged_t_hash_computed) {
        __unpackaged_t_hash = (int64_t)__unpackaged_t_hash_recursive(NULL);
        __unpackaged_t_hash_computed = 1;
    }

    return __unpackaged_t_hash;
}

int __unpackaged_t_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const unpackaged_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* x */
        thislen = __int64_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int unpackaged_t_encode(void* buf, uint32_t offset, uint32_t maxlen, const unpackaged_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __unpackaged_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __unpackaged_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __unpackaged_t_encoded_array_size(const unpackaged_t* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __int64_t_encoded_array_size(&(p[element].x), 1); // x

    }
    return size;
}

uint32_t unpackaged_t_encoded_size(const unpackaged_t* p)
{
    return 8 + __unpackaged_t_encoded_array_size(p, 1);
}

uint32_t unpackaged_t_struct_size(void)
{
    return sizeof(unpackaged_t);
}

uint32_t unpackaged_t_num_fields(void)
{
    return 1;
}

int unpackaged_t_get_field(const unpackaged_t* p, uint32_t i, zcm_field_t* f)
{
    if (i >= unpackaged_t_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "x";
            f->type = ZCM_FIELD_INT64_T;
            f->typestr = "int64_t";
            f->num_dim = 0;
            f->data = (void*) &p->x;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* unpackaged_t_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) unpackaged_t_encode;
        typeinfo.decode         = (zcm_decode_t) unpackaged_t_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) unpackaged_t_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) unpackaged_t_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  unpackaged_t_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) unpackaged_t_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) unpackaged_t_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __unpackaged_t_get_hash;
    }
    
    return &typeinfo;
}

int __unpackaged_t_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, unpackaged_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* x */
        thislen = __int64_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int __unpackaged_t_decode_array_cleanup(unpackaged_t* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __int64_t_decode_array_cleanup(&(p[element].x), 1);

    }
    return 0;
}

int unpackaged_t_decode(const void* buf, uint32_t offset, uint32_t maxlen, unpackaged_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __unpackaged_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __unpackaged_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int unpackaged_t_decode_cleanup(unpackaged_t* p)
{
    return __unpackaged_t_decode_array_cleanup(p, 1);
}

uint32_t __unpackaged_t_clone_array(const unpackaged_t* p, unpackaged_t* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __int64_t_clone_array(&(p[element].x), &(q[element].x), 1);

    }
    return n;
}

unpackaged_t* unpackaged_t_copy(const unpackaged_t* p)
{
    unpackaged_t* q = (unpackaged_t*) malloc(sizeof(unpackaged_t));
    __unpackaged_t_clone_array(p, q, 1);
    return q;
}

void unpackaged_t_destroy(unpackaged_t* p)
{
    __unpackaged_t_decode_array_cleanup(p, 1);
    free(p);
}

int unpackaged_t_publish(zcm_t* zcm, const char* channel, const unpackaged_t* p)
{
      uint32_t max_data_size = unpackaged_t_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = unpackaged_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _unpackaged_t_subscription_t {
    unpackaged_t_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void unpackaged_t_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    unpackaged_t p;
    memset(&p, 0, sizeof(unpackaged_t));
    status = unpackaged_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr, "error %d decoding unpackaged_t!!!\n", status);
        #endif
        return;
    }

    unpackaged_t_subscription_t* h = (unpackaged_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    unpackaged_t_decode_cleanup (&p);
}

unpackaged_t_subscription_t* unpackaged_t_subscribe (zcm_t* zcm,
                    const char* channel,
                    unpackaged_t_handler_t f, void* userdata)
{
    unpackaged_t_subscription_t* n = (unpackaged_t_subscription_t*)
                       malloc(sizeof(unpackaged_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              unpackaged_t_handler_stub, n);
    if (n->z_sub == NULL) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr,"couldn't reg unpackaged_t ZCM handler!\n");
        #endif
        free (n);
        return NULL;
    }
    return n;
}

int unpackaged_t_unsubscribe(zcm_t* zcm, unpackaged_t_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        #ifndef ZCM_EMBEDDED
        fprintf(stderr,
           "couldn't unsubscribe unpackaged_t_handler %p!\n", hid);
        #endif
        return -1;
    }
    free (hid);
    return 0;
}

