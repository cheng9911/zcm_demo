// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#ifndef ZCM_EMBEDDED
#include <stdio.h>
#endif
#include "types/example/zcmtypes/example_zcmtypes_arrays_t.h"

static int __example_zcmtypes_arrays_t_hash_computed = 0;
static uint64_t __example_zcmtypes_arrays_t_hash;

uint64_t __example_zcmtypes_arrays_t_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __example_zcmtypes_arrays_t_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__example_zcmtypes_arrays_t_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x6ebeacdee9743f6bLL
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __example_zcmtypes_example_t_hash_recursive(&cp)
         + __example_zcmtypes_example_t_hash_recursive(&cp)
         + __example_zcmtypes_example_t_hash_recursive(&cp)
         + __example_zcmtypes_example_t_hash_recursive(&cp)
         + __example_zcmtypes_example_t_hash_recursive(&cp)
         + __example_zcmtypes_example_t_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __example_zcmtypes_arrays_t_get_hash(void)
{
    if (!__example_zcmtypes_arrays_t_hash_computed) {
        __example_zcmtypes_arrays_t_hash = (int64_t)__example_zcmtypes_arrays_t_hash_recursive(NULL);
        __example_zcmtypes_arrays_t_hash_computed = 1;
    }

    return __example_zcmtypes_arrays_t_hash;
}

