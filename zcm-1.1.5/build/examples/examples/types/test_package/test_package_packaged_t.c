// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#ifndef ZCM_EMBEDDED
#include <stdio.h>
#endif
#include "types/test_package/test_package_packaged_t.h"

static int __test_package_packaged_t_hash_computed = 0;
static uint64_t __test_package_packaged_t_hash;

uint64_t __test_package_packaged_t_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __test_package_packaged_t_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__test_package_packaged_t_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x26471757e1db6303LL
         + __boolean_hash_recursive(&cp)
         + __test_package_packaged2_t_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __test_package_packaged_t_get_hash(void)
{
    if (!__test_package_packaged_t_hash_computed) {
        __test_package_packaged_t_hash = (int64_t)__test_package_packaged_t_hash_recursive(NULL);
        __test_package_packaged_t_hash_computed = 1;
    }

    return __test_package_packaged_t_hash;
}

int __test_package_packaged_t_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const test_package_packaged_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* packaged */
        thislen = __boolean_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].packaged), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* a */
        thislen = __test_package_packaged2_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].a), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int test_package_packaged_t_encode(void* buf, uint32_t offset, uint32_t maxlen, const test_package_packaged_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __test_package_packaged_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __test_package_packaged_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __test_package_packaged_t_encoded_array_size(const test_package_packaged_t* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __boolean_encoded_array_size(&(p[element].packaged), 1); // packaged

        size += __test_package_packaged2_t_encoded_array_size(&(p[element].a), 1); // a

    }
    return size;
}

uint32_t test_package_packaged_t_encoded_size(const test_package_packaged_t* p)
{
    return 8 + __test_package_packaged_t_encoded_array_size(p, 1);
}

uint32_t test_package_packaged_t_struct_size(void)
{
    return sizeof(test_package_packaged_t);
}

uint32_t test_package_packaged_t_num_fields(void)
{
    return 2;
}

int test_package_packaged_t_get_field(const test_package_packaged_t* p, uint32_t i, zcm_field_t* f)
{
    if (i >= test_package_packaged_t_num_fields())
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
        
        case 1: {
            /* packaged2_t */
            f->name = "a";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "test_package.packaged2_t";
            f->num_dim = 0;
            f->data = (void*) &p->a;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* test_package_packaged_t_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) test_package_packaged_t_encode;
        typeinfo.decode         = (zcm_decode_t) test_package_packaged_t_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) test_package_packaged_t_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) test_package_packaged_t_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  test_package_packaged_t_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) test_package_packaged_t_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) test_package_packaged_t_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __test_package_packaged_t_get_hash;
    }
    
    return &typeinfo;
}

int __test_package_packaged_t_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, test_package_packaged_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* packaged */
        thislen = __boolean_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].packaged), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* a */
        thislen = __test_package_packaged2_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].a), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int __test_package_packaged_t_decode_array_cleanup(test_package_packaged_t* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __boolean_decode_array_cleanup(&(p[element].packaged), 1);

        __test_package_packaged2_t_decode_array_cleanup(&(p[element].a), 1);

    }
    return 0;
}

int test_package_packaged_t_decode(const void* buf, uint32_t offset, uint32_t maxlen, test_package_packaged_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __test_package_packaged_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __test_package_packaged_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int test_package_packaged_t_decode_cleanup(test_package_packaged_t* p)
{
    return __test_package_packaged_t_decode_array_cleanup(p, 1);
}

uint32_t __test_package_packaged_t_clone_array(const test_package_packaged_t* p, test_package_packaged_t* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __boolean_clone_array(&(p[element].packaged), &(q[element].packaged), 1);

        n += __test_package_packaged2_t_clone_array(&(p[element].a), &(q[element].a), 1);

    }
    return n;
}

test_package_packaged_t* test_package_packaged_t_copy(const test_package_packaged_t* p)
{
    test_package_packaged_t* q = (test_package_packaged_t*) malloc(sizeof(test_package_packaged_t));
    __test_package_packaged_t_clone_array(p, q, 1);
    return q;
}

void test_package_packaged_t_destroy(test_package_packaged_t* p)
{
    __test_package_packaged_t_decode_array_cleanup(p, 1);
    free(p);
}

int test_package_packaged_t_publish(zcm_t* zcm, const char* channel, const test_package_packaged_t* p)
{
      uint32_t max_data_size = test_package_packaged_t_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = test_package_packaged_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _test_package_packaged_t_subscription_t {
    test_package_packaged_t_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void test_package_packaged_t_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    test_package_packaged_t p;
    memset(&p, 0, sizeof(test_package_packaged_t));
    status = test_package_packaged_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr, "error %d decoding test_package_packaged_t!!!\n", status);
        #endif
        return;
    }

    test_package_packaged_t_subscription_t* h = (test_package_packaged_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    test_package_packaged_t_decode_cleanup (&p);
}

test_package_packaged_t_subscription_t* test_package_packaged_t_subscribe (zcm_t* zcm,
                    const char* channel,
                    test_package_packaged_t_handler_t f, void* userdata)
{
    test_package_packaged_t_subscription_t* n = (test_package_packaged_t_subscription_t*)
                       malloc(sizeof(test_package_packaged_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              test_package_packaged_t_handler_stub, n);
    if (n->z_sub == NULL) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr,"couldn't reg test_package_packaged_t ZCM handler!\n");
        #endif
        free (n);
        return NULL;
    }
    return n;
}

int test_package_packaged_t_unsubscribe(zcm_t* zcm, test_package_packaged_t_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        #ifndef ZCM_EMBEDDED
        fprintf(stderr,
           "couldn't unsubscribe test_package_packaged_t_handler %p!\n", hid);
        #endif
        return -1;
    }
    free (hid);
    return 0;
}

