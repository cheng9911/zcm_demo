/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcm.types.test_package;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class packaged_t implements zcm.zcm.ZCMEncodable
{
    public boolean packaged;
    public javazcm.types.test_package.packaged2_t a;
 
    public packaged_t()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x26471757e1db6303L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcm.types.test_package.packaged_t.class))
            return 0L;
 
        classes.add(javazcm.types.test_package.packaged_t.class);
        long hash = ZCM_FINGERPRINT_BASE
             + javazcm.types.test_package.packaged2_t._hashRecursive(classes)
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>>63)&1);
    }
 
    public void encode(ZCMDataOutputStream outs) throws IOException
    {
        outs.writeLong(ZCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(ZCMDataOutputStream outs) throws IOException
    {
        outs.writeByte( this.packaged ? 1 : 0);
 
        this.a._encodeRecursive(outs);
 
    }
 
    public packaged_t(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public packaged_t(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcm.types.test_package.packaged_t _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcm.types.test_package.packaged_t o = new javazcm.types.test_package.packaged_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.packaged = ins.readByte()!=0;
 
        this.a = javazcm.types.test_package.packaged2_t._decodeRecursiveFactory(ins);
 
    }
 
    public javazcm.types.test_package.packaged_t copy()
    {
        javazcm.types.test_package.packaged_t outobj = new javazcm.types.test_package.packaged_t();
        outobj.packaged = this.packaged;
 
        outobj.a = this.a.copy();
 
        return outobj;
    }
 
}
