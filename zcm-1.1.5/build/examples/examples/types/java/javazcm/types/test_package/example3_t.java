/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcm.types.test_package;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class example3_t implements zcm.zcm.ZCMEncodable
{
    public boolean packaged;
 
    public example3_t()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x85bbc2e90a49c894L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcm.types.test_package.example3_t.class))
            return 0L;
 
        classes.add(javazcm.types.test_package.example3_t.class);
        long hash = ZCM_FINGERPRINT_BASE
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
 
    }
 
    public example3_t(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public example3_t(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcm.types.test_package.example3_t _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcm.types.test_package.example3_t o = new javazcm.types.test_package.example3_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.packaged = ins.readByte()!=0;
 
    }
 
    public javazcm.types.test_package.example3_t copy()
    {
        javazcm.types.test_package.example3_t outobj = new javazcm.types.test_package.example3_t();
        outobj.packaged = this.packaged;
 
        return outobj;
    }
 
}

