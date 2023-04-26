"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from example4_t import example4_t

class packaged2_t(object):
    __slots__ = ["packaged", "e"]

    IS_LITTLE_ENDIAN = False;
    def __init__(self):
        self.packaged = False
        self.e = example4_t()

    def encode(self):
        buf = BytesIO()
        buf.write(packaged2_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack('b', self.packaged))
        assert self.e._get_packed_fingerprint() == example4_t._get_packed_fingerprint()
        self.e._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != packaged2_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return packaged2_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = packaged2_t()
        self.packaged = bool(struct.unpack('b', buf.read(1))[0])
        self.e = example4_t._decode_one(buf)
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if packaged2_t in parents: return 0
        newparents = parents + [packaged2_t]
        tmphash = (0x471a628ba5e54d99+ example4_t._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if packaged2_t._packed_fingerprint is None:
            packaged2_t._packed_fingerprint = struct.pack(">Q", packaged2_t._get_hash_recursive([]))
        return packaged2_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