int __example_zcmtypes_arrays_t_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const example_zcmtypes_arrays_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* m */
        thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].m), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* n */
        thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].n), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* prim_onedim_static */
        thislen = __boolean_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_onedim_static, 3);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* prim_onedim_dynamic */
        thislen = __int16_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_onedim_dynamic, p[element].n);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* prim_twodim_static_static */
        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __int32_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_static_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* prim_twodim_static_dynamic */
        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __int64_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_static_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* prim_twodim_dynamic_static */
        { int a;
        for (a = 0; a < p[element].n; ++a) {
            thislen = __float_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_dynamic_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* prim_twodim_dynamic_dynamic */
        { int a;
        for (a = 0; a < p[element].m; ++a) {
            thislen = __double_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_dynamic_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_onedim_static */
        thislen = __example_zcmtypes_example_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_onedim_static, 3);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* nonprim_onedim_dynamic */
        thislen = __example_zcmtypes_example_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_onedim_dynamic, p[element].n);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* nonprim_twodim_static_static */
        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __example_zcmtypes_example_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_static_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_twodim_static_dynamic */
        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __example_zcmtypes_example_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_static_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_twodim_dynamic_static */
        { int a;
        for (a = 0; a < p[element].n; ++a) {
            thislen = __example_zcmtypes_example_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_dynamic_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_twodim_dynamic_dynamic */
        { int a;
        for (a = 0; a < p[element].m; ++a) {
            thislen = __example_zcmtypes_example_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_dynamic_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

    }
    return pos_byte;
}

int example_zcmtypes_arrays_t_encode(void* buf, uint32_t offset, uint32_t maxlen, const example_zcmtypes_arrays_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __example_zcmtypes_arrays_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __example_zcmtypes_arrays_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __example_zcmtypes_arrays_t_encoded_array_size(const example_zcmtypes_arrays_t* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __int8_t_encoded_array_size(&(p[element].m), 1); // m

        size += __int8_t_encoded_array_size(&(p[element].n), 1); // n

        size += __boolean_encoded_array_size(p[element].prim_onedim_static, 3); // prim_onedim_static

        size += __int16_t_encoded_array_size(p[element].prim_onedim_dynamic, p[element].n); // prim_onedim_dynamic

        { int a;
        for (a = 0; a < 3; ++a) {
            size += __int32_t_encoded_array_size(p[element].prim_twodim_static_static[a], 3); // prim_twodim_static_static
        }
        }

        { int a;
        for (a = 0; a < 3; ++a) {
            size += __int64_t_encoded_array_size(p[element].prim_twodim_static_dynamic[a], p[element].n); // prim_twodim_static_dynamic
        }
        }

        { int a;
        for (a = 0; a < p[element].n; ++a) {
            size += __float_encoded_array_size(p[element].prim_twodim_dynamic_static[a], 3); // prim_twodim_dynamic_static
        }
        }

        { int a;
        for (a = 0; a < p[element].m; ++a) {
            size += __double_encoded_array_size(p[element].prim_twodim_dynamic_dynamic[a], p[element].n); // prim_twodim_dynamic_dynamic
        }
        }

        size += __example_zcmtypes_example_t_encoded_array_size(p[element].nonprim_onedim_static, 3); // nonprim_onedim_static

        size += __example_zcmtypes_example_t_encoded_array_size(p[element].nonprim_onedim_dynamic, p[element].n); // nonprim_onedim_dynamic

        { int a;
        for (a = 0; a < 3; ++a) {
            size += __example_zcmtypes_example_t_encoded_array_size(p[element].nonprim_twodim_static_static[a], 3); // nonprim_twodim_static_static
        }
        }

        { int a;
        for (a = 0; a < 3; ++a) {
            size += __example_zcmtypes_example_t_encoded_array_size(p[element].nonprim_twodim_static_dynamic[a], p[element].n); // nonprim_twodim_static_dynamic
        }
        }

        { int a;
        for (a = 0; a < p[element].n; ++a) {
            size += __example_zcmtypes_example_t_encoded_array_size(p[element].nonprim_twodim_dynamic_static[a], 3); // nonprim_twodim_dynamic_static
        }
        }

        { int a;
        for (a = 0; a < p[element].m; ++a) {
            size += __example_zcmtypes_example_t_encoded_array_size(p[element].nonprim_twodim_dynamic_dynamic[a], p[element].n); // nonprim_twodim_dynamic_dynamic
        }
        }

    }
    return size;
}

uint32_t example_zcmtypes_arrays_t_encoded_size(const example_zcmtypes_arrays_t* p)
{
    return 8 + __example_zcmtypes_arrays_t_encoded_array_size(p, 1);
}

uint32_t example_zcmtypes_arrays_t_struct_size(void)
{
    return sizeof(example_zcmtypes_arrays_t);
}

uint32_t example_zcmtypes_arrays_t_num_fields(void)
{
    return 14;
}

int example_zcmtypes_arrays_t_get_field(const example_zcmtypes_arrays_t* p, uint32_t i, zcm_field_t* f)
{
    if (i >= example_zcmtypes_arrays_t_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "m";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->m;
            return 0;
        }
        
        case 1: {
            f->name = "n";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->n;
            return 0;
        }
        
        case 2: {
            f->name = "prim_onedim_static";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 1;
            f->dim_size[0] = 3;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->prim_onedim_static;
            return 0;
        }
        
        case 3: {
            f->name = "prim_onedim_dynamic";
            f->type = ZCM_FIELD_INT16_T;
            f->typestr = "int16_t";
            f->num_dim = 1;
            f->dim_size[0] = p->n;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->prim_onedim_dynamic;
            return 0;
        }
        
        case 4: {
            f->name = "prim_twodim_static_static";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 2;
            f->dim_size[0] = 3;
            f->dim_size[1] = 3;
            f->dim_is_variable[0] = 0;
            f->dim_is_variable[1] = 0;
            f->data = (void*) &p->prim_twodim_static_static;
            return 0;
        }
        
        case 5: {
            f->name = "prim_twodim_static_dynamic";
            f->type = ZCM_FIELD_INT64_T;
            f->typestr = "int64_t";
            f->num_dim = 2;
            f->dim_size[0] = 3;
            f->dim_size[1] = p->n;
            f->dim_is_variable[0] = 0;
            f->dim_is_variable[1] = 1;
            f->data = (void*) &p->prim_twodim_static_dynamic;
            return 0;
        }
        
        case 6: {
            f->name = "prim_twodim_dynamic_static";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 2;
            f->dim_size[0] = p->n;
            f->dim_size[1] = 3;
            f->dim_is_variable[0] = 1;
            f->dim_is_variable[1] = 0;
            f->data = (void*) &p->prim_twodim_dynamic_static;
            return 0;
        }
        
        case 7: {
            f->name = "prim_twodim_dynamic_dynamic";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 2;
            f->dim_size[0] = p->m;
            f->dim_size[1] = p->n;
            f->dim_is_variable[0] = 1;
            f->dim_is_variable[1] = 1;
            f->data = (void*) &p->prim_twodim_dynamic_dynamic;
            return 0;
        }
        
        case 8: {
            /* example_t */
            f->name = "nonprim_onedim_static";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "example.zcmtypes.example_t";
            f->num_dim = 1;
            f->dim_size[0] = 3;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->nonprim_onedim_static;
            return 0;
        }
        
        case 9: {
            /* example_t */
            f->name = "nonprim_onedim_dynamic";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "example.zcmtypes.example_t";
            f->num_dim = 1;
            f->dim_size[0] = p->n;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->nonprim_onedim_dynamic;
            return 0;
        }
        
        case 10: {
            /* example_t */
            f->name = "nonprim_twodim_static_static";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "example.zcmtypes.example_t";
            f->num_dim = 2;
            f->dim_size[0] = 3;
            f->dim_size[1] = 3;
            f->dim_is_variable[0] = 0;
            f->dim_is_variable[1] = 0;
            f->data = (void*) &p->nonprim_twodim_static_static;
            return 0;
        }
        
        case 11: {
            /* example_t */
            f->name = "nonprim_twodim_static_dynamic";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "example.zcmtypes.example_t";
            f->num_dim = 2;
            f->dim_size[0] = 3;
            f->dim_size[1] = p->n;
            f->dim_is_variable[0] = 0;
            f->dim_is_variable[1] = 1;
            f->data = (void*) &p->nonprim_twodim_static_dynamic;
            return 0;
        }
        
        case 12: {
            /* example_t */
            f->name = "nonprim_twodim_dynamic_static";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "example.zcmtypes.example_t";
            f->num_dim = 2;
            f->dim_size[0] = p->n;
            f->dim_size[1] = 3;
            f->dim_is_variable[0] = 1;
            f->dim_is_variable[1] = 0;
            f->data = (void*) &p->nonprim_twodim_dynamic_static;
            return 0;
        }
        
        case 13: {
            /* example_t */
            f->name = "nonprim_twodim_dynamic_dynamic";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "example.zcmtypes.example_t";
            f->num_dim = 2;
            f->dim_size[0] = p->m;
            f->dim_size[1] = p->n;
            f->dim_is_variable[0] = 1;
            f->dim_is_variable[1] = 1;
            f->data = (void*) &p->nonprim_twodim_dynamic_dynamic;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* example_zcmtypes_arrays_t_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) example_zcmtypes_arrays_t_encode;
        typeinfo.decode         = (zcm_decode_t) example_zcmtypes_arrays_t_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) example_zcmtypes_arrays_t_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) example_zcmtypes_arrays_t_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  example_zcmtypes_arrays_t_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) example_zcmtypes_arrays_t_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) example_zcmtypes_arrays_t_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __example_zcmtypes_arrays_t_get_hash;
    }
    
    return &typeinfo;
}

