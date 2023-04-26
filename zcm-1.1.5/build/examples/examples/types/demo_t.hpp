/** THIS IS AN AUTOMATICALLY GENERATED FILE.
 *  DO NOT MODIFY BY HAND!!
 *
 *  Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __demo_t_hpp__
#define __demo_t_hpp__

#include <string>


class demo_t
{
    public:
        int64_t    timestamp;

        std::string name;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~demo_t() {}

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
         * Returns "demo_t"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int demo_t::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int demo_t::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t demo_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t demo_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* demo_t::getTypeName()
{
    return "demo_t";
}

int demo_t::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos_byte = 0;
    int thislen;

    thislen = __int64_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->timestamp, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    char* name_cstr = (char*) this->name.c_str();
    thislen = __string_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &name_cstr, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    return pos_byte;
}

int demo_t::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos_byte = 0;
    int thislen;

    thislen = __int64_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->timestamp, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    int32_t __name_len__;
    thislen = __int32_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &__name_len__, 1);
    if(thislen < 0) return thislen; else pos_byte += thislen;
    if((uint32_t)__name_len__ > maxlen - pos_byte) return -1;
    this->name.assign(((const char*)buf) + offset + pos_byte, __name_len__ - ZCM_CORETYPES_INT8_NUM_BYTES_ON_BUS);
    pos_byte += __name_len__;

    return pos_byte;
}

uint32_t demo_t::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += this->name.size() + ZCM_CORETYPES_INT32_NUM_BYTES_ON_BUS + ZCM_CORETYPES_INT8_NUM_BYTES_ON_BUS;
    return enc_size;
}

uint64_t demo_t::_computeHash(const __zcm_hash_ptr*)
{
    uint64_t hash = (uint64_t)0x19e1f2954f09cb22LL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
