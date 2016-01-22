
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_SSLSocketImpl$SocketOutputStream__
#define __gnu_javax_net_ssl_provider_SSLSocketImpl$SocketOutputStream__

#pragma interface

#include <java/io/OutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class SSLSocketImpl;
              class SSLSocketImpl$SocketOutputStream;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::javax::net::ssl::provider::SSLSocketImpl$SocketOutputStream : public ::java::io::OutputStream
{

public: // actually package-private
  SSLSocketImpl$SocketOutputStream(::gnu::javax::net::ssl::provider::SSLSocketImpl *);
public:
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void write(jint);
  virtual void close();
private:
  ::java::nio::ByteBuffer * __attribute__((aligned(__alignof__( ::java::io::OutputStream)))) buffer;
  ::java::io::OutputStream * out;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::SSLSocketImpl * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_SSLSocketImpl$SocketOutputStream__