int __example_zcmtypes_arrays_t_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, example_zcmtypes_arrays_t* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* m */
        thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].m), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* n */
        thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].n), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* prim_onedim_static */
        thislen = __boolean_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_onedim_static, 3);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* prim_onedim_dynamic */
        p[element].prim_onedim_dynamic = (int16_t*) zcm_malloc(sizeof(int16_t) * p[element].n);
        thislen = __int16_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_onedim_dynamic, p[element].n);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* prim_twodim_static_static */
        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __int32_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_static_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* prim_twodim_static_dynamic */
        p[element].prim_twodim_static_dynamic = (int64_t**) zcm_malloc(sizeof(int64_t*) * 3);
        { int a;
        for (a = 0; a < 3; ++a) {
            p[element].prim_twodim_static_dynamic[a] = (int64_t*) zcm_malloc(sizeof(int64_t) * p[element].n);
            thislen = __int64_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_static_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* prim_twodim_dynamic_static */
        p[element].prim_twodim_dynamic_static = (float**) zcm_malloc(sizeof(float*) * p[element].n);
        { int a;
        for (a = 0; a < p[element].n; ++a) {
            p[element].prim_twodim_dynamic_static[a] = (float*) zcm_malloc(sizeof(float) * 3);
            thislen = __float_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_dynamic_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* prim_twodim_dynamic_dynamic */
        p[element].prim_twodim_dynamic_dynamic = (double**) zcm_malloc(sizeof(double*) * p[element].m);
        { int a;
        for (a = 0; a < p[element].m; ++a) {
            p[element].prim_twodim_dynamic_dynamic[a] = (double*) zcm_malloc(sizeof(double) * p[element].n);
            thislen = __double_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].prim_twodim_dynamic_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_onedim_static */
        thislen = __example_zcmtypes_example_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_onedim_static, 3);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* nonprim_onedim_dynamic */
        p[element].nonprim_onedim_dynamic = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * p[element].n);
        thislen = __example_zcmtypes_example_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_onedim_dynamic, p[element].n);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* nonprim_twodim_static_static */
        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __example_zcmtypes_example_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_static_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_twodim_static_dynamic */
        p[element].nonprim_twodim_static_dynamic = (example_zcmtypes_example_t**) zcm_malloc(sizeof(example_zcmtypes_example_t*) * 3);
        { int a;
        for (a = 0; a < 3; ++a) {
            p[element].nonprim_twodim_static_dynamic[a] = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * p[element].n);
            thislen = __example_zcmtypes_example_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_static_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_twodim_dynamic_static */
        p[element].nonprim_twodim_dynamic_static = (example_zcmtypes_example_t**) zcm_malloc(sizeof(example_zcmtypes_example_t*) * p[element].n);
        { int a;
        for (a = 0; a < p[element].n; ++a) {
            p[element].nonprim_twodim_dynamic_static[a] = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * 3);
            thislen = __example_zcmtypes_example_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_dynamic_static[a], 3);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

        /* nonprim_twodim_dynamic_dynamic */
        p[element].nonprim_twodim_dynamic_dynamic = (example_zcmtypes_example_t**) zcm_malloc(sizeof(example_zcmtypes_example_t*) * p[element].m);
        { int a;
        for (a = 0; a < p[element].m; ++a) {
            p[element].nonprim_twodim_dynamic_dynamic[a] = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * p[element].n);
            thislen = __example_zcmtypes_example_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, p[element].nonprim_twodim_dynamic_dynamic[a], p[element].n);
            if (thislen < 0) return thislen; else pos_byte += thislen;
        }
        }

    }
    return pos_byte;
}

