/** THIS IS AN AUTOMATICALLY GENERATED FILE.
 *  DO NOT MODIFY BY HAND!!
 *
 *  Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __arrays_t_hpp__
#define __arrays_t_hpp__

#include <vector>
#include "types/example_t.hpp"
#include "types/example_t.hpp"
#include "types/example_t.hpp"
#include "types/example_t.hpp"
#include "types/example_t.hpp"
#include "types/example_t.hpp"


class arrays_t
{
    public:
        int8_t     m;

        int8_t     n;

        int8_t     prim_onedim_static[3];

        std::vector< int16_t > prim_onedim_dynamic;

        int32_t    prim_twodim_static_static[3][3];

        std::vector< std::vector< int64_t > > prim_twodim_static_dynamic;

        std::vector< std::vector< float > > prim_twodim_dynamic_static;

        std::vector< std::vector< double > > prim_twodim_dynamic_dynamic;

        example_t  nonprim_onedim_static[3];

        std::vector< example_t > nonprim_onedim_dynamic;

        example_t  nonprim_twodim_static_static[3][3];

        std::vector< std::vector< example_t > > nonprim_twodim_static_dynamic;

        std::vector< std::vector< example_t > > nonprim_twodim_dynamic_static;

        std::vector< std::vector< example_t > > nonprim_twodim_dynamic_dynamic;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~arrays_t() {}

        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void* buf, uint32_t offset, uint32_t maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline uint32_t getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void* buf, uint32_t offset, uint32_t maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "arrays_t"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int arrays_t::encode(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = (int64_t)getHash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int arrays_t::decode(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t arrays_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t arrays_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* arrays_t::getTypeName()
{
    return "arrays_t";
}

int arrays_t::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos_byte = 0;
    int thislen;

    thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->m, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->n, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    thislen = __boolean_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_onedim_static[0], 3);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    if(this->n > 0) {
        thislen = __int16_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_onedim_dynamic[0], this->n);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        thislen = __int32_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_static_static[a0][0], 3);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    if(this->n > 0) {
        for (int a0 = 0; a0 < 3; ++a0) {
            thislen = __int64_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_static_dynamic[a0][0], this->n);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    for (int a0 = 0; a0 < this->n; ++a0) {
        thislen = __float_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_dynamic_static[a0][0], 3);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    if(this->n > 0) {
        for (int a0 = 0; a0 < this->m; ++a0) {
            thislen = __double_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_dynamic_dynamic[a0][0], this->n);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        thislen = this->nonprim_onedim_static[a0]._encodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    for (int a0 = 0; a0 < this->n; ++a0) {
        thislen = this->nonprim_onedim_dynamic[a0]._encodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        for (int a1 = 0; a1 < 3; ++a1) {
            thislen = this->nonprim_twodim_static_static[a0][a1]._encodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        for (int a1 = 0; a1 < this->n; ++a1) {
            thislen = this->nonprim_twodim_static_dynamic[a0][a1]._encodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    for (int a0 = 0; a0 < this->n; ++a0) {
        for (int a1 = 0; a1 < 3; ++a1) {
            thislen = this->nonprim_twodim_dynamic_static[a0][a1]._encodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    for (int a0 = 0; a0 < this->m; ++a0) {
        for (int a1 = 0; a1 < this->n; ++a1) {
            thislen = this->nonprim_twodim_dynamic_dynamic[a0][a1]._encodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    return pos_byte;
}

int arrays_t::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos_byte = 0;
    int thislen;

    thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->m, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->n, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    thislen = __boolean_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_onedim_static[0], 3);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    if(this->n > 0) {
        this->prim_onedim_dynamic.resize(this->n);
        thislen = __int16_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_onedim_dynamic[0], this->n);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        thislen = __int32_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_static_static[a0][0], 3);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    this->prim_twodim_static_dynamic.resize(3);
    for (int a0 = 0; a0 < 3; ++a0) {
        if(this->n > 0) {
            this->prim_twodim_static_dynamic[a0].resize(this->n);
            thislen = __int64_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_static_dynamic[a0][0], this->n);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    this->prim_twodim_dynamic_static.resize(this->n);
    for (int a0 = 0; a0 < this->n; ++a0) {
        if(3 > 0) {
            this->prim_twodim_dynamic_static[a0].resize(3);
            thislen = __float_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_dynamic_static[a0][0], 3);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    this->prim_twodim_dynamic_dynamic.resize(this->m);
    for (int a0 = 0; a0 < this->m; ++a0) {
        if(this->n > 0) {
            this->prim_twodim_dynamic_dynamic[a0].resize(this->n);
            thislen = __double_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->prim_twodim_dynamic_dynamic[a0][0], this->n);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        thislen = this->nonprim_onedim_static[a0]._decodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    this->nonprim_onedim_dynamic.resize(this->n);
    for (int a0 = 0; a0 < this->n; ++a0) {
        thislen = this->nonprim_onedim_dynamic[a0]._decodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
        if(thislen < 0) return thislen; else pos_byte += thislen;
    }

    for (int a0 = 0; a0 < 3; ++a0) {
        for (int a1 = 0; a1 < 3; ++a1) {
            thislen = this->nonprim_twodim_static_static[a0][a1]._decodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    this->nonprim_twodim_static_dynamic.resize(3);
    for (int a0 = 0; a0 < 3; ++a0) {
        this->nonprim_twodim_static_dynamic[a0].resize(this->n);
        for (int a1 = 0; a1 < this->n; ++a1) {
            thislen = this->nonprim_twodim_static_dynamic[a0][a1]._decodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    this->nonprim_twodim_dynamic_static.resize(this->n);
    for (int a0 = 0; a0 < this->n; ++a0) {
        this->nonprim_twodim_dynamic_static[a0].resize(3);
        for (int a1 = 0; a1 < 3; ++a1) {
            thislen = this->nonprim_twodim_dynamic_static[a0][a1]._decodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    this->nonprim_twodim_dynamic_dynamic.resize(this->m);
    for (int a0 = 0; a0 < this->m; ++a0) {
        this->nonprim_twodim_dynamic_dynamic[a0].resize(this->n);
        for (int a1 = 0; a1 < this->n; ++a1) {
            thislen = this->nonprim_twodim_dynamic_dynamic[a0][a1]._decodeNoHash(buf, offset + pos_byte, maxlen - pos_byte);
            if(thislen < 0) return thislen; else pos_byte += thislen;
        }
    }

    return pos_byte;
}

uint32_t arrays_t::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 3);
    enc_size += __int16_t_encoded_array_size(NULL, this->n);
    enc_size += 3 * __int32_t_encoded_array_size(NULL, 3);
    enc_size += 3 * __int64_t_encoded_array_size(NULL, this->n);
    enc_size += this->n * __float_encoded_array_size(NULL, 3);
    enc_size += this->m * __double_encoded_array_size(NULL, this->n);
    for (int a0 = 0; a0 < 3; ++a0) {
        enc_size += this->nonprim_onedim_static[a0]._getEncodedSizeNoHash();
    }
    for (int a0 = 0; a0 < this->n; ++a0) {
        enc_size += this->nonprim_onedim_dynamic[a0]._getEncodedSizeNoHash();
    }
    for (int a0 = 0; a0 < 3; ++a0) {
        for (int a1 = 0; a1 < 3; ++a1) {
            enc_size += this->nonprim_twodim_static_static[a0][a1]._getEncodedSizeNoHash();
        }
    }
    for (int a0 = 0; a0 < 3; ++a0) {
        for (int a1 = 0; a1 < this->n; ++a1) {
            enc_size += this->nonprim_twodim_static_dynamic[a0][a1]._getEncodedSizeNoHash();
        }
    }
    for (int a0 = 0; a0 < this->n; ++a0) {
        for (int a1 = 0; a1 < 3; ++a1) {
            enc_size += this->nonprim_twodim_dynamic_static[a0][a1]._getEncodedSizeNoHash();
        }
    }
    for (int a0 = 0; a0 < this->m; ++a0) {
        for (int a1 = 0; a1 < this->n; ++a1) {
            enc_size += this->nonprim_twodim_dynamic_dynamic[a0][a1]._getEncodedSizeNoHash();
        }
    }
    return enc_size;
}

uint64_t arrays_t::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == arrays_t::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)arrays_t::getHash };

    uint64_t hash = (uint64_t)0x6ebeacdee9743f6bLL +
         example_t::_computeHash(&cp) +
         example_t::_computeHash(&cp) +
         example_t::_computeHash(&cp) +
         example_t::_computeHash(&cp) +
         example_t::_computeHash(&cp) +
         example_t::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif