/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf -L C++ -E -t /tmp/miga/ti.downloadmanager-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/tmp/miga/ti.downloadmanager-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.miga.downloadmanager.TiDownloadmanagerModule.h"


#line 13 "/tmp/miga/ti.downloadmanager-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class TiDownloadmanagerBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TiDownloadmanagerBindings::hash (register const char *str, register unsigned int len)
{
  return 0;
}

struct titanium::bindings::BindEntry *
TiDownloadmanagerBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 48,
      MAX_WORD_LENGTH = 48,
      MIN_HASH_VALUE = 0,
      MAX_HASH_VALUE = 0
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
#line 15 "/tmp/miga/ti.downloadmanager-generated/KrollGeneratedBindings.gperf"
      {"com.miga.downloadmanager.TiDownloadmanagerModule", ::com::miga::downloadmanager::TiDownloadmanagerModule::bindProxy, ::com::miga::downloadmanager::TiDownloadmanagerModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/tmp/miga/ti.downloadmanager-generated/KrollGeneratedBindings.gperf"

