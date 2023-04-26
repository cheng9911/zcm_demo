// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#ifndef ZCM_EMBEDDED
#include <stdio.h>
#endif
#include "types/example/zcmtypes/test_package/example_zcmtypes_test_package_example3_t.h"

static int __example_zcmtypes_test_package_example3_t_hash_computed = 0;
static uint64_t __example_zcmtypes_test_package_example3_t_hash;

uint64_t __example_zcmtypes_test_package_example3_t_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __example_zcmtypes_test_package_example3_t_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__example_zcmtypes_test_package_example3_t_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x85bbc2e90a49c894LL
         + __boolean_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __example_zcmtypes_test_package_example3_t_get_hash(void)
{
    if (!__example_zcmtypes_test_package_example3_t_hash_computed) {
        __example_zcmtypes_test_package_example3_t_hash = (int64_t)__example_zcmtypes_test_package_example3_t_hash_recursive(NULL);
        __example_zcmtypes_test_package_example3_t_hash_computed = 1;
    }

    return __example_zcmtypes_test_package_example3_t_hash;
}

int __example_zcmtypes_test_package_example3_t_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const example_zcmtypes_test_package_example3_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* packaged */
        thislen = __boolean_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].packaged), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int example_zcmtypes_test_package_example3_t_encode(void* buf, uint32_t offset, uint32_t maxlen, const example_zcmtypes_test_package_example3_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __example_zcmtypes_test_package_example3_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __example_zcmtypes_test_package_example3_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __example_zcmtypes_test_package_example3_t_encoded_array_size(const example_zcmtypes_test_package_example3_t* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __boolean_encoded_array_size(&(p[element].packaged), 1); // packaged

    }
    return size;
}

uint32_t example_zcmtypes_test_package_example3_t_encoded_size(const example_zcmtypes_test_package_example3_t* p)
{
    return 8 + __example_zcmtypes_test_package_example3_t_encoded_array_size(p, 1);
}

uint32_t example_zcmtypes_test_package_example3_t_struct_size(void)
{
    return sizeof(example_zcmtypes_test_package_example3_t);
}

uint32_t example_zcmtypes_test_package_example3_t_num_fields(void)
{
    return 1;
}

int example_zcmtypes_test_package_example3_t_get_field(const example_zcmtypes_test_package_example3_t* p, uint32_t i, zcm_field_t* f)
{
    if (i >= example_zcmtypes_test_package_example3_t_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "packaged";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->packaged;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* example_zcmtypes_test_package_example3_t_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) example_zcmtypes_test_package_example3_t_encode;
        typeinfo.decode         = (zcm_decode_t) example_zcmtypes_test_package_example3_t_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) example_zcmtypes_test_package_example3_t_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) example_zcmtypes_test_package_example3_t_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  example_zcmtypes_test_package_example3_t_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) example_zcmtypes_test_package_example3_t_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) example_zcmtypes_test_package_example3_t_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __example_zcmtypes_test_package_example3_t_get_hash;
    }
    
    return &typeinfo;
}

int __example_zcmtypes_test_package_example3_t_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, example_zcmtypes_test_package_example3_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* packaged */
        thislen = __boolean_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].packaged), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int __example_zcmtypes_test_package_example3_t_decode_array_cleanup(example_zcmtypes_test_package_example3_t* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __boolean_decode_array_cleanup(&(p[element].packaged), 1);

    }
    return 0;
}

int example_zcmtypes_test_package_example3_t_decode(const void* buf, uint32_t offset, uint32_t maxlen, example_zcmtypes_test_package_example3_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __example_zcmtypes_test_package_example3_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __example_zcmtypes_test_package_example3_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int example_zcmtypes_test_package_example3_t_decode_cleanup(example_zcmtypes_test_package_example3_t* p)
{
    return __example_zcmtypes_test_package_example3_t_decode_array_cleanup(p, 1);
}

uint32_t __example_zcmtypes_test_package_example3_t_clone_array(const example_zcmtypes_test_package_example3_t* p, example_zcmtypes_test_package_example3_t* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __boolean_clone_array(&(p[element].packaged), &(q[element].packaged), 1);

    }
    return n;
}

example_zcmtypes_test_package_example3_t* example_zcmtypes_test_package_example3_t_copy(const example_zcmtypes_test_package_example3_t* p)
{
    example_zcmtypes_test_package_example3_t* q = (example_zcmtypes_test_package_example3_t*) malloc(sizeof(example_zcmtypes_test_package_example3_t));
    __example_zcmtypes_test_package_example3_t_clone_array(p, q, 1);
    return q;
}

void example_zcmtypes_test_package_example3_t_destroy(example_zcmtypes_test_package_example3_t* p)
{
    __example_zcmtypes_test_package_example3_t_decode_array_cleanup(p, 1);
    free(p);
}

int example_zcmtypes_test_package_example3_t_publish(zcm_t* zcm, const char* channel, const example_zcmtypes_test_package_example3_t* p)
{
      uint32_t max_data_size = example_zcmtypes_test_package_example3_t_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = example_zcmtypes_test_package_example3_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _example_zcmtypes_test_package_example3_t_subscription_t {
    example_zcmtypes_test_package_example3_t_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void example_zcmtypes_test_package_example3_t_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    example_zcmtypes_test_package_example3_t p;
    memset(&p, 0, sizeof(example_zcmtypes_test_package_example3_t));
    status = example_zcmtypes_test_package_example3_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr, "error %d decoding example_zcmtypes_test_package_example3_t!!!\n", status);
        #endif
        return;
    }

    example_zcmtypes_test_package_example3_t_subscription_t* h = (example_zcmtypes_test_package_example3_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    example_zcmtypes_test_package_example3_t_decode_cleanup (&p);
}

example_zcmtypes_test_package_example3_t_subscription_t* example_zcmtypes_test_package_example3_t_subscribe (zcm_t* zcm,
                    const char* channel,
                    example_zcmtypes_test_package_example3_t_handler_t f, void* userdata)
{
    example_zcmtypes_test_package_example3_t_subscription_t* n = (example_zcmtypes_test_package_example3_t_subscription_t*)
                       malloc(sizeof(example_zcmtypes_test_package_example3_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              example_zcmtypes_test_package_example3_t_handler_stub, n);
    if (n->z_sub == NULL) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr,"couldn't reg example_zcmtypes_test_package_example3_t ZCM handler!\n");
        #endif
        free (n);
        return NULL;
    }
    return n;
}

int example_zcmtypes_test_package_example3_t_unsubscribe(zcm_t* zcm, example_zcmtypes_test_package_example3_t_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        #ifndef ZCM_EMBEDDED
        fprintf(stderr,
           "couldn't unsubscribe example_zcmtypes_test_package_example3_t_handler %p!\n", hid);
        #endif
        return -1;
    }
    free (hid);
    return 0;
}