int __example_zcmtypes_arrays_t_decode_array_cleanup(example_zcmtypes_arrays_t* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __int8_t_decode_array_cleanup(&(p[element].m), 1);

        __int8_t_decode_array_cleanup(&(p[element].n), 1);

        __boolean_decode_array_cleanup(p[element].prim_onedim_static, 3);

        __int16_t_decode_array_cleanup(p[element].prim_onedim_dynamic, p[element].n);
        if (p[element].prim_onedim_dynamic) free(p[element].prim_onedim_dynamic);

        { int a;
        for (a = 0; a < 3; ++a) {
            __int32_t_decode_array_cleanup(p[element].prim_twodim_static_static[a], 3);
        }
        }

        { int a;
        for (a = 0; a < 3; ++a) {
            __int64_t_decode_array_cleanup(p[element].prim_twodim_static_dynamic[a], p[element].n);
            if (p[element].prim_twodim_static_dynamic[a]) free(p[element].prim_twodim_static_dynamic[a]);
        }
        }
        if (p[element].prim_twodim_static_dynamic) free(p[element].prim_twodim_static_dynamic);

        { int a;
        for (a = 0; a < p[element].n; ++a) {
            __float_decode_array_cleanup(p[element].prim_twodim_dynamic_static[a], 3);
            if (p[element].prim_twodim_dynamic_static[a]) free(p[element].prim_twodim_dynamic_static[a]);
        }
        }
        if (p[element].prim_twodim_dynamic_static) free(p[element].prim_twodim_dynamic_static);

        { int a;
        for (a = 0; a < p[element].m; ++a) {
            __double_decode_array_cleanup(p[element].prim_twodim_dynamic_dynamic[a], p[element].n);
            if (p[element].prim_twodim_dynamic_dynamic[a]) free(p[element].prim_twodim_dynamic_dynamic[a]);
        }
        }
        if (p[element].prim_twodim_dynamic_dynamic) free(p[element].prim_twodim_dynamic_dynamic);

        __example_zcmtypes_example_t_decode_array_cleanup(p[element].nonprim_onedim_static, 3);

        __example_zcmtypes_example_t_decode_array_cleanup(p[element].nonprim_onedim_dynamic, p[element].n);
        if (p[element].nonprim_onedim_dynamic) free(p[element].nonprim_onedim_dynamic);

        { int a;
        for (a = 0; a < 3; ++a) {
            __example_zcmtypes_example_t_decode_array_cleanup(p[element].nonprim_twodim_static_static[a], 3);
        }
        }

        { int a;
        for (a = 0; a < 3; ++a) {
            __example_zcmtypes_example_t_decode_array_cleanup(p[element].nonprim_twodim_static_dynamic[a], p[element].n);
            if (p[element].nonprim_twodim_static_dynamic[a]) free(p[element].nonprim_twodim_static_dynamic[a]);
        }
        }
        if (p[element].nonprim_twodim_static_dynamic) free(p[element].nonprim_twodim_static_dynamic);

        { int a;
        for (a = 0; a < p[element].n; ++a) {
            __example_zcmtypes_example_t_decode_array_cleanup(p[element].nonprim_twodim_dynamic_static[a], 3);
            if (p[element].nonprim_twodim_dynamic_static[a]) free(p[element].nonprim_twodim_dynamic_static[a]);
        }
        }
        if (p[element].nonprim_twodim_dynamic_static) free(p[element].nonprim_twodim_dynamic_static);

        { int a;
        for (a = 0; a < p[element].m; ++a) {
            __example_zcmtypes_example_t_decode_array_cleanup(p[element].nonprim_twodim_dynamic_dynamic[a], p[element].n);
            if (p[element].nonprim_twodim_dynamic_dynamic[a]) free(p[element].nonprim_twodim_dynamic_dynamic[a]);
        }
        }
        if (p[element].nonprim_twodim_dynamic_dynamic) free(p[element].nonprim_twodim_dynamic_dynamic);

    }
    return 0;
}

