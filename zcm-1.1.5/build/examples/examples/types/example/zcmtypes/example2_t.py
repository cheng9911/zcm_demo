"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class example2_t(object):
    __slots__ = ["timestamp2", "position2", "orientation2", "num_ranges2", "ranges2", "name2", "enabled2"]

    IS_LITTLE_ENDIAN = False;
    def __init__(self):
        self.timestamp2 = 0
        self.position2 = [ 0.0 for dim0 in range(3) ]
        self.orientation2 = [ 0.0 for dim0 in range(4) ]
        self.num_ranges2 = 0
        self.ranges2 = []
        self.name2 = ""
        self.enabled2 = False

    def encode(self):
        buf = BytesIO()
        buf.write(example2_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">q", self.timestamp2))
        buf.write(struct.pack('>3d', *self.position2[:3]))
        buf.write(struct.pack('>4d', *self.orientation2[:4]))
        buf.write(struct.pack(">i", self.num_ranges2))
        buf.write(struct.pack('>%dh' % self.num_ranges2, *self.ranges2[:self.num_ranges2]))
        __name2_encoded = self.name2.encode('utf-8')
        buf.write(struct.pack('>I', len(__name2_encoded)+1))
        buf.write(__name2_encoded)
        buf.write(b"\0")
        buf.write(struct.pack('b', self.enabled2))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != example2_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return example2_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = example2_t()
        self.timestamp2 = struct.unpack(">q", buf.read(8))[0]
        self.position2 = struct.unpack('>3d', buf.read(24))
        self.orientation2 = struct.unpack('>4d', buf.read(32))
        self.num_ranges2 = struct.unpack(">i", buf.read(4))[0]
        self.ranges2 = struct.unpack('>%dh' % self.num_ranges2, buf.read(self.num_ranges2 * 2))
        __name2_len = struct.unpack('>I', buf.read(4))[0]
        self.name2 = buf.read(__name2_len)[:-1].decode('utf-8', 'replace')
        self.enabled2 = bool(struct.unpack('b', buf.read(1))[0])
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if example2_t in parents: return 0
        tmphash = (0x2caa13979d1b6e97) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if example2_t._packed_fingerprint is None:
            example2_t._packed_fingerprint = struct.pack(">Q", example2_t._get_hash_recursive([]))
        return example2_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

