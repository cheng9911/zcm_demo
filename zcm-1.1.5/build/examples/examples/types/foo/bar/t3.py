"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from unpackaged_t import unpackaged_t

class t3(object):
    __slots__ = ["x"]

    IS_LITTLE_ENDIAN = False;
    def __init__(self):
        self.x = unpackaged_t()

    def encode(self):
        buf = BytesIO()
        buf.write(t3._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.x._get_packed_fingerprint() == unpackaged_t._get_packed_fingerprint()
        self.x._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != t3._get_packed_fingerprint():
            raise ValueError("Decode error")
        return t3._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = t3()
        self.x = unpackaged_t._decode_one(buf)
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if t3 in parents: return 0
        newparents = parents + [t3]
        tmphash = (0x1234567802743300+ unpackaged_t._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if t3._packed_fingerprint is None:
            t3._packed_fingerprint = struct.pack(">Q", t3._get_hash_recursive([]))
        return t3._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