int example_zcmtypes_arrays_t_decode(const void* buf, uint32_t offset, uint32_t maxlen, example_zcmtypes_arrays_t* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __example_zcmtypes_arrays_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __example_zcmtypes_arrays_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int example_zcmtypes_arrays_t_decode_cleanup(example_zcmtypes_arrays_t* p)
{
    return __example_zcmtypes_arrays_t_decode_array_cleanup(p, 1);
}

uint32_t __example_zcmtypes_arrays_t_clone_array(const example_zcmtypes_arrays_t* p, example_zcmtypes_arrays_t* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __int8_t_clone_array(&(p[element].m), &(q[element].m), 1);

        n += __int8_t_clone_array(&(p[element].n), &(q[element].n), 1);

        n += __boolean_clone_array(p[element].prim_onedim_static, q[element].prim_onedim_static, 3);

        q[element].prim_onedim_dynamic = (int16_t*) zcm_malloc(sizeof(int16_t) * q[element].n);
        n += __int16_t_clone_array(p[element].prim_onedim_dynamic, q[element].prim_onedim_dynamic, p[element].n);

        { int a;
        for (a = 0; a < 3; ++a) {
            n += __int32_t_clone_array(p[element].prim_twodim_static_static[a], q[element].prim_twodim_static_static[a], 3);
        }
        }

        q[element].prim_twodim_static_dynamic = (int64_t**) zcm_malloc(sizeof(int64_t*) * 3);
        { int a;
        for (a = 0; a < 3; ++a) {
            q[element].prim_twodim_static_dynamic[a] = (int64_t*) zcm_malloc(sizeof(int64_t) * q[element].n);
            n += __int64_t_clone_array(p[element].prim_twodim_static_dynamic[a], q[element].prim_twodim_static_dynamic[a], p[element].n);
        }
        }

        q[element].prim_twodim_dynamic_static = (float**) zcm_malloc(sizeof(float*) * q[element].n);
        { int a;
        for (a = 0; a < p[element].n; ++a) {
            q[element].prim_twodim_dynamic_static[a] = (float*) zcm_malloc(sizeof(float) * 3);
            n += __float_clone_array(p[element].prim_twodim_dynamic_static[a], q[element].prim_twodim_dynamic_static[a], 3);
        }
        }

        q[element].prim_twodim_dynamic_dynamic = (double**) zcm_malloc(sizeof(double*) * q[element].m);
        { int a;
        for (a = 0; a < p[element].m; ++a) {
            q[element].prim_twodim_dynamic_dynamic[a] = (double*) zcm_malloc(sizeof(double) * q[element].n);
            n += __double_clone_array(p[element].prim_twodim_dynamic_dynamic[a], q[element].prim_twodim_dynamic_dynamic[a], p[element].n);
        }
        }

        n += __example_zcmtypes_example_t_clone_array(p[element].nonprim_onedim_static, q[element].nonprim_onedim_static, 3);

        q[element].nonprim_onedim_dynamic = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * q[element].n);
        n += __example_zcmtypes_example_t_clone_array(p[element].nonprim_onedim_dynamic, q[element].nonprim_onedim_dynamic, p[element].n);

        { int a;
        for (a = 0; a < 3; ++a) {
            n += __example_zcmtypes_example_t_clone_array(p[element].nonprim_twodim_static_static[a], q[element].nonprim_twodim_static_static[a], 3);
        }
        }

        q[element].nonprim_twodim_static_dynamic = (example_zcmtypes_example_t**) zcm_malloc(sizeof(example_zcmtypes_example_t*) * 3);
        { int a;
        for (a = 0; a < 3; ++a) {
            q[element].nonprim_twodim_static_dynamic[a] = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * q[element].n);
            n += __example_zcmtypes_example_t_clone_array(p[element].nonprim_twodim_static_dynamic[a], q[element].nonprim_twodim_static_dynamic[a], p[element].n);
        }
        }

        q[element].nonprim_twodim_dynamic_static = (example_zcmtypes_example_t**) zcm_malloc(sizeof(example_zcmtypes_example_t*) * q[element].n);
        { int a;
        for (a = 0; a < p[element].n; ++a) {
            q[element].nonprim_twodim_dynamic_static[a] = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * 3);
            n += __example_zcmtypes_example_t_clone_array(p[element].nonprim_twodim_dynamic_static[a], q[element].nonprim_twodim_dynamic_static[a], 3);
        }
        }

        q[element].nonprim_twodim_dynamic_dynamic = (example_zcmtypes_example_t**) zcm_malloc(sizeof(example_zcmtypes_example_t*) * q[element].m);
        { int a;
        for (a = 0; a < p[element].m; ++a) {
            q[element].nonprim_twodim_dynamic_dynamic[a] = (example_zcmtypes_example_t*) zcm_malloc(sizeof(example_zcmtypes_example_t) * q[element].n);
            n += __example_zcmtypes_example_t_clone_array(p[element].nonprim_twodim_dynamic_dynamic[a], q[element].nonprim_twodim_dynamic_dynamic[a], p[element].n);
        }
        }

    }
    return n;
}

