
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_ClientHandshake$RSAGen__
#define __gnu_javax_net_ssl_provider_ClientHandshake$RSAGen__

#pragma interface

#include <gnu/javax/net/ssl/provider/DelegatedTask.h>
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
              class ClientHandshake;
              class ClientHandshake$RSAGen;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::ClientHandshake$RSAGen : public ::gnu::javax::net::ssl::provider::DelegatedTask
{

public: // actually package-private
  ClientHandshake$RSAGen(::gnu::javax::net::ssl::provider::ClientHandshake *);
  ClientHandshake$RSAGen(::gnu::javax::net::ssl::provider::ClientHandshake *, jboolean);
public:
  virtual void implRun();
public: // actually package-private
  virtual JArray< jbyte > * encryptedSecret();
private:
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::gnu::javax::net::ssl::provider::DelegatedTask)))) encryptedPreMasterSecret;
  jboolean full;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::ClientHandshake * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_ClientHandshake$RSAGen__
