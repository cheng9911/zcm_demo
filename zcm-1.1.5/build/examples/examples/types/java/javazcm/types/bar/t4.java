/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcm.types.bar;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class t4 implements zcm.zcm.ZCMEncodable
{
    public javazcm.types.foo.t2 x;
 
    public t4()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x1234567802743400L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcm.types.bar.t4.class))
            return 0L;
 
        classes.add(javazcm.types.bar.t4.class);
        long hash = ZCM_FINGERPRINT_BASE
             + javazcm.types.foo.t2._hashRecursive(classes)
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
        this.x._encodeRecursive(outs);
 
    }
 
    public t4(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public t4(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcm.types.bar.t4 _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcm.types.bar.t4 o = new javazcm.types.bar.t4();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.x = javazcm.types.foo.t2._decodeRecursiveFactory(ins);
 
    }
 
    public javazcm.types.bar.t4 copy()
    {
        javazcm.types.bar.t4 outobj = new javazcm.types.bar.t4();
        outobj.x = this.x.copy();
 
        return outobj;
    }
 
}
