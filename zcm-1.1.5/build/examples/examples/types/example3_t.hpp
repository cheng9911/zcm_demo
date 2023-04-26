/** THIS IS AN AUTOMATICALLY GENERATED FILE.
 *  DO NOT MODIFY BY HAND!!
 *
 *  Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __example3_t_hpp__
#define __example3_t_hpp__



class example3_t
{
    public:
        int32_t    arr[10];

    public:
        #if __cplusplus > 199711L /* if c++11 */
        static constexpr int8_t      IS_LITTLE_ENDIAN = 0;
        static constexpr int32_t     arrsize = 10;
        #else
        static const     int8_t      IS_LITTLE_ENDIAN = 0;
        static const     int32_t     arrsize = 10;
        #endif

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~example3_t() {}

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
         * Returns "example3_t"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int example3_t::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int example3_t::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t example3_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t example3_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* example3_t::getTypeName()
{
    return "example3_t";
}

int example3_t::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos_byte = 0;
    int thislen;

    thislen = __int32_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->arr[0], 10);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    return pos_byte;
}

int example3_t::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos_byte = 0;
    int thislen;

    thislen = __int32_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &this->arr[0], 10);
    if(thislen < 0) return thislen; else pos_byte += thislen;

    return pos_byte;
}

uint32_t example3_t::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 10);
    return enc_size;
}

uint64_t example3_t::_computeHash(const __zcm_hash_ptr*)
{
    uint64_t hash = (uint64_t)0x3d4bc295e6734bebLL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
