#ifndef XML_CONFIG_STORE_H
#define XML_CONFIG_STORE_H

#include <string>
#include <libxml/xmlwriter.h>
#include <libxml/xmlreader.h>

///WINDOWS
//libxml����
#ifdef WIN32
#pragma comment(lib,"libxml2.lib")
#pragma comment(lib,"libxml2_a.lib")
#pragma comment(lib,"libxml2_a_dll.lib")
#endif 
///WINDOWS

#include "file-config.h"

namespace ns3 {

/**
 * \ingroup configstore
 *
 */
class XmlConfigSave : public FileConfig
{
public:
  XmlConfigSave ();
  virtual ~XmlConfigSave ();

  virtual void SetFilename (std::string filename);
  virtual void Default (void);
  virtual void Global (void);
  virtual void Attributes (void);
private:
  xmlTextWriterPtr m_writer;
};

/**
 * \ingroup configstore
 *
 */
class XmlConfigLoad : public FileConfig
{
public:
  XmlConfigLoad ();
  virtual ~XmlConfigLoad ();

  virtual void SetFilename (std::string filename);
  virtual void Default (void);
  virtual void Global (void);
  virtual void Attributes (void);
private:
  std::string m_filename;
};

} // namespace ns3

#endif /* XML_CONFIG_STORE_H */