example_zcmtypes_arrays_t* example_zcmtypes_arrays_t_copy(const example_zcmtypes_arrays_t* p)
{
    example_zcmtypes_arrays_t* q = (example_zcmtypes_arrays_t*) malloc(sizeof(example_zcmtypes_arrays_t));
    __example_zcmtypes_arrays_t_clone_array(p, q, 1);
    return q;
}

void example_zcmtypes_arrays_t_destroy(example_zcmtypes_arrays_t* p)
{
    __example_zcmtypes_arrays_t_decode_array_cleanup(p, 1);
    free(p);
}

int example_zcmtypes_arrays_t_publish(zcm_t* zcm, const char* channel, const example_zcmtypes_arrays_t* p)
{
      uint32_t max_data_size = example_zcmtypes_arrays_t_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = example_zcmtypes_arrays_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _example_zcmtypes_arrays_t_subscription_t {
    example_zcmtypes_arrays_t_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void example_zcmtypes_arrays_t_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    example_zcmtypes_arrays_t p;
    memset(&p, 0, sizeof(example_zcmtypes_arrays_t));
    status = example_zcmtypes_arrays_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr, "error %d decoding example_zcmtypes_arrays_t!!!\n", status);
        #endif
        return;
    }

    example_zcmtypes_arrays_t_subscription_t* h = (example_zcmtypes_arrays_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    example_zcmtypes_arrays_t_decode_cleanup (&p);
}

example_zcmtypes_arrays_t_subscription_t* example_zcmtypes_arrays_t_subscribe (zcm_t* zcm,
                    const char* channel,
                    example_zcmtypes_arrays_t_handler_t f, void* userdata)
{
    example_zcmtypes_arrays_t_subscription_t* n = (example_zcmtypes_arrays_t_subscription_t*)
                       malloc(sizeof(example_zcmtypes_arrays_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              example_zcmtypes_arrays_t_handler_stub, n);
    if (n->z_sub == NULL) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr,"couldn't reg example_zcmtypes_arrays_t ZCM handler!\n");
        #endif
        free (n);
        return NULL;
    }
    return n;
}

int example_zcmtypes_arrays_t_unsubscribe(zcm_t* zcm, example_zcmtypes_arrays_t_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        #ifndef ZCM_EMBEDDED
        fprintf(stderr,
           "couldn't unsubscribe example_zcmtypes_arrays_t_handler %p!\n", hid);
        #endif
        return -1;
    }
    free (hid);
    return 0;
}
